/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:23:16 by jternero          #+#    #+#             */
/*   Updated: 2023/09/12 13:23:19 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_putnbr_fd(long long int n, int fd)
{
	const char	*base = "0123456789";
	int			nbr_len;

	nbr_len = 0;
	if (n == LLONG_MIN)
	{
		write(1, "-9223372036854775807", 20);
		return (20);
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		nbr_len += ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
	else
		write (fd, &base[n], 1);
	nbr_len += ft_nbrlen_base(n, ft_strlen(base));
	return (nbr_len);
}

/* imprime por pantalla un numero dado como parametro,
para eso creo una funcion que imprima los numeros que son mayores de 9,
*/
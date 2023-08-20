/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimgreg-fedora <jaimgreg-fedora@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:38:16 by jaimgreg-fe       #+#    #+#             */
/*   Updated: 2023/08/14 16:03:36 by jaimgreg-fe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_putnbr_base(long long int n, const char *base)
{
	int	base_len;
	int	n_len;

	n_len = 0;
	base_len = ft_strlen(base);
	if (n == LLONG_MIN)
	{
		write(1, "-9223372036854775807", 20);
		return (20);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n_len += ft_putnbr_base(-n, base);
	}
	if (n >= base_len)
	{
		ft_putnbr_base(n / base_len, base);
		ft_putnbr_base(n % base_len, base);
	}
	else
		write(1, &base[n], 1);
	n_len += ft_nbrlen_base(n, base_len);
	return (n_len);
}

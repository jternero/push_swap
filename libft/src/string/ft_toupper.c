/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:02:33 by jternero          #+#    #+#             */
/*   Updated: 2023/09/12 13:15:22 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*
esta funcion nos pondra en mayusculas
la letra que encuentre en minusculas.
le tendremos de que dar un entero,
y nos devolvera tambien un entero, siendo
un caracter en la tabla ascii.
*/
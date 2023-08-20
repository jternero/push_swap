/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimgreg-fedora <jaimgreg-fedora@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:21:39 by jternero          #+#    #+#             */
/*   Updated: 2023/08/14 16:05:09 by jaimgreg-fe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		lenght;
	char	*large;
	char	*small;

	large = (char *)big;
	small = (char *)little;
	i = 0;
	lenght = 0;
	if (*little == '\0')
		return ((char *)big);
	while (*large != '\0' && *small != '\0' && i++ <= len)
	{
		if (*large == *small)
		{
			while ((*(large + lenght) == *(small + lenght)) && i++ <= len)
			{
				if (*(small + lenght + 1) == '\0')
					return ((char *)large);
				lenght++;
			}
		}
		large++;
	}
	return (NULL);
}

/*
esta funcion nos devolvera la cadena (big) 
si la cadena little es menor que big 
y ademas si las cadenas son iguales.
si encuentra un caracter que no coincida nos devolvera null
si la cadena big es la menor nos devolvera null
si la cadena little es un caracter nulo nos devolvera big
*/

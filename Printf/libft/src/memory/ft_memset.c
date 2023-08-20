/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimgreg-fedora <jaimgreg-fedora@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:26:16 by jternero          #+#    #+#             */
/*   Updated: 2023/08/14 16:03:06 by jaimgreg-fe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
La función memset rellena los primeros len bytes 
del área de memoria apuntada por b con el
byte constante c.

la funcion devuelve un puntero al area de memoria b

en el puntero b se guardaran 'len' veces el caracter c,
reservando la memoria. 
*/
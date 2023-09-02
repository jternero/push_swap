/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimgreg-fedora <jaimgreg-fedora@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:24:34 by jternero          #+#    #+#             */
/*   Updated: 2023/08/14 16:03:03 by jaimgreg-fe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*ptr;

	if (!dst && !src)
		return (0);
	ptr = dst;
	if (src < dst)
	{
		src += len;
		dst += len;
		while (len--)
			*(char *)--dst = *(char *)--src;
	}
	else
		while (len--)
			*(char *)dst++ = *(char *)src++;
	return (ptr);
}

/*
La función memmove() devuelve un puntero a dest.

copia len bytes del area de memoria src al area de memoria dest. 
las areas de memoria pueden solaparse.

*/
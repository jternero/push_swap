/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimgreg-fedora <jaimgreg-fedora@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:00:41 by jternero          #+#    #+#             */
/*   Updated: 2023/08/14 16:02:46 by jaimgreg-fe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ppp;

	ppp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ppp[i] == (unsigned char)c)
		{
			return ((char *)&ppp[i]);
		}
		i++;
	}
	return (NULL);
}

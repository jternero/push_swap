/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimgreg-fedora <jaimgreg-fedora@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:46:48 by jternero          #+#    #+#             */
/*   Updated: 2023/08/14 16:02:55 by jaimgreg-fe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = (size_t)0;
	if (n == (size_t)0)
		return (0);
	while (i < n && (((unsigned char *)str1)[i] == ((unsigned char *)str2)[i]))
		i++;
	if (i == n)
		return (0);
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}

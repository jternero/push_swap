/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimgreg-fedora <jaimgreg-fedora@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:11:54 by jternero          #+#    #+#             */
/*   Updated: 2023/08/14 16:05:26 by jaimgreg-fe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strrchr(set, s1[len]))
		len--;
	str = ft_substr(s1, 0, len + 1);
	return (str);
}

/*
Esta funcion recorta la string que le demos como parametro
a partir del strin set que le indiquemos

*/
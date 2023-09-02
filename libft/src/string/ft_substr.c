/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimgreg-fedora <jaimgreg-fedora@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:50:41 by jternero          #+#    #+#             */
/*   Updated: 2023/08/14 18:48:14 by jaimgreg-fe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*res;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		res = malloc(1);
		if (!res)
			return (0);
		res[0] = '\0';
		return (res);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	while (start < ft_strlen(s) && i < len && s[start])
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}

/*
Esta funcion nos devuelve una sub cadena de la 
cadena que le demos como principal.
le indicaremos la posicion del string donde debemos empezar
a hacer la subcadena. Crearemos una reserva de memoria de
len +1, contando el caracter nulo.


int main(void)
{
	char	*str = "Welcome to the dark side";
	
	printf("The original string is |%s\n", str);
	
	printf("The Substring generated is |%s", ft_substr(str, 11, 4));
}
*/
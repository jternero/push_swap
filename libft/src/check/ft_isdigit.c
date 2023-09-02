/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimgreg-fedora <jaimgreg-fedora@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:41:43 by jternero          #+#    #+#             */
/*   Updated: 2023/08/14 16:01:57 by jaimgreg-fe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Esta funcion comprueba si el int c esta entre el numero 0 y 9
nos devolvera un 1 o un 0 dependiento si esta entre estos dos valores.
*/
#include "../../inc/libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

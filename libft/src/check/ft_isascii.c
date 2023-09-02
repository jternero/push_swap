/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimgreg-fedora <jaimgreg-fedora@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:59:38 by jternero          #+#    #+#             */
/*   Updated: 2023/08/14 16:01:54 by jaimgreg-fe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
esta funcion nos comprueba si el int c 
es un caracter que se encuentra en la tabla ascii, 
nos devuelve 1 o 0 segun sea cierto o falso. 
*/
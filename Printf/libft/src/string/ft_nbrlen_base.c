/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimgreg-fedora <jaimgreg-fedora@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:45:38 by jaimgreg-fe       #+#    #+#             */
/*   Updated: 2023/08/14 16:04:12 by jaimgreg-fe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

size_t	ft_nbrlen_base(long long int n, size_t base)
{
	size_t	i;

	i = 1;
	while (n >= (long long int)base)
	{
		n /= base;
		i++;
	}
	return (i);
}

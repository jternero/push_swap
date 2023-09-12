/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:13:16 by jternero          #+#    #+#             */
/*   Updated: 2023/09/12 13:13:19 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static double	after_point(const char *nptr, double res, int index)
{
	int	e;

	e = 0;
	while (ft_isdigit(nptr[index]))
	{
		res = (res * 10.) + (nptr[index] - '0');
		index++;
		e--;
	}
	while (e < 0)
	{
		res /= 10.;
		e++;
	}
	return (res);
}

double	ft_atof(const char *nptr)
{
	int		i;
	int		sign;
	double	res;

	i = 0;
	sign = 1;
	res = 0.0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-')
		sign *= -1;
	i += (nptr[i] == '+' || nptr[i] == '-');
	while (ft_isdigit(nptr[i]))
	{
		res = (res * 10.) + (nptr[i] - '0');
		i++;
	}
	if (nptr[i] != '.')
		return (res * sign);
	res = after_point(nptr, res, ++i);
	return (res * sign);
}

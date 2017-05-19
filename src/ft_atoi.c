/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 21:22:09 by ppatil            #+#    #+#             */
/*   Updated: 2016/07/25 21:22:09 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_strtools.h"

int	ft_atoi(char *str)
{
	int to_add;
	int value;

	to_add = 1;
	value = 0;
	while (*str && ft_is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			to_add = 0;
		str++;
	}
	while (ft_is_numeric(*str))
	{
		value *= 10;
		if (to_add)
			value += (*str) - '0';
		else
			value -= (*str) - '0';
		str++;
	}
	return (value);
}

int	ft_atoi_base(char *str, t_uint base, char *format)
{
	int to_add;
	int value;

	to_add = 1;
	value = 0;
	while (*str && ft_is_space(*str))
		str++;
	if (*str == format[1] || *str == format[0])
	{
		if (*str == format[1])
			to_add = 0;
		str++;
	}
	while (*ft_strfind(format + 2 * sizeof(char), *str))
	{
		value *= base;
		if (to_add)
			value += ft_strfind(format, *str) - str - 2;
		else
			value -= ft_strfind(format, *str) - str - 2;
		str++;
	}
	return (value);
}

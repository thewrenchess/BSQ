/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 14:48:24 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/01 13:28:15 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_strtools.h"

/*
** This will include the signage as a digit.
** If you want to remove signage use ft_count_digits_nsign(...)
*/

t_uint	ft_count_digits(int n, t_uint base)
{
	t_uint digits;

	digits = 0;
	if (n <= 0)
	{
		n = -n;
		digits++;
	}
	while (n)
	{
		n /= base;
		digits++;
	}
	return (digits);
}

t_uint	ft_count_digits_nsign(int n, t_uint base)
{
	t_uint digits;

	digits = 0;
	if (n < 0)
		n = -n;
	while (n)
	{
		n /= base;
		digits++;
	}
	return (digits);
}

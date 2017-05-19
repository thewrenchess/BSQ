/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itostring_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 12:03:34 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/01 12:36:47 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_string.h"

t_string	*ft_itostring_base(int n, t_uint base, t_uint min_d, char *format)
{
	t_string	*int_string;
	t_uint		num_digits;
	int			i;

	num_digits = ft_count_digits(n, base);
	if (num_digits < min_d)
		num_digits = min_d;
	int_string = ft_string_init(num_digits + 1);
	int_string->str_size = num_digits;
	int_string->end = int_string->buff + num_digits * sizeof(char);
	ft_strnfill(int_string->buff, format[1], num_digits);
	if (n < 0)
	{
		int_string->buff[0] = format[0];
		n = -n;
	}
	i = num_digits - 1;
	while (n)
	{
		int_string->buff[i] = format[1 + (n % base)];
		i--;
		n /= base;
	}
	return (int_string);
}

t_string	*ft_itostring_b(int n, t_uint min_d)
{
	return (ft_itostring_base(n, 2, min_d, "-01"));
}

t_string	*ft_itostring_o(int n, t_uint min_d)
{
	return (ft_itostring_base(n, 8, min_d, "-01234567"));
}

t_string	*ft_itostring_d(int n, t_uint min_d)
{
	return (ft_itostring_base(n, 10, min_d, "-0123456789"));
}

t_string	*ft_itostring_h(int n, t_uint min_d)
{
	return (ft_itostring_base(n, 16, min_d, "-0123456789ABCDEF"));
}

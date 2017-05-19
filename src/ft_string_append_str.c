/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_append_str.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 11:48:36 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/01 11:48:36 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_string.h"

void	ft_string_append_str(t_string *string, char *str)
{
	while (*str)
	{
		if (string->str_size == string->buf_size - 1)
			ft_string_resize(string, string->buf_size * 2 / 3);
		*(string->end) = *str;
		(string->end)++;
		(string->str_size)++;
		str++;
	}
	*(string->end) = 0;
}

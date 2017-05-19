/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_append_char.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 11:48:06 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/01 11:48:06 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_string.h"

void	ft_string_append_char(t_string *string, char c)
{
	if (string->str_size == string->buf_size - 1)
		ft_string_resize(string, string->buf_size * 2 / 3);
	*(string->end) = c;
	(string->end)++;
	*(string->end) = 0;
	string->str_size += 1;
}

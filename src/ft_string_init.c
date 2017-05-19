/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 12:06:53 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/01 12:06:53 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_string.h"

t_string	*ft_string_init(t_uint buf_size)
{
	t_string	*string;

	string = (t_string*)malloc(sizeof(t_string));
	if (string)
	{
		string->buf_size = buf_size;
		string->buff = (char*)malloc(sizeof(char) * buf_size);
		string->end = string->buff;
		string->str_size = 0;
		ft_strnfill(string->buff, 0, string->buf_size);
	}
	return (string);
}

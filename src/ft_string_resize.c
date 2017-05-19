/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_resize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 12:28:54 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/01 12:28:57 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_string.h"

void	ft_string_resize(t_string *string, t_uint size)
{
	char	*new_buff;

	new_buff = (char*)malloc(sizeof(char) * size);
	ft_strnfill(new_buff, 0, size);
	ft_strncpy(new_buff, string->buff, string->str_size);
	free(string->buff);
	string->buff = new_buff;
	string->buf_size = size;
	string->end = &string->buff[string->str_size];
}

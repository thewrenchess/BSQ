/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istring_init.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 15:12:20 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/03 15:12:20 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_istring.h"

t_istring	*ft_istring_init(t_uint buf_size)
{
	t_istring	*new_istr;
	t_uint		i;

	if (!buf_size)
		return (NULL);
	new_istr = (t_istring*)malloc(sizeof(t_istring));
	new_istr->buf = (int*)malloc(sizeof(int) * buf_size);
	new_istr->buf_size = buf_size;
	new_istr->end = new_istr->buf;
	new_istr->str_size = 0;
	i = 0;
	while (i < buf_size)
		new_istr->buf[i++] = 0;
	return (new_istr);
}

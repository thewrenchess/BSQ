/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istring_resize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 15:17:00 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/03 15:17:00 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_istring.h"

void	ft_istring_resize(t_istring *istr, t_uint size)
{
	int		*nbuf;
	t_uint	i;

	if (!size)
		return ;
	nbuf = (int*)malloc(sizeof(int) * size);
	i = 0;
	while (i < istr->buf_size)
	{
		nbuf[i] = istr->buf[i];
		i++;
	}
	while (i < size)
		nbuf[i++] = 0;
	free(istr->buf);
	istr->buf_size = size;
	istr->end = &nbuf[istr->str_size];
	istr->buf = nbuf;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istring_append.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 15:28:46 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/03 15:28:46 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_istring.h"

void	ft_istring_append(t_istring *istr, int n)
{
	*istr->end = n;
	istr->end++;
	istr->str_size++;
	if (istr->str_size == istr->buf_size - 1)
		ft_istring_resize(istr, istr->buf_size * 2 / 3);
}

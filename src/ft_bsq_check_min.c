/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq_check_min.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 18:55:52 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/03 18:55:52 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_bsq.h"

int	ft_bsq_check_min(t_istring *top, t_istring *bottom, int i)
{
	int	min;

	if (!i)
		return (1);
	min = top->buf[i - 1];
	if (top->buf[i] < min)
		min = top->buf[i];
	if (bottom->buf[i - 1] < min)
		min = bottom->buf[i - 1];
	return (min + 1);
}

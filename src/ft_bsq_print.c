/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 19:23:42 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/03 19:23:42 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_bsq.h"
#include "../inc/ft_output.h"

void	ft_bsq_print(t_vec3 bm, t_vec3 res, char *str, char fill)
{
	t_vec3		cr;

	cr = ft_vec3_make(0, 0, 0);
	while (cr.y < bm.y)
	{
		cr.x = 0;
		while (cr.x < bm.x)
		{
			if (cr.x > res.x - res.z && cr.x <= res.x
				&& cr.y > res.y - res.z && cr.y <= res.y)
				*str = (fill);
			cr.x++;
			str++;
		}
		str++;
		cr.y++;
	}
}

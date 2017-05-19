/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq_solve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 20:57:02 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/01 20:57:02 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_bsq.h"
#include "../inc/ft_istring.h"
#include "../inc/ft_output.h"

static void	swap_buffers(t_istring **b1, t_istring **b2)
{
	register t_istring	*t;

	t = *b2;
	*b2 = *b1;
	*b1 = t;
}

t_vec3		ft_bsq_solve(t_bsq *bsq, char *s, t_vec3 i)
{
	register t_vec3		sv;
	t_istring			*b1;
	t_istring			*b2;

	b1 = ft_istring_init(bsq->width);
	b2 = ft_istring_init(bsq->width);
	sv = i;
	while (i.y < (int)bsq->height)
	{
		i.x = 0;
		while (i.x < (int)bsq->width)
		{
			i.z = ((*s != bsq->format[0]) ? 0 : ft_bsq_check_min(b1, b2, i.x));
			b2->buf[i.x] = i.z;
			sv = ((i.z > sv.z) ? i : sv);
			i.x++;
			s++;
		}
		swap_buffers(&b2, &b1);
		i.y++;
		s++;
	}
	ft_istring_destroy(b1);
	ft_istring_destroy(b2);
	return (sv);
}

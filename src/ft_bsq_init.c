/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 19:16:31 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/03 19:16:31 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_bsq.h"

t_bsq	*ft_bsq_init(t_string *input)
{
	t_bsq	*bsq;
	char	*iter;
	t_vec3	sizes;

	iter = input->buff;
	sizes = ft_vec3_make(0, ft_atoi(iter), 0);
	if (sizes.y < 1)
		return (NULL);
	while (*iter && ft_is_numeric(*iter))
		iter++;
	bsq = (t_bsq*)malloc(sizeof(t_bsq));
	bsq->format[3] = 0;
	bsq->height = sizes.y;
	iter = iter + ft_strncpy(bsq->format, iter, 3) * sizeof(char) + 1;
	while (*iter && *iter != '\n')
	{
		sizes.x++;
		iter++;
	}
	bsq->width = sizes.x;
	bsq->str = input;
	return (bsq);
}

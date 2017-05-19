/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq_verify.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 20:59:34 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/01 20:59:34 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_bsq.h"
#include "../inc/ft_strtools.h"

int	ft_bsq_verify(t_bsq *map, char *iter)
{
	t_vec3	p;

	p = ft_vec3_make(0, 0, 0);
	while (*iter)
	{
		if (*iter == '\n')
		{
			if ((t_uint)p.x != map->width)
				return (0);
			p.x = 0;
			p.y++;
		}
		else
			p.x++;
		if (!(*ft_strfind(map->format, *iter)) && *iter != '\n')
			return (0);
		iter++;
	}
	if ((t_uint)p.y == map->height)
		return (1);
	return (0);
}

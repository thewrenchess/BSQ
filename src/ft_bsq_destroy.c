/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 19:37:49 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/03 19:37:49 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_bsq.h"

void	ft_bsq_destroy(t_bsq *bm)
{
	if (bm->str)
		ft_string_destroy(bm->str);
	free(bm);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istring_destroy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 15:31:28 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/03 15:31:28 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_istring.h"

void	ft_istring_destroy(t_istring *istr)
{
	if (istr->buf)
		free(istr->buf);
	free(istr);
}

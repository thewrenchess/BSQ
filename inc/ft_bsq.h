/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 13:49:47 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/01 13:49:47 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

# include "ft_string.h"
# include "ft_strtools.h"
# include "ft_istring.h"

struct	s_bsq
{
	t_string	*str;
	t_uint		height;
	t_uint		width;
	char		format[4];
};

typedef	struct s_bsq	t_bsq;

struct	s_vec3
{
	int	x;
	int	y;
	int	z;
};

typedef	struct s_vec3	t_vec3;

t_bsq	*ft_bsq_init(t_string *input);

t_vec3	ft_vec3_make(int x, int y, int z);

t_vec3	ft_bsq_solve(t_bsq *map, char *s, t_vec3 i);

void	ft_bsq_print(t_vec3 bm, t_vec3 res, char *str, char fill);

void	ft_bsq_destroy(t_bsq *bm);

int		ft_bsq_check_min(t_istring *top, t_istring *bottom, int i);

int		ft_bsq_verify(t_bsq *bsq, char *iter);

#endif

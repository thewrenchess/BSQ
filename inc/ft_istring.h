/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istring.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 15:04:56 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/03 15:04:56 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ISTRING_H
# define FT_ISTRING_H

# include <stdlib.h>
# include "ft_typedefs.h"

struct		s_istring
{
	int		*buf;
	int		*end;
	t_uint	buf_size;
	t_uint	str_size;
};

typedef	struct s_istring	t_istring;

t_istring	*ft_istring_init(t_uint buf_size);

void		ft_istring_resize(t_istring *istr, t_uint size);

void		ft_istring_append(t_istring *istr, int n);

void		ft_istring_destroy(t_istring *istr);

#endif

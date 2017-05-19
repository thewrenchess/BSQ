/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 14:40:34 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/01 12:28:34 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stdlib.h>
# include "ft_strtools.h"
# include "ft_typedefs.h"

struct					s_string
{
	char	*buff;
	char	*end;
	t_uint	str_size;
	t_uint	buf_size;
};

typedef	struct s_string	t_string;

t_string				*ft_string_init(t_uint buf_size);

t_string				*ft_itostring_base(
							int n,
							t_uint base,
							t_uint min_d,
							char *format
);

t_string				*ft_itostring_b(int n, t_uint min_d);

t_string				*ft_itostring_o(int n, t_uint min_d);

t_string				*ft_itostring_d(int n, t_uint min_d);

t_string				*ft_itostring_h(int n, t_uint min_d);

t_string				*ft_string_readin(int fd);

t_string				*ft_itostring(int n);

void					ft_string_resize(t_string *string, t_uint size);

void					ft_string_append_char(t_string *string, char c);

void					ft_string_append_str(t_string *string, char *str);

void					ft_string_destroy(t_string *string);

void					ft_string_print_f(t_string *string, int fd);

void					ft_string_print(t_string *string);

#endif

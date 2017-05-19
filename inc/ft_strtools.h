/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtools.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 20:52:59 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/01 11:37:52 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRTOOLS_H
# define FT_STRTOOLS_H

# include "ft_typedefs.h"

t_uint	ft_count_digits(int n, t_uint base);

int		ft_is_numeric(char c);

int		ft_is_space(char c);

int		ft_atoi(char *str);

int		ft_atoi_base(char *str, t_uint base, char *format);

int		ft_strcmp(char *s1, char *s2);

int		ft_strncpy(char *dest, char *src, t_uint n);

t_uint	ft_strlen(char *str);

void	ft_strfill(char *str, char c);

void	ft_strnfill(char *str, char c, t_uint n);

char	*ft_strfind(char *str, char to_find);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 20:31:08 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/01 12:36:39 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OUTPUT_H
# define FT_OUTPUT_H

# include "ft_typedefs.h"

void	ft_putchar(char c);

void	ft_putchar_f(char c, int fd);

void	ft_putstr(char *str);

void	ft_putstr_f(char *str, int fd);

void	ft_putstr_fn(char *str, int fd, t_uint n);

void	ft_putint_b(int n, t_uint base, t_uint min_d, const char *format);

void	ft_putint_bin(int n, t_uint min_d);

void	ft_putint_o(int n, t_uint min_d);

void	ft_putint_d(int n, t_uint min_d);

void	ft_putint_h(int n, t_uint min_d);

void	ft_putnbr(int nb);

#endif

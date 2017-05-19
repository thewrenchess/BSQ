/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 20:29:41 by ppatil            #+#    #+#             */
/*   Updated: 2016/07/25 20:29:41 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_output.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	t_uint	len;
	char	*i;

	len = 0;
	i = str;
	while (*i)
	{
		len++;
		i++;
	}
	write(1, str, len);
}

void	ft_putstr_f(char *str, int fd)
{
	t_uint	len;
	char	*i;

	len = 0;
	i = str;
	while (*i)
	{
		len++;
		i++;
	}
	write(fd, str, len);
}

void	ft_putstr_fn(char *str, int fd, t_uint n)
{
	write(fd, str, n);
}

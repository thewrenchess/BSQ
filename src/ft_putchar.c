/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 20:28:33 by ppatil            #+#    #+#             */
/*   Updated: 2016/07/25 20:28:33 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../inc/ft_output.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_f(char c, int fd)
{
	write(fd, &c, 1);
}

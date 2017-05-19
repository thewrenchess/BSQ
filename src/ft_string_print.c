/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 17:14:23 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/02 17:14:23 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_string.h"
#include <unistd.h>

void	ft_string_print_f(t_string *string, int fd)
{
	write(fd, string->buff, string->str_size);
}

void	ft_string_print(t_string *string)
{
	write(1, string->buff, string->str_size);
}

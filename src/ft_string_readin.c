/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_readin.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 21:52:37 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/01 21:52:37 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include "../inc/ft_string.h"

t_string	*ft_string_readin(int fd)
{
	t_string	*input;
	t_uint		result;

	input = ft_string_init(4096);
	while ((result = read(fd, input->end,
		input->buf_size - input->str_size - 1)) > 0)
	{
		input->end += sizeof(char) * result;
		*(input->end) = 0;
		input->str_size += result;
		if (input->str_size == input->buf_size - 1)
			ft_string_resize(input, input->buf_size * 2);
	}
	return (input);
}

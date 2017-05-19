/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 21:04:43 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/01 21:04:43 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include "../inc/ft_bsq.h"
#include "../inc/ft_output.h"
#include "../inc/ft_strtools.h"

static t_string	*ft_string_readin_n(int fd, t_uint size)
{
	register t_uint		result;
	t_string			*input;

	input = ft_string_init(size);
	result = read(fd, input->buff, size);
	input->end += result;
	input->str_size += result;
	return (input);
}

static t_uint	bsq_filesize(char *path)
{
	register t_uint	bytes_read;
	register t_uint	total;
	char			temp[4 * 4096];
	int				fd;

	total = 0;
	fd = open(path, O_RDONLY);
	if (fd < 3)
		return (0);
	while ((bytes_read = read(fd, temp, 4 * 4096)))
		total += bytes_read;
	close(fd);
	return (total);
}

int				ft_bsq_file(char *path, t_string *input, t_bsq *bsq)
{
	t_vec3		max;
	t_uint		fsize;
	int			fd;

	if (!(fsize = bsq_filesize(path)))
		return (0);
	fd = open(path, O_RDONLY);
	input = ft_string_readin_n(fd, fsize);
	close(fd);
	path = ft_strfind(input->buff, '\n') + 1;
	bsq = ft_bsq_init(input);
	if (!bsq || !ft_bsq_verify(bsq, path))
	{
		if (bsq)
			ft_bsq_destroy(bsq);
		else
			ft_string_destroy(input);
		return (0);
	}
	max = ft_bsq_solve(bsq, path, ft_vec3_make(0, 0, 0));
	ft_bsq_print(ft_vec3_make(bsq->width, bsq->height, 0),
		max, path, bsq->format[2]);
	ft_putstr_fn(path, 1, input->buf_size);
	ft_bsq_destroy(bsq);
	return (1);
}

int				ft_bsq_stdin(void)
{
	t_string	*input;
	t_bsq		*bsq;
	t_vec3		max;
	char		*mstart;

	input = ft_string_readin(0);
	mstart = ft_strfind(input->buff, '\n') + 1;
	bsq = ft_bsq_init(input);
	if (!bsq || !ft_bsq_verify(bsq, mstart))
	{
		if (bsq)
			ft_bsq_destroy(bsq);
		else
			ft_string_destroy(input);
		return (0);
	}
	max = ft_bsq_solve(bsq, mstart, ft_vec3_make(0, 0, 0));
	ft_bsq_print(ft_vec3_make(bsq->width, bsq->height, 0),
		max, mstart, bsq->format[2]);
	ft_putstr_fn(mstart, 1, input->buf_size);
	ft_bsq_destroy(bsq);
	return (1);
}

int				main(int argc, char **argv)
{
	register int	f;
	register int	res;

	if (argc > 1)
	{
		f = 1;
		while (f < argc)
		{
			res = ft_bsq_file(argv[f], 0, 0);
			if (res < 1)
				ft_putstr_f("map error\n", 2);
			f++;
		}
	}
	else
	{
		res = ft_bsq_stdin();
		if (res < 1)
			ft_putstr_f("map error\n", 2);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 12:40:01 by ppatil            #+#    #+#             */
/*   Updated: 2016/08/01 12:40:01 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_strtools.h"

char	*ft_strfind(char *str, char to_find)
{
	while (*str && *str != to_find)
		str++;
	return (str);
}

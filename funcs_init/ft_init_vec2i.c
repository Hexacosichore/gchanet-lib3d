/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_vec2i.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:12:10 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/18 12:02:27 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

t_vec2i	*ft_init_vec2i(int x, int y)
{
	t_vec2i	*res;

	res = (t_vec2i *)malloc(sizeof(t_vec2i));
	if (!res)
		return (NULL);
	res->x = x;
	res->y = y;
	return (res);
}

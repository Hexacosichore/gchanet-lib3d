/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_vec3i.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:12:03 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/18 12:02:35 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

t_vec3i	*ft_init_vec3i(int x, int y, int z)
{
	t_vec3i	*res;

	res = (t_vec3i *)malloc(sizeof(t_vec3i));
	if (!res)
		return (NULL);
	res->x = x;
	res->y = y;
	res->z = z;
	return (res);
}

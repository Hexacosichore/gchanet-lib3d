/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_edge.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:48:19 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/18 14:21:58 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

t_edge	*ft_init_edge(t_vec3 v0, t_vec3 v1)
{
	t_edge	*res;

	res = (t_edge *)malloc(sizeof(t_edge));
	if (!res)
		return (NULL);
	res->v0.x = (int)v0.x;
	res->v0.y = (int)v0.y;
	res->v0.z = (int)v0.z;
	res->v1.x = (int)v1.x;
	res->v1.y = (int)v1.y;
	res->v1.z = (int)v1.z;
	res->d.x = (int)fabs(v0.x - v1.x);
	res->d.y = (int)fabs(v0.y - v1.y);
	if (v0.x < v1.x)
		res->s.x = 1;
	else
		res->s.x = -1;
	if (v0.y < v1.y)
		res->s.y = 1;
	else
		res->s.y = -1;
	return (res);
}

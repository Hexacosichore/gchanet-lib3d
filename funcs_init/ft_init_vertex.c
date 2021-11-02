/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_vertex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:08:31 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/21 10:51:37 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

t_vertex	*ft_init_vertex(double x, double y, double z)
{
	t_vertex	*res;

	res = (t_vertex *)malloc(sizeof(t_vertex));
	if (!res)
		return (NULL);
	res->local = ft_init_vec3(x, y, z);
	res->world = ft_init_vec3(0, 0, 0);
	res->aligned = ft_init_vec3(0, 0, 0);
	res->projected = ft_init_vec3(0, 0, 0);
	return (res);
}

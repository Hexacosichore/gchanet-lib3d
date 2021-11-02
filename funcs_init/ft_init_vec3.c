/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_vec3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:11:50 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/18 12:02:30 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

t_vec3	*ft_init_vec3(float x, float y, float z)
{
	t_vec3	*res;

	res = (t_vec3 *)malloc(sizeof(t_vec3));
	if (!res)
		return (NULL);
	res->x = x;
	res->y = y;
	res->z = z;
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matmultivec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 12:03:33 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/19 12:56:48 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

void	ft_matmultivec(t_vec3 src, t_mat mat, t_vec3 *dst)
{
	float	w;

	dst->x = src.x * mat.x[0] + src.y * mat.y[0] + src.z * mat.z[0] + mat.w[0];
	dst->y = src.x * mat.x[1] + src.y * mat.y[1] + src.z * mat.z[1] + mat.w[1];
	dst->z = src.x * mat.x[2] + src.y * mat.y[2] + src.z * mat.z[2] + mat.w[2];
	w = src.x * mat.x[3] + src.y * mat.y[3] + src.z * mat.z[3] + mat.w[3];
	if (w != 0.0f)
	{
		dst->x /= w;
		dst->y /= w;
		dst->z /= w;
	}
}

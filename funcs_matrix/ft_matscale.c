/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matscale.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:24:24 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/18 15:50:16 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

void	ft_matscale(t_mat *mat, t_vec3 scale)
{
	t_mat	scale_mat;

	ft_matbzero(&scale_mat);
	scale_mat.x[0] = scale.x;
	scale_mat.y[1] = scale.y;
	scale_mat.z[2] = scale.z;
	scale_mat.w[3] = 1;
	ft_matmulti(*mat, scale_mat, mat);
}

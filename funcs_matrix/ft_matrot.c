/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:15:21 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/19 12:41:18 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

void	ft_matrot(t_mat *mat, t_vec3 rotation)
{
	t_mat	rotx;
	t_mat	roty;
	t_mat	rotz;
	t_mat	mat1;
	t_mat	mat2;

	ft_matrotx(&rotx, rotation.x);
	ft_matroty(&roty, rotation.y);
	ft_matrotz(&rotz, rotation.z);
	ft_matmulti(*mat, roty, &mat1);
	ft_matmulti(mat1, rotx, &mat2);
	ft_matmulti(mat2, rotz, mat);
}

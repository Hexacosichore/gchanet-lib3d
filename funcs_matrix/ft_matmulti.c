/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matmulti.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:18:00 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/18 15:49:58 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

void	ft_matmulti(t_mat m1, t_mat m2, t_mat *dst)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		dst->x[j] = m1.x[0] * m2.x[j] + m1.x[1] * m2.y[j]
			+ m1.x[2] * m2.z[j] + m1.x[3] * m2.w[j];
		dst->y[j] = m1.y[0] * m2.x[j] + m1.y[1] * m2.y[j]
			+ m1.y[2] * m2.z[j] + m1.y[3] * m2.w[j];
		dst->z[j] = m1.z[0] * m2.x[j] + m1.z[1] * m2.y[j]
			+ m1.z[2] * m2.z[j] + m1.z[3] * m2.w[j];
		dst->w[j] = m1.w[0] * m2.x[j] + m1.w[1] * m2.y[j]
			+ m1.w[2] * m2.z[j] + m1.w[3] * m2.w[j];
		j++;
	}
}

// void	ft_matmulti(float m1[4][4], float m2[4][4], float dst[4][4])
// {
// 	int	i;
// 	int	j;

// 	i = -1;
// 	while (++i < 4)
// 	{
// 		j = -1;
// 		while (++j < 4)
// 			dst[i][j] = m1[i][0] * m2[0][j] + m1[i][1] * m2[1][j]
// 				+ m1[i][2] * m2[2][j] + m1[i][3] * m2[3][j];
// 	}
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrotx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:07:26 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/19 12:34:18 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

void	ft_matrotx(t_mat *mat, double theta)
{
	ft_matbzero(mat);
	mat->x[0] = 1;
	mat->y[1] = cosf(theta);
	mat->y[2] = sinf(theta);
	mat->z[1] = -sinf(theta);
	mat->z[2] = cosf(theta);
	mat->w[3] = 1;
}

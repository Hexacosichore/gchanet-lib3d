/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matroty.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:12:57 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/19 12:38:06 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

void	ft_matroty(t_mat *mat, double phi)
{
	ft_matbzero(mat);
	mat->x[0] = cosf(phi);
	mat->x[2] = sinf(phi);
	mat->z[0] = -sinf(phi);
	mat->y[1] = 1.0f;
	mat->z[2] = cosf(phi);
	mat->w[3] = 1.0f;
}

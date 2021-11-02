/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrotz.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:14:37 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/19 12:32:39 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

void	ft_matrotz(t_mat *mat, double psi)
{
	ft_matbzero(mat);
	mat->x[0] = cosf(psi);
	mat->x[1] = sinf(psi);
	mat->y[0] = -sinf(psi);
	mat->y[1] = cosf(psi);
	mat->z[2] = 1;
	mat->w[3] = 1;
}

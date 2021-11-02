/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mattranslate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:25:40 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/18 15:50:19 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

void	ft_mattranslate(t_mat *mat, t_vec3 position)
{
	t_mat	tran_mat;

	ft_matidentity(&tran_mat);
	tran_mat.w[0] = position.x;
	tran_mat.w[1] = position.y;
	tran_mat.w[2] = position.z;
	ft_matmulti(*mat, tran_mat, mat);
}

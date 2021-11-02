/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matbzero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:14:10 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/18 15:49:50 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

void	ft_matbzero(t_mat *mat)
{
	ft_bzero(mat->x, sizeof(double) * 4);
	ft_bzero(mat->y, sizeof(double) * 4);
	ft_bzero(mat->z, sizeof(double) * 4);
	ft_bzero(mat->w, sizeof(double) * 4);
}

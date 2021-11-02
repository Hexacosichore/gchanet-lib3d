/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_img_reset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:14:20 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/18 20:24:45 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

void	ft_img_reset(t_mlx *mlx, int size_x, int size_y)
{
	mlx->img.img = mlx_new_image(mlx->mlx_ptr, size_x, size_y);
	mlx->img.addr = mlx_get_data_addr(mlx->img.img, &mlx->img.bpp,
			&mlx->img.line_length, &mlx->img.endian);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_mlx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:35:08 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/19 10:48:38 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

t_mlx	*ft_init_mlx(int size_x, int size_y, char *name)
{
	t_mlx	*mlx;

	mlx = (t_mlx *)malloc(sizeof(t_mlx));
	if (!mlx)
		return (NULL);
	mlx->cam = (t_cam *)malloc(sizeof(t_cam));
	mlx->cam->near = 0.1f;
	mlx->cam->far = 1000.0f;
	mlx->cam->fov = 90.0f;
	mlx->cam->aspect_ratio = (float)size_y / (float)size_x;
	mlx->cam->fov_rad = 1.0f / tanf(mlx->cam->fov * 0.5f / 180.0f * 3.14159f);
	ft_matbzero(&mlx->cam->mat_proj);
	mlx->cam->mat_proj.x[0] = mlx->cam->aspect_ratio * mlx->cam->fov_rad;
	mlx->cam->mat_proj.y[1] = mlx->cam->fov_rad;
	mlx->cam->mat_proj.z[2] = mlx->cam->far / (mlx->cam->far - mlx->cam->near);
	mlx->cam->mat_proj.w[2] = (-mlx->cam->far * mlx->cam->near)
		/ (mlx->cam->far - mlx->cam->near);
	mlx->cam->mat_proj.z[3] = 1.0f;
	mlx->cam->mat_proj.w[3] = 0.0f;
	mlx->mlx_ptr = mlx_init();
	mlx->img.img = NULL;
	mlx->keys = (t_keys *)ft_memalloc(sizeof(t_keys));
	mlx->win_ptr = mlx_new_window(mlx->mlx_ptr, size_x, size_y, name);
	return (mlx);
}

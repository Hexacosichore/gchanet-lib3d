/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:28:57 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/20 12:39:32 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

static int	swap_vars(t_vec3 *p0, t_vec3 *p1)
{
	float	temp;

	if (fabs(p1->x - p0->x) > fabs(p1->y - p0->y))
		return (0);
	temp = p0->y;
	p0->y = p0->x;
	p0->x = temp;
	temp = p1->y;
	p1->y = p1->x;
	p1->x = temp;
	return (1);
}

static t_vec3	get_line_dir(int dir, t_vec3 p0, double z)
{
	t_vec3	res;

	res.z = z;
	if (dir)
	{
		res.x = p0.y;
		res.y = p0.x;
	}
	else
	{
		res.x = p0.x;
		res.y = p0.y;
	}
	return (res);
}

void	get_line(t_vec3 p0, t_vec3 p1, void (*f)(t_vec3, void *), void *p)
{
	float	delta[3];
	float	error;
	float	slope;
	double	z;
	int		dir;

	z = p0.z;
	dir = swap_vars(&p0, &p1);
	delta[0] = p1.x - p0.x;
	delta[1] = p1.y - p0.y;
	delta[2] = p1.z - p0.z;
	slope = fabs(delta[1] / delta[0]);
	error = -1.0;
	while ((int)p0.x != (int)p1.x)
	{
		f(get_line_dir(dir, p0, z), p);
		error += slope;
		if (error >= 0.0)
		{
			p0.y += (1 - ((p0.y > p1.y) * 2));
			error -= 1.0;
		}
		z += delta[2] / fabs(delta[0]);
		p0.x += (1 - ((p0.x > p1.x) * 2));
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rect.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:27:15 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/20 13:42:25 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

void	get_rect(t_vec2i o, t_vec2i s, void (*f)(t_vec2i, void *), void *p)
{
	t_vec2i	res;
	int		sizex;
	int		sizey;

	sizey = s.y;
	while (--sizey >= 0)
	{
		sizex = s.x;
		while (--sizex >= 0)
		{
			res.x = sizex + o.x;
			res.y = sizey + o.y;
			f(res, p);
		}
	}
}

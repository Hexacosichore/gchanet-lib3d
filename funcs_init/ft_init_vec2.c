/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_vec2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:12:14 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/18 12:02:24 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

t_vec2	*ft_init_vec2(float x, float y)
{
	t_vec2	*res;

	res = (t_vec2 *)malloc(sizeof(t_vec2));
	if (!res)
		return (NULL);
	res->x = x;
	res->y = y;
	return (res);
}

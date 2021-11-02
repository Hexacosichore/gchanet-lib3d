/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgbatoint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:33:39 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/20 11:43:44 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

int	ft_rgbatoint(t_rgba color)
{
	const int	base = 0x0FF;
	int			hex[4];

	hex[0] = color.a & base;
	hex[1] = color.r & base;
	hex[2] = color.g & base;
	hex[3] = color.b & base;
	return (hex[0] << 24 | hex[1] << 16 | hex[2] << 8 | hex[3]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_vec3i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:42:03 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/18 14:42:20 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

void	ft_print_vec3i(t_vec3i vec3)
{
	ft_putstr("(");
	ft_putnbr(vec3.x);
	ft_putstr(", ");
	ft_putnbr(vec3.y);
	ft_putstr(", ");
	ft_putnbr(vec3.z);
	ft_putstr(")");
}

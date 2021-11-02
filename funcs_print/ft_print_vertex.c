/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_vertex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:17:05 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/21 10:51:34 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

void	ft_print_vertex(t_vertex vertex)
{
	ft_putstr("LOCAL = ");
	ft_print_vec3(*vertex.local);
	ft_putstr(" WORLD = ");
	ft_print_vec3(*vertex.world);
	ft_putstr(" ALIGNED = ");
	ft_print_vec3(*vertex.aligned);
	ft_putstr(" PROJECTED = ");
	ft_print_vec3(*vertex.projected);
	ft_putstr("\n");
}

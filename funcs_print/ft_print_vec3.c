/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_vec3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:25:51 by gchanet           #+#    #+#             */
/*   Updated: 2021/10/18 12:26:34 by gchanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib3d.h"

void	ft_print_vec3(t_vec3 vec3)
{
	ft_putstr("(");
	ft_putnbr(vec3.x);
	ft_putstr(", ");
	ft_putnbr(vec3.y);
	ft_putstr(", ");
	ft_putnbr(vec3.z);
	ft_putstr(")");
}

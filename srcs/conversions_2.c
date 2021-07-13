/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:26:28 by cjulienn          #+#    #+#             */
/*   Updated: 2021/07/13 16:50:27 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// conversions (cspdiuxX%)

void	ft_handle_unsigned_int(t_parse *parse_tab) // u
{
	// TODO
	unsigned long	res;
	
	res = va_arg(parse_tab->args, unsigned long);
	ft_putnbr_fd(res, 1);
}

void	ft_handle_hxd_num(t_parse *parse_tab) // x
{
	// TODO
	unsigned long	res;

	res = va_arg(parse_tab->args, unsigned long);
	ft_putnbr_fd(res, 1);
}

void	ft_handle_upper_hxd_num(t_parse *parse_tab) // X
{
	// TODO	
	unsigned long	res;

	res = va_arg(parse_tab->args, unsigned long);
	ft_putnbr_fd(res, 1);
}
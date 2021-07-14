/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:26:28 by cjulienn          #+#    #+#             */
/*   Updated: 2021/07/14 13:37:59 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_handle_unsigned_int(t_parse *parse_tab)
{
	unsigned long	res;
	
	res = va_arg(parse_tab->args, unsigned long);
	ft_putnbr_fd(res, 1);
}

void	ft_handle_hxd_num(t_parse *parse_tab)
{
	unsigned long	res;

	res = va_arg(parse_tab->args, unsigned long);
	ft_putnbr_fd(res, 1);
}

void	ft_handle_upper_hxd_num(t_parse *parse_tab)
{
	unsigned long	res;

	res = va_arg(parse_tab->args, unsigned long);
	ft_putnbr_fd(res, 1);
}
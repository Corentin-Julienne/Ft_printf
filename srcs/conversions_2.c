/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:26:28 by cjulienn          #+#    #+#             */
/*   Updated: 2021/07/21 15:56:45 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_handle_unsigned_int(t_parse *parse_tab)
{
	unsigned long	res;
	size_t			numlen;

	res = va_arg(parse_tab->args, unsigned long);
	numlen = ft_strlen(ft_lltoa(res));
	parse_tab->rtn = parse_tab->rtn + numlen;
	ft_putlnbr_fd(res, 1);
}

void	ft_handle_hxd_num(t_parse *parse_tab)
{
	unsigned long	res;

	res = va_arg(parse_tab->args, unsigned long);
	parse_tab->rtn = parse_tab->rtn + ft_intlen_base(res, 16);
	ft_putlnbr_base(res, "0123456789abcdef");
}

void	ft_handle_upper_hxd_num(t_parse *parse_tab)
{
	unsigned long	res;

	res = va_arg(parse_tab->args, unsigned long);
	parse_tab->rtn = parse_tab->rtn + ft_intlen_base(res, 16);
	ft_putlnbr_base(res, "0123456789ABCDEF");
}

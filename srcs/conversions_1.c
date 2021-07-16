/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:13:58 by cjulienn          #+#    #+#             */
/*   Updated: 2021/07/16 15:50:10 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

void	ft_handle_char(t_parse *parse_tab)
{
	parse_tab->rtn++;
	ft_putchar_fd(va_arg(parse_tab->args, int), 1);
}

void	ft_handle_percent(t_parse *parse_tab)
{
	parse_tab->rtn++;
	ft_putchar_fd('%', 1);
}

void	ft_handle_string(t_parse *parse_tab)
{
	char	*str;
	size_t	len;

	str = va_arg(parse_tab->args, char *);
	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	parse_tab->rtn = parse_tab->rtn + len;
	ft_putstr_fd(str, 1);
}

void	ft_handle_void_pointer(t_parse *parse_tab)
{
	unsigned long	ptn;
	char			*prefix;

	prefix = "0x";
	ft_putstr_fd(prefix, 1);
	parse_tab->rtn += 2;
	ptn = (unsigned long)va_arg(parse_tab->args, void *);
	printf("%lu", ptn);
	parse_tab->rtn = parse_tab->rtn + (int)ft_intlen_base(ptn, 16);
	ft_putlnbr_base(ptn, "0123456789abcdef");
}

void	ft_handle_signed_int(t_parse *parse_tab)
{
	int		res;
	size_t	numlen;

	res = va_arg(parse_tab->args, int);
	numlen = ft_strlen(ft_lltoa(res));
	parse_tab->rtn = parse_tab->rtn + numlen;
	ft_putlnbr_fd(res, 1);
}

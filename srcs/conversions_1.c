/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:13:58 by cjulienn          #+#    #+#             */
/*   Updated: 2021/07/13 16:47:17 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdarg.h>

// conversions (cspdiuxX%)

void	ft_handle_char(t_parse *parse_tab) // percent
{
	parse_tab->rtn++; // increment output
	ft_putchar_fd(va_arg(parse_tab->args, int), 1);	
}

void	ft_handle_string(t_parse *parse_tab) // s
{
	char	*str;
	size_t	len;

	str = va_arg(parse_tab->args, char*);
	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	parse_tab->rtn = parse_tab->rtn + len;
	ft_putstr_fd(str, 1);
}

void	ft_handle_void_pointer(t_parse *parse_tab) // p
{
	// TO REMOVE : just to handle error flags
	unsigned long	ptn;
	ptn = (unsigned long)va_arg(parse_tab->args, void*);
	ft_putnbr_fd(ptn, 1);
}

void	ft_handle_signed_int(t_parse *parse_tab) // i || d
{
	int		res;
	size_t	num_len;
	
	res = va_arg(parse_tab->args, int);
	num_len = ft_strlen(ft_itoa(res));
	parse_tab->rtn = parse_tab->rtn + num_len;
	ft_putnbr_fd(res, 1);
}
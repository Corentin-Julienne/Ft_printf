/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 10:43:02 by cjulienn          #+#    #+#             */
/*   Updated: 2021/07/14 13:32:55 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_parse	*ft_initialize_data(t_parse *parse_tab, const char *format)
{
	parse_tab->rtn = 0;
	parse_tab->format = format;
	parse_tab->i = 0;
	return (parse_tab);
}

void	ft_find_format(t_parse *parse_tab, int index)
{
	if (parse_tab->format[index] == 'c')
		ft_handle_char(parse_tab);
	else if (parse_tab->format[index] == '%')
		ft_handle_char(parse_tab);
	else if (parse_tab->format[index] == 's')
		ft_handle_string(parse_tab);
	else if (parse_tab->format[index] == 'p')
		ft_handle_void_pointer(parse_tab);
	else if (parse_tab->format[index] == 'd')
		ft_handle_signed_int(parse_tab);
	else if (parse_tab->format[index] == 'i')
		ft_handle_signed_int(parse_tab);
	else if (parse_tab->format[index] == 'u')
		ft_handle_unsigned_int(parse_tab);
	else if (parse_tab->format[index] == 'x')
		ft_handle_hxd_num(parse_tab);
	else if (parse_tab->format[index] == 'X')
		ft_handle_upper_hxd_num(parse_tab);
}

int	ft_printf(const char *format, ...)
{
	t_parse		*parse_tab;

	parse_tab = (t_parse *)malloc(sizeof(t_parse));
	if (!parse_tab)
		return (-1);
	parse_tab = ft_initialize_data(parse_tab, format);
	va_start(parse_tab->args, format);
	while (parse_tab->format[parse_tab->i])
	{
		if (parse_tab->format[parse_tab->i] == '%')
		{
			ft_find_format(parse_tab, parse_tab->i + 1);
			parse_tab->i++;
		}		
		else
		{
			ft_putchar_fd(parse_tab->format[parse_tab->i], 1);
			parse_tab->rtn++;
		}	
		parse_tab->i++;
	}
	va_end(parse_tab->args);
	free(parse_tab);
	return (parse_tab->rtn);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 10:43:02 by cjulienn          #+#    #+#             */
/*   Updated: 2021/07/13 12:38:58 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_inialize_data(t_parse *parse_tab)
{
	parse_tab->rtn = 0; // output equal to 0
	// conversions (cspdiuxX%)
	parse_tab->conv_c = 0;
	parse_tab->conv_s = 0;
	parse_tab->conv_p = 0;
	parse_tab->conv_i = 0;
	parse_tab->conv_u = 0;
	parse_tab->conv_x = 0;
	parse_tab->conv_X = 0;
	parse_tab->conv_pcnt = 0;
}

void	ft_reset_data(t_parse *parse_tab) // reset conversions but not output
{
	parse_tab->conv_c = 0;
	parse_tab->conv_s = 0;
	parse_tab->conv_p = 0;
	parse_tab->conv_i = 0;
	parse_tab->conv_u = 0;
	parse_tab->conv_x = 0;
	parse_tab->conv_X = 0;
	parse_tab->conv_pcnt = 0;
}

void	ft_find_format(t_parse *parse_tab, int index)
{
	// conversions (cspdiuxX%)
	if (parse_tab->format[index] == 'c')
		parse_tab->conv_c = 1;
	else if (parse_tab->format[index] == 's')
		parse_tab->conv_s = 1;
	else if (parse_tab->format[index] == 'p')
		parse_tab->conv_p = 1;
	else if (parse_tab->format[index] == 'd')
		parse_tab->conv_d = 1;
	else if (parse_tab->format[index] == 'i')
		parse_tab->conv_i = 1;
	else if (parse_tab->format[index] == 'u')
		parse_tab->conv_u = 1;
	else if (parse_tab->format[index] == 'x')
		parse_tab->conv_x = 1;
	else if (parse_tab->format[index] == 'X')
		parse_tab->conv_X = 1;
	else if (parse_tab->format[index] == '%')
		parse_tab->conv_pcnt = 1;
	ft_redirect_to_converters(parse_tab);
}

void	ft_redirect_to_converters(t_parse *parse_tab)
{
	if (parse_tab->conv_c == 1)
		ft_handle_char(parse_tab);
	else if (parse_tab->conv_s == 1)
		ft_handle_string(parse_tab);
	else if (parse_tab->conv_p == 1)
		ft_handle_void_pointer(parse_tab);
	else if (parse_tab->conv_d == 1)
		ft_handle_signed_int(parse_tab);
	else if (parse_tab->conv_i == 1)
		ft_handle_signed_int(parse_tab);
	else if (parse_tab->conv_u == 1)
		ft_handle_unsigned_int(parse_tab);
	else if (parse_tab->conv_x == 1)
		ft_handle_hxd_number(parse_tab);
	else if (parse_tab->conv_X == 1)
		ft_handle_capitalized_hxd_number(parse_tab);
	else if (parse_tab->conv_pcnt == 1)
		ft_handle_percent(parse_tab);
}

int	ft_printf(const char *format, ...)
{
	t_parse		*parse_tab;
	size_t		i;
	int			output;	

	parse_tab = (t_parse*)malloc(sizeof(t_parse));
	if (!parse_tab)
		return (-1); // means something fucked up
	ft_initialize_data(parse_tab); // initialize values to 0
	parse_tab->format = format;
	va_start(parse_tab->args, format);
	i = 0;
	while (parse_tab->format[i])
	{
		if (parse_tab->format[i] == '%') // indicates that a flag or conversion is present
		{
			ft_find_format(parse_tab, (int)(i + 1)); // TODO
			ft_reset_data(parse_tab); // remet valeurs à 0
		}		
		else
		{
			ft_putchar_fd(parse_tab->format[i], 1);
			parse_tab->rtn++;
		}	
		i++;
	}
	output = parse_tab->rtn;
	va_end(parse_tab->args);
	free(parse_tab);
	return (output);
}

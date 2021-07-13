/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:13:58 by cjulienn          #+#    #+#             */
/*   Updated: 2021/07/13 12:28:28 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// conversions (cspdiuxX%)

void	ft_handle_percent(t_parse *parse_tab) // percent
{
	parse_tab->rtn++; // increment output
	ft_putchar_fd('%', 1);
}

void	ft_handle_char(t_parse *parse_tab) // c
{
	parse_tab->rtn++; // increment output
}

void	ft_handle_void_pointer(t_parse *parse_tab) // p
{
	
}

void	ft_handle_signed_int(t_parse *parse_tab) // i || d
{
	
}

void	ft_handle_string(t_parse *parse_tab) // s
{
	
}
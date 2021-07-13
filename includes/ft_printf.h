/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 10:46:45 by cjulienn          #+#    #+#             */
/*   Updated: 2021/07/13 11:47:20 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h> 

typedef struct s_parse                       
{                        
    va_list		args;			// initialize variadic list
	const char	*format;		//the string contains as arg
	// return value
	int			rtn;			// the return value
	// all type of conversions (cspdiuxX%)
	int			conv_c;
	int			conv_s;
	int			conv_p;
	int			conv_d;
	int			conv_i;
	int			conv_u;
	int			conv_x;
	int			conv_X;
	int			conv_pcnt;
}    		   t_parse;

int			ft_printf(const char *format, ...);



// void		ft_initialize_flaglist(t_flags *flag_tab);
// void		ft_putnbr_base(int nbr, char *base);
// void		ft_print_hexadecimal(t_flags *t_flags);
// void		ft_print_capital_hexadecimal(t_flags *t_flags);
// void		ft_print_int(t_flags *flag_tab);
// void		ft_print_unsigned_int(t_flags *flag_tab);
// void		ft_print_char(t_flags *flag_tab);
// void		ft_print_string(t_flags *flag_tab);
// void		ft_print_pointer_address(t_flags *flag_tab);
// int			ft_zero_flag(t_flags *flag_tab, const char *format, int index);
// int			ft_wildcard_flag(t_flags *flag_tab, const char *format, int index);
// int			ft_minus_flag(t_flags *flag_tab, const char *format, int index);
// int 		ft_point_flag(t_flags *flag_tab, const char *format, int index);

#endif

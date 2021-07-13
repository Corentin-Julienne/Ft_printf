/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 10:46:45 by cjulienn          #+#    #+#             */
/*   Updated: 2021/07/13 16:25:15 by cjulienn         ###   ########.fr       */
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

// protos ft_printf.c
int			ft_printf(const char *format, ...);
t_parse		*ft_inialize_data(t_parse *parse_tab);
t_parse		*ft_reset_data(t_parse *parse_tab);
void		ft_find_format(t_parse *parse_tab, int index);
void		ft_redirect_to_converters(t_parse *parse_tab);

// protos conversions
void		ft_handle_percent(t_parse *parse_tab);
void		ft_handle_char(t_parse *parse_tab);
void		ft_handle_void_pointer(t_parse *parse_tab);
void		ft_handle_signed_int(t_parse *parse_tab);
void		ft_handle_string(t_parse *parse_tab);
void		ft_handle_unsigned_int(t_parse *parse_tab);
void		ft_handle_hxd_num(t_parse *parse_tab);
void		ft_handle_upper_hxd_num(t_parse *parse_tab);

// protos utils (to change when including libft with Makefile)
void		ft_putnbr_base(long long nb, char *base);
void		ft_putchar_fd(char c, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
size_t		ft_strlen(const char *s);
char		*ft_itoa(int n);

#endif

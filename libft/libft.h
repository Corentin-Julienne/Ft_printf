/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 13:23:50 by cjulienn          #+#    #+#             */
/*   Updated: 2021/07/16 15:52:23 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

char	*ft_lltoa(long long n);
void	ft_putchar_fd(char c, int fd);
void	ft_putlnbr_fd(long long n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putlnbr_base(long long nb, char *base);
size_t	ft_strlen(const char *s);
size_t	ft_intlen_base(unsigned int num, size_t base);

#endif

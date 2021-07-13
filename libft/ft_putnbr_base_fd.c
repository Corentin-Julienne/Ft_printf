/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 16:05:32 by cjulienn          #+#    #+#             */
/*   Updated: 2021/06/28 11:20:14 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_base_converter(long long nb, char *base, int base_size, int fd)
{
	if (nb >= base_size)
	{
		ft_base_converter((nb / base_size), base, base_size, fd);
		ft_putchar_fd(base[(nb % base_size)], fd);
	}
	else
		ft_putchar_fd(base[nb], fd);
}

void	ft_putnbr_base_fd(long long nb, char *base, int fd)
{
	int			base_size;
	
	base_size = 0;
	while (base[base_size] != '\0')
		base_size++;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	ft_base_converter(nb, base, base_size, fd);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	*base_1;
// 	char	*base_2;

// 	long long	test_1;
// 	long long	test_2;
// 	long long	test_3;
// 	long long	test_4;
// 	long long	test_5;
// 	long long 	test_6;
// 	long long 	test_7;
// 	long long 	test_8;
// 	long long 	test_9;
// 	long long	test_10;
// 	long long	test_11;
// 	// long long 	test_12;
// 	long long 	test_13;
// 	// long long 	test_14;
// 	// long long 	test_15;

// 	base_1 = "0123456789abcdef";
// 	base_2 = "0123456789ABCDEF";

// 	test_1 = 64;
// 	test_2 = 0;
// 	test_3 = 1;
// 	test_4 = -1;
// 	test_5 = -64;
// 	test_6 = 00;
// 	test_7 = 2147483648;
// 	test_8 = -2147483649;
// 	test_9 = -2147483648;
// 	test_10 = 2147483647;
// 	test_11= 4294967295;
// 	// test_12 = -9223372036854775808;
// 	test_13 = 9223372036854775807;
// 	// test_14 = 18446744073709551615;
// 	// test_15 = 184467440737095516158787;
	
// 	ft_putnbr_base_fd(test_1, base_1, 1);
// 	printf("\n");
// 	ft_putnbr_base_fd(test_2, base_1, 1);
// 	printf("\n");
// 	ft_putnbr_base_fd(test_3, base_1, 1);
// 	printf("\n");
// 	ft_putnbr_base_fd(test_4, base_1, 1);
// 	printf("\n");
// 	ft_putnbr_base_fd(test_5, base_1, 1);
// 	printf("\n");
// 	ft_putnbr_base_fd(test_6, base_1, 1);
// 	printf("\n");
// 	ft_putnbr_base_fd(test_7, base_1, 1);
// 	printf("\n");
// 	ft_putnbr_base_fd(test_8, base_1, 1);
// 	printf("\n");
// 	ft_putnbr_base_fd(test_9, base_1, 1);
// 	printf("\n");
// 	ft_putnbr_base_fd(test_10, base_1, 1);
// 	printf("\n");
// 	ft_putnbr_base_fd(test_11, base_1, 1);
// 	printf("\n");
// 	// ft_putnbr_base_fd(test_12, base_1, 1);
// 	ft_putnbr_base_fd(test_13, base_1, 1);
// 	printf("\n");
// 	// ft_putnbr_base_fd(test_14, base_1, 1);
// 	// ft_putnbr_base_fd(test_15, base_1, 1);

// 	return (0);
// }
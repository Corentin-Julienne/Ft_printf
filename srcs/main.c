/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:21:08 by cjulienn          #+#    #+#             */
/*   Updated: 2021/07/15 12:44:07 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// main de test ultracomplet

int	main(void)
{
	size_t			errors = 0; // num of errors
	int				res_printf;
	int				res_ft_printf;
	// tests with chars (c)
	char			ex_char = 0;
	// tests with strings (s)
	char			*ex_str_1 = NULL;
	char			*ex_str_2 = "example";
	char			*ex_str_3 = "";
	char			*ex_str_4 = "      ";
	char			*ex_str_5 = "this is a very very very very very very long string to show if there is working properly with something very very very very very veyr long !!!";
	// tests with ints (d or i)
	int				ex_int = -2147483648;
	// // tests with unsigned ints (u)
	unsigned int	ex_uint = 0;
	// tests with small letters hexadecimal numbers (x)

	// test with capital letters hexadecimal numbers (X)

	// // tests with pointer adresses (p)
	

	printf("Starting testing procedure...\n\n");

	printf("Testing with percent :\n\n");
	res_printf = printf("This is : %%\n");
	res_ft_printf = ft_printf("This is : %%\n");
	if (res_ft_printf != res_printf)
	{
		errors++;
		printf("Error above!!!\n");
	}
	printf("\n");

	printf("testing with chars\n");
	while (ex_char <= 126)
	{
		res_printf = printf("This is : %c and this is char %d\n", ex_char, ex_char);
		res_ft_printf = ft_printf("This is : %c and this is char %d\n", ex_char, ex_char);
		printf("\n");
		if (res_ft_printf != res_printf)
		{
		errors++;
		printf("Error above!!!\n");
		}
		ex_char++;
	}
	res_printf = printf("This is : %c and this is char %d\n", ex_char, ex_char);
	res_ft_printf = ft_printf("This is : %c and this is char %d\n", ex_char, ex_char);
	if (res_ft_printf != res_printf)
	{
		errors++;
		printf("Error above!!!\n");
	}
	printf("\n\n");

	printf("Testing with strings\n");
	// str 1
	res_printf = printf("This is : %s\n", ex_str_1);
	res_ft_printf = ft_printf("This is : %s\n", ex_str_1);
	if (res_ft_printf != res_printf)
	{
		errors++;
		printf("Error above!!!\n");
	}
			
	printf("\n");
	// str 2
	res_printf = printf("This is : %s\n", ex_str_2);
	res_ft_printf = ft_printf("This is : %s\n", ex_str_2);
	if (res_ft_printf != res_printf)
	{
		errors++;
		printf("Error above!!!\n");
	}
	printf("\n");
	// str 3
	res_printf = printf("This is : %s\n", ex_str_3);
	res_ft_printf = ft_printf("This is : %s\n", ex_str_3);
	if (res_ft_printf != res_printf)
	{
		errors++;
		printf("Error above!!!\n");
	}
	printf("\n");
	// str 4
	res_printf = printf("This is : %s\n", ex_str_4);
	res_ft_printf = ft_printf("This is : %s\n", ex_str_4);
	if (res_ft_printf != res_printf)
	{
		errors++;
		printf("Error above!!!\n");
	}
	printf("\n");
	// str 5
	res_printf = printf("This is : %s\n", ex_str_5);
	res_ft_printf = ft_printf("This is : %s\n", ex_str_5);
	if (res_ft_printf != res_printf)
	{
		errors++;
		printf("Error above!!!\n");
	}
	printf("\n\n");

	// testing with signed ints (d || i)
	int	number = rand() * 100000000;
	int stop = 0;
	printf("Testing with signed int\n\n");
	while (ex_int <= 2147483646)
	{
		res_printf = printf("This is : %d\n", ex_int);
		res_ft_printf = ft_printf("This is : %d\n", ex_int);
		printf("\n");
		if (res_ft_printf != res_printf)
		{
		errors++;
		printf("Error above!!!\n");
		}
		ex_int = ex_int + number;
		number = rand() * 100000000;
		stop++;
		if (stop > 666)
			break;
	}
	res_printf = printf("This is : %d\n", ex_int);
	res_ft_printf = ft_printf("This is : %d\n", ex_int);
	if (res_ft_printf != res_printf)
	{
		errors++;
		printf("Error above!!!\n");
	}
	printf("\n");
	
	// special cases 
	ex_int = 0;
	res_printf = printf("This is : %d\n", ex_int);
	res_ft_printf = ft_printf("This is : %d\n", ex_int);
	if (res_ft_printf != res_printf)
	{
		errors++;
		printf("Error above!!!\n");
	}
	printf("\n");

	ex_int = 1;
	res_printf = printf("This is : %d\n", ex_int);
	res_ft_printf = ft_printf("This is : %d\n", ex_int);
	if (res_ft_printf != res_printf)
	{
		errors++;
		printf("Error above!!!\n");
	}
	printf("\n");

	ex_int = -1;
	res_printf = printf("This is : %d\n", ex_int);
	res_ft_printf = ft_printf("This is : %d\n", ex_int);
	if (res_ft_printf != res_printf)
	{
		errors++;
		printf("Error above!!!\n");
	}
	printf("\n");

	ex_int =  2147483647;
	res_printf = printf("This is : %d\n", ex_int);
	res_ft_printf = ft_printf("This is : %d\n", ex_int);
	if (res_ft_printf != res_printf)
	{
		errors++;
		printf("Error above!!!\n");
	}
	printf("\n");

	ex_int = -2147483648; 
	res_printf = printf("This is : %d\n", ex_int);
	res_ft_printf = ft_printf("This is : %d\n", ex_int);
	if (res_ft_printf != res_printf)
	{
		errors++;
		printf("Error above!!!\n");
	}
	printf("\n");
	
	printf("\n\n");

	// testing with unsigned ints (u)
	printf("testing with unsigned ints (u)\n\n");

	unsigned int number_2 = rand();
	stop = 0;
	printf("Testing with unsigned int\n\n");
	while (ex_uint <= 2147483646)
	{
		res_printf = printf("This is : %u\n", ex_uint);
		res_ft_printf = ft_printf("This is : %u\n", ex_uint);
		printf("\n");
		if (res_ft_printf != res_printf)
		{
		errors++;
		printf("Error above!!!\n");
		}
		ex_uint = ex_uint + number_2;
		number_2 = rand();
		stop++;
		if (stop > 666)
			break;
	}
	res_printf = printf("This is : %u\n", ex_uint);
	res_ft_printf = ft_printf("This is : %u\n", ex_uint);
	if (res_ft_printf != res_printf)
	{
		errors++;
		printf("Error above!!!\n");
	}
	printf("\n");

	// special cases

	ex_uint = 0;
	res_printf = printf("This is : %u\n", ex_uint);
	res_ft_printf = ft_printf("This is : %u\n", ex_uint);
	if (res_ft_printf != res_printf)
	{
		errors++;
		printf("Error above!!!\n");
	}
	printf("\n");

	ex_uint = 1;
	res_printf = printf("This is : %u\n", ex_uint);
	res_ft_printf = ft_printf("This is : %u\n", ex_uint);
	if (res_ft_printf != res_printf)
	{
		errors++;
		printf("Error above!!!\n");
	}
	printf("\n");

	ex_uint = 4294967295;
	res_printf = printf("This is : %u\n", ex_uint);
	res_ft_printf = ft_printf("This is : %u\n", ex_uint);
	if (res_ft_printf != res_printf)
	{
		errors++;
		printf("Error above!!!\n");
	}
	printf("\n");

	printf("\n\n");

	// testing with hexadecimal in normal letters (x)

	printf("Testing with hexadecimal in normal letters (x)\n\n");

	printf("\n\n");

	// testing with hexadecimal in upper letters (X)

	printf("Testing with hexadecimal in upper letters (x)\n\n");

	printf("\n\n");

	// testing with pointer addresses (p)

	printf("Testing with pointer addresses (p)\n\n");

	printf("\n\n");
	
	printf("Fin de la procedure de test !\n");
	if (errors == 0)
		printf("Perfect job so far !!!\n");
	else
		printf("There is %zu errors !|n", errors);
	
	return (0); // end the function
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:21:08 by cjulienn          #+#    #+#             */
/*   Updated: 2021/07/13 16:57:38 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// main de test

int	main(void)
{
	char	*prct;

	prct = "hello there !";
	
	ft_printf("Hello this is a test : %s\n", prct);
	
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 16:56:17 by cjulienn          #+#    #+#             */
/*   Updated: 2021/07/21 16:20:19 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"
#include "./libft/libft.h"

int main(void)
{
	char *example = "working !!!";
	
	ft_printf("This is actually printing this : %s", example);
	
	return 0;
}

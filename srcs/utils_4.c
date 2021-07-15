/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:36:50 by cjulienn          #+#    #+#             */
/*   Updated: 2021/07/15 11:54:36 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_intlen_base(unsigned int num, size_t base)
{
	size_t res;

	res = 0;
	if (num == 0)
	{
		res = 1;
		return (res);
	}
	while (num > 0)
	{
		res++;
		num = num / base;
	}
	return (res);
}
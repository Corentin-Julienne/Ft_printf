/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlnbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 15:35:43 by cjulienn          #+#    #+#             */
/*   Updated: 2021/07/16 15:46:13 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_base_converter(long long nb, char *base, int base_size)
{
	if (nb >= base_size)
	{
		ft_base_converter((nb / base_size), base, base_size);
		ft_putchar_fd(base[(nb % base_size)], 1);
	}
	else
		ft_putchar_fd(base[nb], 1);
}

void	ft_putlnbr_base(long long nb, char *base)
{
	int		base_size;
	int		res;

	base_size = 0;
	res = 0;
	while (base[base_size] != '\0')
		base_size++;
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		res++;
		nb = -nb;
	}
	ft_base_converter(nb, base, base_size);
}

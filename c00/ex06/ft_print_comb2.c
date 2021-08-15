/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelhaime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:47:28 by yelhaime          #+#    #+#             */
/*   Updated: 2021/08/05 15:23:03 by yelhaime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	displaynmb(int x, int y)
{
	int	fx;
	int	lx;
	int	fy;
	int	ly;

	fx = x / 10 + '0';
	lx = x % 10 + '0';
	fy = y / 10 + '0';
	ly = y % 10 + '0';
	ft_putchar(fx);
	ft_putchar(lx);
	ft_putchar(' ');
	ft_putchar(fy);
	ft_putchar(ly);
	if ((x / 10 != 9 ) || (x % 10 != 8))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			displaynmb(i, j);
			j++;
		}
		i++;
	}
}

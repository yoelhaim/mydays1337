/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelhaime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 07:28:15 by yelhaime          #+#    #+#             */
/*   Updated: 2021/08/05 15:42:14 by yelhaime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	displaymore(int x, int y, int z)
{
	ft_putchar(x + 48);
	ft_putchar(y + 48);
	ft_putchar(z + 48);
	if (!(x == 7 && y == 8 && z == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	first;
	int	second;
	int	last;

	first = 0 ;
	while (first <= 7)
	{
		second = first + 1;
		while (second <= 8)
		{
			last = second + 1;
			while (last <= 9)
			{
				displaymore (first, second, last);
				last++;
			}
			second++;
		}
		first++;
	}
}

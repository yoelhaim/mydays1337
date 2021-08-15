/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelhaime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:31:13 by yelhaime          #+#    #+#             */
/*   Updated: 2021/08/08 15:17:24 by yelhaime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	getrush(int input, char f, char m, char l)
{
	ft_putchar(f);
	while ((input - 1) > 1)
	{
		ft_putchar(m);
		input--;
	}
	if (input > 1)
		ft_putchar(l);
	ft_putchar('\n');
}

void	rush01(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		getrush(x, '/', '*', '\\');
		y--;
		while (y > 1)
		{
			getrush(x, '*', ' ', '*');
			y--;
		}
		if (y > 0)
		{
			getrush(x, '\\', '*', '/');
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getrush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelhaime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:44:12 by yelhaime          #+#    #+#             */
/*   Updated: 2021/08/07 16:29:40 by yelhaime         ###   ########.fr       */
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

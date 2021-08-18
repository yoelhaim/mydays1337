/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelhaime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 15:23:59 by yelhaime          #+#    #+#             */
/*   Updated: 2021/08/16 15:20:44 by yelhaime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	me;

	me = nb;
	if (power == 0)
		return (0);
	while (power != 1)
	{
		nb *= me;
		power--;
	}
	return (nb);
}

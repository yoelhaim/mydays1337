/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelhaime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:01:26 by yelhaime          #+#    #+#             */
/*   Updated: 2021/08/18 17:28:06 by yelhaime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	p;

	p = 2;
	if (nb < 2)
		return (0);
	while (p <= nb / 2)
	{
		if (nb % p == 0)
			return (0);
		p++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (2);
	while (1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

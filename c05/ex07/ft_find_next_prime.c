/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelhaime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:01:26 by yelhaime          #+#    #+#             */
/*   Updated: 2021/08/15 17:44:38 by yelhaime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_prime(int nbr)
{
	int	i;

	i =2;
	while (nbr % i != 0)
	{
		if(i > nbr)
			break;
		i++;
	}
	if (nbr == i)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	while (1)
	{
		if (is_prime(nb))
			return (nb);
		++nb;
	}
}
int main()
{
	printf("%d",ft_find_next_prime(7));
}

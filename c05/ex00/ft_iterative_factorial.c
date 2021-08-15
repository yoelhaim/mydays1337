/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelhaime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 08:22:10 by yelhaime          #+#    #+#             */
/*   Updated: 2021/08/15 08:28:52 by yelhaime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		res = i * res;
		i++;
	}
	return (res);

}
#include <stdio.h>
int main()
{
	printf("%d",ft_iterative_factorial(5));

}

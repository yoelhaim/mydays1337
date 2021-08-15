/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelhaime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:54:11 by yelhaime          #+#    #+#             */
/*   Updated: 2021/08/15 18:33:01 by yelhaime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (ac > 1)
	{
		while (av[j])
		{
			while (av[j][i])
			{
				write(1, &av[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
			i = 0;
		}
	}
	return (0);
}

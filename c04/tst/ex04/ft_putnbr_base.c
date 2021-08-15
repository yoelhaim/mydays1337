/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelhaime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 09:19:01 by yelhaime          #+#    #+#             */
/*   Updated: 2021/08/15 10:29:57 by yelhaime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	isvalid(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			++j;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	str_len;
	int				size;
	int				nm[100];
	int				i;

	size = 0;
	i = 0;
	str_len = isvalid(base);
	if (!str_len)
		return ;
	while (base[size])
		size++;
	if (nbr < 0)
		nbr *= -1;
	while (nbr != 0)
	{
		nm[i] = nbr % size;
		nbr = nbr / size;
		i++;
	}
	while (--i >= 0)
		ft_putchar(base[nm[i]]);
}

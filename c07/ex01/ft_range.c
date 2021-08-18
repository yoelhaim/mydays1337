/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelhaime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:27:21 by yelhaime          #+#    #+#             */
/*   Updated: 2021/08/18 15:10:02 by yelhaime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int	i;
	int	*copy;
	int len;

	i = 0;

	if(min >= max)
		return (0);

	copy = (int *)malloc((max - min)* sizeof(int));
	if(!copy)
		return (0);
	while (i < max - min)
	{
		copy[i] = min + i;
		i++;
	}
	return(copy);
}

int main()
{

	int min = -9;
	int max = 10;

	int *arr = ft_range(min,max);

	int i = 0;

	while (i < max - min)
	{
	printf("%d \n", arr[i]);
	i++;
	}
}

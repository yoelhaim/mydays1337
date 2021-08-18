/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelhaime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:08:01 by yelhaime          #+#    #+#             */
/*   Updated: 2021/08/18 13:26:06 by yelhaime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
char	*ft_strdup(char *src)
{
	int	i;
	char	*copy;
	int	len;

	i = 0;
	len = length(src);
	len++;
	copy = (char*)malloc(len * sizeof(int));
	if (!copy)
		return (0);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

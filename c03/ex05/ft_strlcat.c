/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelhaime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 10:07:36 by yelhaime          #+#    #+#             */
/*   Updated: 2021/08/11 14:17:31 by yelhaime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	source;
	unsigned int	destin;

	i = 0;
	source = 0;
	destin = 0;
	while (src[source] != '\0')
		source++;
	while (dest[destin] != '\0')
		destin++;
	if (size <= destin)
		source = source + size;
	else
		source = source + destin;
	while ((src[i] != '\0') && (destin + 1 < size))
	{
		dest[destin] = src[i];
		i++;
		destin++;
	}
	dest[destin] = '\0';
	return (source);
}

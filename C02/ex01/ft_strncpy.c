/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:27:56 by usoares-          #+#    #+#             */
/*   Updated: 2019/12/08 09:21:16 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int size)
{
	unsigned int n;

	n = 0;
	while (src[n] != '\0' && n < size)
	{
		dest[n] = src[n];
		n++;
	}
	while (n < size)
	{
		dest[n] = '\0';
		n++;
	}
	return (dest);
}

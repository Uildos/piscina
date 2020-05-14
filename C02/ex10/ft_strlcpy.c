/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 19:01:12 by usoares-          #+#    #+#             */
/*   Updated: 2019/12/08 14:42:48 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int n;
	unsigned int i;

	n = 0;
	i = 0;
	while (src[i])
	{
		i++;
	}
	while (n < size && dest[n] != '\0')
	{
		if (n < size - 1)
			dest[n] = src[n];
		else
			dest[n] = '\0';
		n++;
	}
	return (i);
}

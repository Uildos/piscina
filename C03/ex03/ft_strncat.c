/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 12:24:42 by usoares-          #+#    #+#             */
/*   Updated: 2019/12/09 19:26:18 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int off;
	unsigned int i;

	i = 0;
	while (dest[i])
		i++;
	off = i;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[off + i] = src[i];
		i++;
	}
	dest[off + i] = '\0';
	return (dest);
}

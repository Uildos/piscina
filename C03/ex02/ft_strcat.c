/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 11:44:01 by usoares-          #+#    #+#             */
/*   Updated: 2019/12/09 12:18:33 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int off;
	int i;

	i = 0;
	while (dest[i])
		i++;
	off = i;
	i = 0;
	while (src[i])
	{
		dest[off + i] = src[i];
		i++;
	}
	dest[off + i] = '\0';
	return (dest);
}

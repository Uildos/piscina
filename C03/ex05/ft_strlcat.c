/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 19:03:39 by usoares-          #+#    #+#             */
/*   Updated: 2019/12/09 20:50:14 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int off;
	unsigned int i;
	unsigned int size_src;
	unsigned int ret;

	i = 0;
	while (dest[i])
		i++;
	off = i;
	i = 0;
	while (src[i])
		i++;
	size_src = i;
	i = 0;
	while (src[i] && i < (size - off - 1))
	{
		dest[off + i] = src[i];
		i++;
	}
	dest[off + i] = '\0';
	if (size < off)
		return (size + size_src);
	else
		return (off + size_src);
}

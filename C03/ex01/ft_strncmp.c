/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 10:22:10 by usoares-          #+#    #+#             */
/*   Updated: 2019/12/09 11:09:57 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int i)
{
	unsigned int	j;
	int				n;

	j = 0;
	n = 0;
	while ((s1[j] || s2[j]) && j < i)
	{
		if (s1[j] != s2[j])
		{
			n = s1[j] - s2[j];
			return (n);
		}
		if (s1[j] == '\0')
			return (n);
		j++;
	}
	return (n);
}

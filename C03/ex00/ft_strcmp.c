/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 19:51:34 by usoares-          #+#    #+#             */
/*   Updated: 2019/12/09 10:18:29 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			n = s1[i] - s2[i];
			return (n);
		}
		if (s1[i] == '\0')
			return (n);
		i++;
	}
	return (n);
}

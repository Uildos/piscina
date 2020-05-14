/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 09:54:01 by usoares-          #+#    #+#             */
/*   Updated: 2019/12/08 14:39:35 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] < 'z')
		str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
		if ((str[i - 1] < '0') || (str[i - 1] > '9' && str[i - 1] < 'A'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i = i + 1;
	}
	return (str);
}

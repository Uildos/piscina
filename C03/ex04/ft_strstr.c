/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 16:06:20 by usoares-          #+#    #+#             */
/*   Updated: 2019/12/09 18:50:35 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int j;
	int k;
	int pos;

	if (to_find[0] == '\0')
		return (str);
	j = 0;
	while (str[j])
	{
		if (str[j] == to_find[0])
		{
			pos = j;
			k = 1;
			while ((str[j + k] == to_find[k]) && (to_find[k]))
			{
				k = k + 1;
				if (to_find[k] == '\0')
					return (&(str[pos]));
			}
		}
		j++;
	}
	return (0);
}

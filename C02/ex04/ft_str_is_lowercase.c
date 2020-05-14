/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 09:25:19 by usoares-          #+#    #+#             */
/*   Updated: 2019/12/08 09:25:29 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int size;
	int i;
	int low;

	size = 0;
	i = 0;
	low = 1;
	while (str[size] != '\0')
	{
		size++;
	}
	while (i < size && low == 1)
	{
		if (str[i] >= 97 && str[i] <= 122)
			low = 1;
		else
			low = 0;
		i++;
	}
	return (low);
}

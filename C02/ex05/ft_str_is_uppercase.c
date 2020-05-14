/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:45:05 by usoares-          #+#    #+#             */
/*   Updated: 2019/12/08 09:28:15 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
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
		if (str[i] >= 65 && str[i] <= 90)
			low = 1;
		else
			low = 0;
		i++;
	}
	return (low);
}

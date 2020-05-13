/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:10:21 by usoares-          #+#    #+#             */
/*   Updated: 2019/12/03 11:59:09 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int c;
	int i;
	int swp;

	swp = 1;
	while (swp == 1)
	{
		swp = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i + 1] < tab[i])
			{
				c = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = c;
				swp = 1;
			}
			i = i + 1;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 15:40:30 by usoares-          #+#    #+#             */
/*   Updated: 2019/12/12 20:39:45 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ex_base(int nbr, int size_b, char *base)
{
	int n;

	if (nbr < 0)
	{
		ft_putchar('-');
		n = nbr * -1;
	}
	else
		n = nbr;
	if (n < size_b)
		ft_putchar(base[n]);
	else
	{
		ft_ex_base(n / size_b, size_b, base);
		ft_ex_base(n % size_b, size_b, base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				size_b;
	int				i;

	i = 0;
	while (base[i] != '\0')
		i++;
	size_b = i;
	ft_ex_base(nbr, size_b, base);
}

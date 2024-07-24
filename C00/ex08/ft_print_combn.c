/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:39:42 by afarachi          #+#    #+#             */
/*   Updated: 2024/02/15 16:41:17 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int tab[], int n)
{
	int	i;
	int	low;

	i = 1;
	low = 1;
	while (i < n)
	{
		if (tab[i - 1] >= tab[i])
			low = 0;
		i++;
	}
	if (low == 1)
	{
		i = 0;
		while (i < n)
			ft_putchar(tab[i++] + 48);
		if (tab[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	tab[9];
	int	i;

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	while (tab[0] <= (10 - n) && n >= 1 && n < 10)
	{
		ft_print(tab, n);
		tab[n - 1]++;
		i = n -1;
		while (i && n > 1)
		{
			if (tab[i] > 9)
			{
				tab [i -1]++;
				tab[i] = 0;
			}
			i--;
		}
	}
}

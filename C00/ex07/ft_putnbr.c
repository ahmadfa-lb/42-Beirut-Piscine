/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:45:34 by afarachi          #+#    #+#             */
/*   Updated: 2024/02/15 16:45:53 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_divide_nb(int nb)
{
	int		temp;
	char	c;

	if (nb != 0)
	{
		temp = nb % 10;
		nb = nb / 10;
		ft_divide_nb(nb);
		c = temp + '0';
		write(1, &c, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		ft_divide_nb(147483648);
		return ;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -1 * nb;
	}
	ft_divide_nb(nb);
}

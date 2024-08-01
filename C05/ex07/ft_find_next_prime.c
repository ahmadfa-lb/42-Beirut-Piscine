/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:17:07 by afarachi          #+#    #+#             */
/*   Updated: 2024/02/22 13:28:13 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	j;

	j = nb;
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		while (1)
		{
			if (ft_is_prime(j) == 1)
				return (j);
			j++;
		}
	}
	return (0);
}

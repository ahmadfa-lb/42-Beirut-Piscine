/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:44:32 by afarachi          #+#    #+#             */
/*   Updated: 2024/02/16 12:52:49 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	ap;
	int	bp;
	int	temp;

	ap = *a;
	bp = *b;
	temp = ap % bp;
	ap = ap / bp;
	bp = temp;
	*a = ap;
	*b = bp;
}

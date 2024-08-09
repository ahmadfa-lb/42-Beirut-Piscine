/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:42:22 by afarachi          #+#    #+#             */
/*   Updated: 2024/02/28 11:42:52 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			itemx;
	int			i;
	t_stock_str	*tab;

	tab = (t_stock_str *)malloc ((ac + 1) * sizeof (struct s_stock_str));
	i = 0;
	itemx = 0;
	if (!(tab))
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = (char *)malloc((tab[i].size + 1) * sizeof(char));
		tab[i].copy = ft_strcpy(tab[i].str, av[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}

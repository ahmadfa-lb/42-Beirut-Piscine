/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 09:45:22 by afarachi          #+#    #+#             */
/*   Updated: 2024/03/03 09:45:29 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*create_str(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += get_len(strs[i]);
		i++;
	}
	len += get_len(sep) * (size -1);
	if (size <= 0)
		len = 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (0);
	return (str);
}

char	*join_strings(int size, char **strs, char *sep, char *str)
{
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		l = 0;
		while (strs[i][j] != '\0')
			str[k++] = strs[i][j++];
		while (sep[l] != '\0' && i != size - 1)
			str[k++] = sep[l++];
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char**strs, char *sep)
{
	char	*str;

	str = create_str(size, strs, sep);
	if (!str)
		return (NULL);
	return (join_strings(size, strs, sep, str));
}

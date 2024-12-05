/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:48:33 by szmadeja          #+#    #+#             */
/*   Updated: 2024/12/05 17:48:50 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;
	int		l;

	l = 0;
	while (sep[l])
		l++;
	s = malloc(sizeof(strs + (l * (size - 1))));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			s[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			s[c++] = sep[j++];
		i++;
	}
	s[c] = '\0';
	return (s);
}

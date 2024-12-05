/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:51:12 by szmadeja          #+#    #+#             */
/*   Updated: 2024/12/05 20:45:08 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_issep(char c, char const *sep)
{
	while (*sep)
	{
		if (c == *sep)
			return (1);
		sep++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dup;
	int		sta;
	int		end;
	int		i;

	i = 0;
	sta = 0;
	end = 0;
	while (!s[start] == ft_issep(s1[start], set))
		start++;
	end = strlen(s1);
	while (!s[end] == ft_issep(s1[end], set))
		end--;
	dup = (char *)malloc(sizeof(char)(end - start + 1));
	if (!dup)
		return (NULL);
	while (sta <= end)
		dup[i] = s1[sta];
	dup[i] = '\0';
	return (dup);
}

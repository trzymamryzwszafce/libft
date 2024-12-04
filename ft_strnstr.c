/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:43:21 by szmadeja          #+#    #+#             */
/*   Updated: 2024/12/04 20:25:59 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if = (*big == '\0')
		return ((const *)big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j])
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}

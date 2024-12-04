/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:32:12 by szmadeja          #+#    #+#             */
/*   Updated: 2024/12/02 19:41:11 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*t;

	i = 0;
	while (i < n)
	{
		t[i] = (char *)src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		(char *)dest[i] = t[i];
		i++;
	}
	return (dest);
}

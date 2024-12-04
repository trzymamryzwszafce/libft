/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:19:51 by szmadeja          #+#    #+#             */
/*   Updated: 2024/12/04 17:38:26 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i > n)
	{
		if ((const char *)s[i] == (const char *)c)
			return ((const char *)&s[i]);
		i++;
	}
	return (NULL);
}

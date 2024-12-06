/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <szmadeja@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 01:34:47 by szmadeja          #+#    #+#             */
/*   Updated: 2024/12/06 22:30:10 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmem, size_t n)
{
	void	*ptr;

	if (nmem != 0 && n != 0)
		if ((SIZE_MAX / nmem) <= n)
			return (NULL);
	ptr = (void *)malloc(nmem * n);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmem);
	return ((void *)ptr);
}

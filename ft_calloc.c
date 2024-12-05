/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <szmadeja@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 01:34:47 by szmadeja          #+#    #+#             */
/*   Updated: 2024/12/05 01:55:34 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmem, size_t n)
{
	void	*ptr;

	ptr = (void *)malloc(nmem * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmem);
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:34:26 by szmadeja          #+#    #+#             */
/*   Updated: 2024/12/07 03:02:12 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*res;

	i = ft_strlen(s);
	if (start >= i)
		return (NULL);
	i = 0;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*int main() {
    const char* text = "Hello, world!";
    int start = 7;
    int length = 5;

    char* result = ft_substr(text, start, length);
    if (result != NULL) {
        printf("Podciąg: %s\n", result);
       // free(result); // Zwalniamy pamięć
    } else {
        printf("Błąd: Nie udało się wyciąć podciągu.\n");
    }

    return 0;
}*/

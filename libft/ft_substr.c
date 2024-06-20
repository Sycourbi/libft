/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:02:49 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/15 15:49:32 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Alloue et retourne une nouvelle chaîne de caractères qui est une sous-chaîne de `s`.
** La sous-chaîne commence à l'index `start` et a une longueur maximale `len`.
** La nouvelle chaîne est toujours nul-terminée.
**
** \param s La chaîne de caractères d'origine.
** \param start L'index de départ pour la sous-chaîne dans `s`.
** \param len La longueur maximale de la sous-chaîne à extraire.
** \return Une nouvelle chaîne de caractères qui est une sous-chaîne de `s`,
**         ou NULL en cas d'échec d'allocation mémoire.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	dest = malloc(len * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

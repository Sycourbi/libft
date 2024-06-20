/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:40:26 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/18 11:33:55 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Duplique une chaîne de caractères en allouant de la mémoire dynamiquement pour la copie.
**
** \param s La chaîne de caractères à dupliquer.
** \return Un pointeur vers la nouvelle chaîne de caractères, ou NULL en cas d'échec.
*/
char	*ft_strdup(const char *s)
{
	char	*dest;

	dest = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s, ft_strlen(s) + 1);
	return (dest);
}

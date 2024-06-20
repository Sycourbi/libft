/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:04:07 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/18 11:55:15 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Concatène la chaîne `src` à la fin de la chaîne `dst` jusqu'à une taille maximale `size`.
** La chaîne résultante dans `dst` est toujours nul-terminée.
**
** \param dst Chaîne de destination où concaténer.
** \param src Chaîne source à concaténer.
** \param size Taille maximale de la chaîne de destination incluant le nul-terminateur.
** \return La longueur totale de la chaîne qui aurait été créée si `dst` avait suffisamment d'espace,
**         plus la longueur de `src`. Le résultat est tronqué et nul-terminé.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	len = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && len + 1 < size)
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

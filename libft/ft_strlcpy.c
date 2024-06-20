/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:55:12 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/11 11:20:23 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Copie la chaîne `src` dans `dst` jusqu'à une taille maximale `size - 1`.
** La chaîne résultante dans `dst` est toujours nul-terminée.
**
** \param dst Chaîne de destination où copier.
** \param src Chaîne source à copier.
** \param size Taille maximale de la chaîne de destination incluant le nul-terminateur.
** \return La longueur de la chaîne source `src`.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

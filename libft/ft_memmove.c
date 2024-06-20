/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:00:17 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/17 13:30:29 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Copie `n` octets de la zone mémoire `src` vers la zone mémoire `dest`,
** même si les deux zones se chevauchent.
**
** \param dest Pointeur vers la zone de destination.
** \param src Pointeur vers la zone source.
** \param n Nombre d'octets à copier.
** \return Pointeur vers `dest`.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	if (dest > src)
	{
		while (n != 0)
		{
			((char *)dest)[n - 1] = ((const char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:08:58 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/17 16:04:29 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Recherche la première occurrence de l'octet `c` dans les `n` premiers octets
** de la zone mémoire pointée par `s`.
**
** \param s Pointeur vers la zone mémoire à inspecter.
** \param c Octet à rechercher.
** \param n Nombre d'octets à inspecter.
** \return Un pointeur vers l'octet correspondant dans `s`, ou NULL si `c` n'est pas trouvé.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

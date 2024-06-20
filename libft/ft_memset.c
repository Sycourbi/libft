/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:30:47 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/18 12:47:40 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Remplit les `n` premiers octets de la zone mémoire pointée par `s` avec l'octet `c`.
**
** \param s Pointeur vers la zone mémoire à remplir.
** \param c Octet à copier.
** \param n Nombre d'octets à remplir.
** \return Un pointeur vers `s`.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:53:48 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/07 14:07:10 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Compare les `n` premiers caractères de deux chaînes de caractères `s1` et `s2`.
**
** \param s1 Première chaîne de caractères à comparer.
** \param s2 Deuxième chaîne de caractères à comparer.
** \param n Nombre maximal de caractères à comparer.
** \return Un entier inférieur, égal ou supérieur à zéro selon que `s1` est respectivement
**         plus petite, égale ou plus grande que `s2`.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

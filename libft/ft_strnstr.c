/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:28:02 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/12 10:04:48 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Cherche la première occurrence de la sous-chaîne `little` dans la chaîne `big`,
** jusqu'à une longueur maximale `len`.
**
** \param big La chaîne dans laquelle chercher.
** \param little La sous-chaîne à chercher.
** \param len Le nombre maximal de caractères à comparer.
** \return Un pointeur vers la première occurrence de `little` dans `big`,
**         ou NULL si `little` n'est pas trouvée dans les `len` premiers caractères de `big`.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && len != 0)
	{
		j = 0;
		while (big[i + j] && little[j] == big[i + j] && len > (i + j))
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

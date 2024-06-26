/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:50:25 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/16 12:44:41 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Recherche le dernier caractère `c` dans la chaîne `s`.
**
** \param s La chaîne dans laquelle chercher.
** \param c Le caractère à rechercher.
** \return Un pointeur vers la dernière occurrence du caractère `c` dans `s`,
**         ou NULL si le caractère `c` n'est pas trouvé.
*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

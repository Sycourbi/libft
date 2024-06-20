/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:25:20 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/21 12:46:45 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Applique la fonction `f` à chaque caractère de la chaîne `s`,
** en lui passant son index en premier argument, pour créer une nouvelle chaîne de caractères.
**
** \param s La chaîne de caractères à parcourir.
** \param f La fonction à appliquer à chaque caractère avec son index.
** \return Une nouvelle chaîne de caractères résultant de l'application de `f` sur chaque caractère de `s`,
**         ou NULL en cas d'erreur.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	res = ft_strdup(s);
	if (!res)
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}

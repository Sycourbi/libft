/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:44:36 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/14 16:09:25 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
** Applique la fonction `f` à chaque caractère de la chaîne de caractères `s`,
** en lui passant son index en premier argument.
**
** \param s La chaîne de caractères à modifier.
** \param f La fonction à appliquer à chaque caractère avec son index.
** \return Aucun retour.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

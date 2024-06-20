/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:17:52 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/11 13:50:04 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Calcule la longueur d'une chaîne de caractères.
**
** \param str La chaîne de caractères dont on veut mesurer la longueur.
** \return Le nombre de caractères dans la chaîne, excluant le caractère nul '\0'.
*/
#include "libft.h"

size_t	ft_strlen( const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:43:59 by ljerinec          #+#    #+#             */
/*   Updated: 2022/11/01 17:24:03 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*pointeur, unsigned int n)
{
	unsigned int	i;
	char			*buffer_pointeur;

	buffer_pointeur = pointeur;
	i = 0;
	while (i < n)
	{
		buffer_pointeur[i] = '\0';
		i++;
	}
	pointeur = (void *)buffer_pointeur;
}

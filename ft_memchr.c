/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 01:27:42 by ljerinec          #+#    #+#             */
/*   Updated: 2022/11/16 02:16:32 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int caracter, size_t len)
{
	size_t	i;
	char	*buffstr;
	char	cara;

	buffstr = (char *)str;
	cara = (char)caracter;
	i = 0;
	while (i < len)
	{
		if (buffstr[i] == cara)
			return (&buffstr[i]);
		i++;
	}
	return (NULL);
}

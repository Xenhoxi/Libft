/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 03:07:07 by ljerinec          #+#    #+#             */
/*   Updated: 2022/11/04 03:07:07 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	u;
	size_t	breakpoint;

	i = 0;
	u = 0;
	breakpoint = 0;
	if (!str && !n)
		return (0);
	if (!to_find[0])
		return ((char *)str);
	while (str[i] && i < n)
	{
		while (str[i] == to_find[u] && i < n)
		{
			if (to_find[u + 1] == '\0')
				return ((char *)&str[breakpoint]);
			u++;
			i++;
		}
		breakpoint++;
		i = breakpoint;
		u = 0;
	}
	return (0);
}

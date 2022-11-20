/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:33:45 by ljerinec          #+#    #+#             */
/*   Updated: 2022/11/01 17:24:00 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int character)
{
	if (((character <= 'Z') && (character >= 'A'))
		|| ((character <= 'z') && (character >= 'a'))
		|| ((character >= '0') && (character <= '9')))
		return (1);
	else
		return (0);
}

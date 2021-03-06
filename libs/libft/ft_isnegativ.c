/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnegativ.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddufour <ddufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 18:00:16 by ddufour           #+#    #+#             */
/*   Updated: 2016/12/05 16:40:46 by ddufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isnegativ(char *num)
{
	if (num[0] == '-')
	{
		if (ft_isdigit(num[1]) != 0)
			return (1);
		else
			return (0);
	}
	return (1);
}

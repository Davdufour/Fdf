/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddufour <ddufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 16:31:18 by ddufour           #+#    #+#             */
/*   Updated: 2016/12/05 16:41:56 by ddufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word_line(char *line)
{
	int word;
	int a;

	word = 0;
	a = 0;
	if (line)
	{
		while (line[a])
		{
			if (ft_isspace(line[a]) == 0)
			{
				word++;
				while (ft_isspace(line[a]) == 0 && line[a])
					a++;
			}
			else if (ft_isspace(line[a]) != 0 && line[a])
				a++;
		}
	}
	return (word);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhiar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:24:28 by okhiar            #+#    #+#             */
/*   Updated: 2022/06/20 16:05:28 by okhiar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	tab = (int *)malloc(size * sizeof(int));
	if (!tab)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (size);
}

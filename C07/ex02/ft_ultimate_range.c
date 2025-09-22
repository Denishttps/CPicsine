/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 15:13:04 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/22 15:44:15 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	arr = (int *)malloc(sizeof(int) * (max - min));
	while ((min + i) < max)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (max - min);
}

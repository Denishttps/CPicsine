/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 10:15:15 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/19 11:28:55 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
		return (NULL);
	i = 0;
	arr = (int *)malloc(sizeof(int) * (max - min));
	while ((min + i) < max)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:11:46 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/09 16:56:07 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	is_swapped;

	i = 0;
	while (i < size - 1)
	{
		is_swapped = 0;
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] < tab[j + 1])
			{
				tab[j + 1] = tab[j] + tab[j + 1];
				tab[j] = tab[j + 1] - tab[j];
				tab[j + 1] = tab[j + 1] - tab[j];
			}
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 20:13:26 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/16 15:54:43 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	write(1, str, ft_strlen(str));
}

int	ft_sum_str(char *str)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (str[i])
	{
		sum += str[i];
		i++;
	}
	return (sum);
}

void	ft_sort_char_tab(char **tab, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < size - 1)
	{
		j = 1;
		while (j < size - i)
		{
			if (ft_sum_str(tab[j]) > ft_sum_str(tab[j + 1]))
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	ft_sort_char_tab(av, ac);
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

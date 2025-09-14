/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:32:50 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/14 16:32:50 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index);

int ft_fibonacci(int index)
{
	int last;
	int current;
	int temp;

	last = 0;
	current = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	while (index)
	{
		temp = current;
		current = last + current;
		last = temp;
		index--;
	}
	return current;
}
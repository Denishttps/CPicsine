/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 10:07:44 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/19 10:07:44 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	long	num;

	num = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		num *= nb;
		nb--;
	}
	return (num);
}

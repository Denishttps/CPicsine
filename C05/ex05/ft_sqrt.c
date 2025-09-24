/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 10:09:43 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/19 10:09:43 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	long	left;
	long	right;
	long	mid;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	left = 0;
	right = nb;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid < nb)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (0);
}

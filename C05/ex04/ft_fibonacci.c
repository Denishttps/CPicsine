/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2025/09/14 16:32:50 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/14 16:32:50 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci1(int index)
{
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

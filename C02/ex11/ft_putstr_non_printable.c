/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:10:44 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/08 18:10:44 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[3];

	char	hex_digits[] = "0123456789abcdef";

	while (str[i])
	{
		if (str[i] < ' ' && str[i] > '~')
		{
			write(1, &str[i], 1);
			i++;
			continue ;
		}
		hex[0] = '\\';
		hex[1] = hex_digits[(str[i] >> 4) & 15];
		hex[2] = hex_digits[str[i] & 15];
		write(1, hex, 3);
		i++;
	}
}

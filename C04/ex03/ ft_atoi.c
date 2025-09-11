/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:41:37 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/11 18:14:14 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

// int	ft_isspace(char s)
// {
// 	return (
// 		(s == ' ') || (s == '\f')
// 		|| (s == '\n') || (s == '\t')
// 		|| (s == '\v')
// 	);
// }

// char	*get_space_index(char *str)
// {
// 	while (*str)
// 	{
// 		if (!ft_isspace(*str))
// 			return (str);
// 		str++;
// 	}
// 	return (str);
// }

// int	get_signet(char *str)
// {
// 	int	i;
// 	int	sig;

// 	sig = 1;
// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] == '+' || str[i] == "-")
// 		{
// 			sig += (str[i] - '+') / -2;
// 			str++;
// 		}
// 		i++;
// 	}
// 	return (sig);
// }

int	ft_atoi(char *str)
{
	int	sig;
	int	num;

	sig = 1;
	num = 0;
	while (*str == ' ' || (*str >= 9 && *str <= '13')) str++;
	while (*str == '+' || *str == '-')
	{
		sig *= 1 - 2 * (*str == '-');
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num*10 + (*str - '0');
		str++;
	}
	return num*sig;
}

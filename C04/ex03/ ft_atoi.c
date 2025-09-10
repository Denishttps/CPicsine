/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:41:37 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/10 19:08:38 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	ft_isspace(char s)
{
	return (
		(s == ' ') || (s == '\f')
		|| (s == '\n') || (s == '\t')
		|| (s == '\v')
	);
}

char	*get_space_index(char *str)
{
	while (*str)
	{
		if (!ft_isspace(*str))
			return (str);
		str++;
	}
	return (str);
}

int	get_signet(char *str)
{
	int	i;
	int	sig;

	sig = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == "-")
		{
			sig += (str[i] - '+') / -2;
			str++;
		}
		i++;
	}
	return (sig);
}

int	ft_atoi(char *str)
{
	int	sig;
	int	i;

	get_space_index(str);
	sig = get_signet(str);
	i = 0;
	while (str[i])
	{
		/* code */
	}
	
}

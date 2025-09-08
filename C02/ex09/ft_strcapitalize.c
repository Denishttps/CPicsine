/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:48:32 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/08 17:48:32 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	is_word;
	int	i;

	is_word = 1;
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (is_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 'a' + 'A';
			else if (!is_word && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] - 'A' + 'a';
			is_word = 0;
		}
		else
			is_word = 1;
		i++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 15:49:23 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/22 16:59:19 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	while (src[i])
	{
		*dest = *src;
		dest++
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sum_len;
	int		i;
	// int		j;
	int		sep_len;
	char	*str;

	sep_len = ft_strlen(sep);
	i = 0;
	sum_len = 0;
	while (i < size)
	{
		sum_len += ft_strlen(strs[i]);
		i++;
	}
	str = (char *)malloc(sizeof(char) * (sum_len + ((sep_len * size) - 1)));
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		i++;
	}
	return str;
}


#include <stdio.h>
int main(int ac, char **av)
{
	char *str = ft_strjoin(ac - 1, av, "sep");
	printf("%s\n", str);
	free(str);
}

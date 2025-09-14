/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:39:42 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/14 14:39:42 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi_base(char *str, char *base);

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int is_valid_base(char *base)
{
    int	i; 
	int	j;

    if (ft_strlen(base) < 2)
        return (0);
    i = 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-')
            return (0);
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int ft_atoi_base(char *str, char *base)
{
    int sig = 1;
    long num = 0;
    int len_base;
    int i;

    if (!is_valid_base(base))
        return (0);
    len_base = ft_strlen(base);
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sig *= -1;
        str++;
    }
    i = 0;
    while (str[i])
    {
        int j = 0;
        while (j < len_base && str[i] != base[j])
            j++;
        if (j == len_base)
            break;
        num = num * len_base + j;
        i++;
    }
    return (int)(num * sig);
}
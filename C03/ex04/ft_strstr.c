
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 21:12:30 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/06 21:12:30 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find);

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;

    return i;
}

char *ft_strstr(char *str, char *to_find)
{
    int len_str = ft_strlen(str);
    int len_find = ft_strlen(to_find);

    if (!len_find)
        return str;

    if (len_find > len_str) 
        return NULL;

    int i = 0;
    while (i <= len_str - len_find)
    {
        int j = 0;
        while (j < len_find && str[i+j] == to_find[j])
            j++;
        if (j == len_find)
            return &str[i];
    }
    
    return NULL;
}

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

char *ft_strcat(char *dest, char *src);

char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    while (dest[i])
        i++;

    int j = 0;
    while (src[j])
    {
        dest[i+j] = src[j];
        j++;
    }

    dest[i+j] = '\0';
    return dest;
}
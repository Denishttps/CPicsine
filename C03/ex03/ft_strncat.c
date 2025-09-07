
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

char *ft_strncat(char *dest, char *src, unsigned int nb);

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i = 0;
    while (dest[i])
        i++;

    int j = 0;
    while (src[j] && j < nb)
    {
        dest[i+j] = src[j];
        j++;
    }

    dest[i+j] = '\0';
    return dest;
}
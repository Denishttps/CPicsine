
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

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    while (src[i])
        i++;
    
    return i;
}
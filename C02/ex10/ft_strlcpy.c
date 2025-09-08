/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:33:05 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/08 16:33:06 by dbobrov          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


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
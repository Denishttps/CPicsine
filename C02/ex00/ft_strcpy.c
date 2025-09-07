
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 19:05:57 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/06 19:05:57 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src);

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return dest;
}

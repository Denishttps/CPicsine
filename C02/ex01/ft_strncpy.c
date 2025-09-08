/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:31:35 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/08 16:31:38 by dbobrov          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

char *ft_strncpy(char *dest, char *src, unsigned int n);

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    while (i < n && src[i])
    {
        dest[i] = src[i];
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}
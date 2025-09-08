/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:33:11 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/08 16:33:14 by dbobrov          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void ft_putstr_non_printable(char *str);

void ft_putstr_non_printable(char *str)
{
    char hex_digits[] = "0123456789abcdef";
    for (int i = 0; str[i]; i++)
    {
        if (str[i] < ' ' && str[i] > '~') 
        {
            write(1, &str[i], 1);
            continue;
        } 
        else 
        {
            char hex[3];
            hex[0] = '\\';
            hex[1] = hex_digits[(str[i] >> 4) & 15]; // 0000 1111 = 15 полубайт
            hex[2] = hex_digits[str[i] & 15];
            write(1, hex, 3);
        }
           
    }
}

/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:32:58 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/08 16:32:59 by dbobrov          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


char *ft_strcapitalize(char *str);

char *ft_strcapitalize(char *str)
{
    int is_word = 1;
    for (int i = 0; str[i]; i++)
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
        {
            if (is_word && (str[i] >= 'a' && str[i] <= 'z'))
                str[i] = str[i] - 'a' + 'A';
            else if (!is_word && (str[i] >= 'A' && str[i] <= 'Z'))
                str[i] = str[i] - 'A' + 'a';
            is_word = 0;
        }
        else
            is_word = 1;
    return str;
}
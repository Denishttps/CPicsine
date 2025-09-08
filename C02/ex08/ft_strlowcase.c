/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:32:53 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/08 16:32:53 by dbobrov          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


char *ft_strupcase(char *str);

char *ft_strupcase(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 'A' + 'a';
    return str;
}
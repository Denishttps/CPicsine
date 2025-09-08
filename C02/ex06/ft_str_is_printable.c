/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:32:23 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/08 16:32:32 by dbobrov          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int ft_str_is_printable(char *str);

int ft_str_is_printable(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] < ' ' && str[i] > '~')
            return 0;
    return 1;
}
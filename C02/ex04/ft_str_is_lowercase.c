/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:32:09 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/08 16:32:10 by dbobrov          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


int ft_str_is_lowercase(char *str);

int ft_str_is_lowercase(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            return 0;
    return 1;
}
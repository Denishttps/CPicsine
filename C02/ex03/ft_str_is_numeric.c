/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:31:58 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/08 16:32:00 by dbobrov          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


int ft_str_is_numeric(char *str);

int ft_str_is_numeric(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] < '0' && str[i] > '9')
            return 0;
    return 1;
}
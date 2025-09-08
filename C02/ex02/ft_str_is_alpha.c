/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:31:49 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/08 16:31:51 by dbobrov          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int ft_str_is_alpha(char *str);

int ft_str_is_alpha(char *str)
{
    for (int i = 0; str[i]; i++)
        if (!(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'))
            return 0;
    return 1;
}
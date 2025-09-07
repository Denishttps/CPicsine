
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 20:29:58 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/06 20:29:58 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str);

int ft_str_is_alpha(char *str)
{
    for (int i = 0; str[i]; i++)
        if (!(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'))
            return 0;
    return 1;
}
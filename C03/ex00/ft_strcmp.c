/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:33:36 by dbobrov           #+#    #+#             */
/*   Updated: 2025/09/08 16:33:40 by dbobrov          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int ft_strcmp(char *s1, char *s2);

int ft_strcmp(char *s1, char *s2)
{
    for (int i = 0; s1[i] || s2[i]; i++)
        if (s1[i] != s2[i])
            return (unsigned char)s1[i] - (unsigned char)s2[i];
    return 0;
}
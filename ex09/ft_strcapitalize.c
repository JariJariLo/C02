/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:17:03 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/24 01:24:41 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_alpha(char c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

char to_lowercase(char c) {
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

char to_uppercase(char c) {
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

char *ft_strcapitalize(char *str) {
    int i = 0;
    int coso = 1;

    while (str[i]) {
        if (is_alpha(str[i])) {
            if (coso)
                str[i] = to_uppercase(str[i]);
            else
                str[i] = to_lowercase(str[i]);
            coso = 0;
        } else {
            coso = 1;
        }
        i++;
    }
    return str;
}

/*int	main(void)
{
	char	str[] = "salut,
			comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
*/

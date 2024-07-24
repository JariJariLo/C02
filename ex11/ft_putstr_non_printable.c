/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:20:15 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/24 01:24:53 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int is_printable(char c) {
    return (c >= 32 && c <= 126);
}

void hex_conv(char str) {
    char n;
    char temp;

    write(1, "\\", 1);

    temp = (str >> 4) & 0xF;
    n = temp < 10 ? '0' + temp : 'a' + temp - 10;
    write(1, &n, 1);

    temp = str & 0xF;
    n = temp < 10 ? '0' + temp : 'a' + temp - 10;
    write(1, &n, 1);
}

void ft_putstr_non_printable(char *str) {
    int i = 0;
    while (str[i]) {
        if (is_printable(str[i]))
            write(1, &str[i], 1);
        else
            hex_conv(str[i]);
        i++;
    }
}
/*int	main(void)
{
	char	str[] = "Hello\nWorld\tbo\v!";

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}*/

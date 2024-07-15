/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:25:36 by kris              #+#    #+#             */
/*   Updated: 2024/07/10 16:25:36 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_printable(char c) {
    return (c >= 32 && c <= 126);
}

int ft_str_is_printable(char *str) {
    if (str[0] == '\0') {
        return 1;
    }

    int i = 0;
    while (str[i] != '\0') {
        if (!is_printable(str[i])) {
            return 0;
        }
        i++;
    }
    return 1;
}

int main() {
    char str[] = "NULL";
    int result = ft_str_is_printable(str);
    printf("%d\n", result);
    return 0;
}

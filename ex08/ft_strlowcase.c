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

char *ft_strlowcase(char *str) {
    int i = 0;
    
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
              str[i] = str[i] + 'a' - 'A'; 
        }
        i++;
    }
   return str;
}

int main() {
    char str[] = "ABC";
    printf("%s\n", ft_strlowcase(str) );
    return 0;
}

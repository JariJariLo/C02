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

char *ft_struppcase(char *str) {
    int i = 0;
    
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
              str[i] = str[i] - 'a' + 'A'; 
        }
        i++;
    }
   return str;
}

int main() {
    char str[] = "abc";
    printf("%s\n", ft_struppcase(str) );
    return 0;
}

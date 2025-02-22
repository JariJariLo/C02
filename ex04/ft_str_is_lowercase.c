/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 01:14:01 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/24 01:24:23 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	lowercase(char c)
{
	return ((c >= 'a' && c <= 'z'));
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!lowercase(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char str[20] = "";
	int result = ft_str_is_lowercase(str);
	printf("%d\n", result);
}*/

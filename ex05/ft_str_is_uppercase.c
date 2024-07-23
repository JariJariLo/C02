/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 00:46:27 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/24 01:23:07 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	uppercase(char c)
{
	return ((c >= 'A' && c <= 'Z'));
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!uppercase(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char str[20] = "o";
	int result = ft_str_is_uppercase(str);
	printf("%d\n", result);
}*/

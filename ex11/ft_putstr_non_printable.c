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

int	is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

void	hex_conv(char str)
{
	char	n;
	char	prefix;
	char	temp;

	prefix = '\\';
	write(1, &prefix, 1);
	temp = (str >> 4) & 0xF;
	if (temp < 10)
	{
		n = '0' + temp;
	}
	else
	{
		n = 'a' + temp - 10;
	}
	write(1, &n, 1);
	temp = str & 0xF;
	if (temp < 10)
	{
		n = '0' + temp;
	}
	else
	{
		n = 'a' + temp - 10;
	}
	write(1, &n, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_printable(str[i]))
		{
			hex_conv(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
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

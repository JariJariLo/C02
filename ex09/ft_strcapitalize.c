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

int	is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	lowercase(char c)
{
	return ((c >= 'a' && c <= 'z'));
}

int	uppercase(char c)
{
	return ((c >= 'A' && c <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	coso;

	i = 0;
	coso = 1;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]))
		{
			if (coso)
			{
				if (lowercase(str[i]))
				{
					str[i] = uppercase(str[i]);
				}
				coso = 0;
			}
			else
			{
				if (uppercase(str[i]))
				{
					str[i] = lowercase(str[i]);
				}
			}
		}
		else
		{
			coso = 1;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "salut,
			comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
*/

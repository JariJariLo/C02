/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:14:26 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/13 11:44:34 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_alpha(char c)
{
	return ((c>='A'&&c<='Z')||(c>='a'&&c<='z'));

}

int ft_str_is_numeric(char *str)
{
		int i;
		
		i=0;
		if(str[0]=='\0')
		{
			return (1);
		}
		while (str[i]!='\0')
		{
			if(!is_alpha(str[i]))
			{
				return (0);
			}
			
			i++;
		}
			return (1);	
}

int main (int)
{
	char str[20]="*";
	int result = ft_str_is_numeric(str);
	printf("%d\n",result);

}

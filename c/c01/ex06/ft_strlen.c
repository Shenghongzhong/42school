/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 20:26:42 by szhong            #+#    #+#             */
/*   Updated: 2023/03/09 20:32:55 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
	       	str++;
	}
	return counter;
}


int	main()
{
	char	string[] = "Please exit the program";
	int	length;

	length = ft_strlen(string);

	printf("%d", length);

}

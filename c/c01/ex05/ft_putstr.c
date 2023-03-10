/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 20:01:03 by szhong            #+#    #+#             */
/*   Updated: 2023/03/09 20:25:04 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INSTRUCTION
 * 1. Create a function
 * 2. the function displays a string of character
 * 3. it's the standard output
 * 
*/

// First of all, a string of characters - A-Z, a-z...
// In the ASCII table, the decimal value ranges from 33 to 126
// character array
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main()
{	
	char str[] = "Please call me at 21:00asdasdasdasdasdad";
	ft_putstr(str);
}

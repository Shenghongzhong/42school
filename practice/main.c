/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:25:20 by szhong            #+#    #+#             */
/*   Updated: 2023/03/08 10:17:32 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(int argc, char *argv[])
{
	int nb;

	if ( argc == 2)
	{
		if ((argv[1][0]) != '-')
		{
			nb = atoi(argv[1]);
		}
		else
		{
			nb = atoi(&argv[1][1]);
			printf("this is a negative number %c\nAND this is the value of atoi(&argv[1][1]): %d\n The value of atoi(argv[1])%d\n the value of argv[1][1]: %c\nthe value:  argv[1]: %s\n the value of atoi(*argv[1][1]) is %d\n", argv[1][0],nb, atoi(argv[1]), argv[1][1], argv[1], atoi(&(argv[1][1])));
			//nb = atoi(argv[1][1]) * (-1);
		}
	}


//	nb = (-3);
//	ft_putnbr(nb);
	return 0;
}

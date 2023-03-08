/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:25:20 by szhong            #+#    #+#             */
/*   Updated: 2023/03/07 20:34:00 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(int argc, char *argv[])
{	
	char program_name[10000];
	int nb;
/*
	if ( argc == 2)
	{	
		nb = atoi(argv[3]);
	}
*/	
	
	nb = atoi(argv[1]);
	printf(" this is the value of argv[0]\n");
	printf("%d \n", atoi(argv[0]));
	printf("this is the value of nb\n");
	printf("%d", nb);
//	ft_putnbr(nb);
	return 0;
}

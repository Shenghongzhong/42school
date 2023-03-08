/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:25:20 by szhong            #+#    #+#             */
/*   Updated: 2023/03/08 11:35:17 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb);

int	main(int argc, char *argv[])
{
	int nb;
	char error_message[24];
	char *p[24];
	
	error_message = "Please input 1 number!\n";
	p = &(error_message[0]);

	if (argc == 2)
	{
		if ((argv[1][0]) != '-')
		{
			nb = atoi(argv[1]);
		}
		else
		{
			nb = atoi(&argv[1][1]);
			nb = atoi(&argv[1][1]) * (-1);
		}
	}
	else	
	{
		write(1, p, 24);
		write(1, "33", 1);
	}
	ft_putnbr(nb);
	return 0;
}

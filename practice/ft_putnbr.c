/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:26:34 by szhong            #+#    #+#             */
/*   Updated: 2023/03/08 09:08:15 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	print_digits(int num);

void	print_digits(int num)
{
	int digit;
	// char error_message[44];

	digit = num % 10 + 48;
	if (num > 9 && num < 1000000000)
	{
		num = num / 10;
		ft_putnbr(num);
	}
	else if (num > 1000000000)
	{
		write(1, "Please insert 0<n<1000000000", 28);
	}
	write(1, &digit, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0)
	{	
		print_digits(nb);
	}
	else
	{
		nb = nb * -1;
		write(1, "45", 2);
		print_digits(nb);
	
	}	
}

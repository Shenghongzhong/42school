/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 04:18:37 by szhong            #+#    #+#             */
/*   Updated: 2023/03/10 07:09:26 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void	ft_rev_int_tab(int *tab, int size)
{
	
}
*/

// first the function should take any pointer to int -array
// second we need to convert them into asci standard
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{	
	int	digit;

	digit = nb % 10 + 48;
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	if ( nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
		ft_putnbr(nb);
	}
	write(1, &digit, 1);
}

int	main()
{ 
	int	tab[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
	int	*p;
	int	size;
	int	i;

	p = tab;
	size = sizeof(tab) / sizeof(tab[0]);
	i = size;
	while (i > 0)
	{
		ft_putnbr(*(p+i-1));
		i--;
	}
}



/*

int	ft_rev_int_tab(int *tab, int size)
{
	// you have to input the asc table value
	// so you have to check each value from the input
	// if it's 55, it should put 55 rather than 7
	// because write function is taking standard input and return standard output
	// standard output means the function will follow standards
	// ascii is standard
	int	tab[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
	int	*p;
	int	i;
	int	size;

	p = tab;
	size = sizeof(tab) / sizeof(tab[0]);
	i = size;
	// usually we are ascending order
	// but now we need to display integer descrending order
	while (i > 0)
	{
		printf("this is prinft function - %d\n", tab[i-1])
		write(1, (p + i - 1), 1);
		write(1, "\n", 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{	
	int	digit;

	digit = nb % 10 + 48;
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	if ( nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
		ft_putnbr(nb);
	}
	write(1, &digit, 1);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:10:16 by szhong            #+#    #+#             */
/*   Updated: 2023/03/09 11:39:44 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
/* This function divides parameters a by b and stores the result in the int pointed by
div.
The function  also stores the remainder of the division of a by b in the int pointed by mod
*/

// What's the first step?
// What does the function do here?
// The function will perform two calcualtions: division and modulus
// Both two outcomes will be stored into two variables of which types are integer i.e. int
// Division >> Quotient
// Modulus >> Remainder 
// The function is designed to have two pointers -> both are integer type pointers
// A pointer variable is to store the memory address of a variable >> referencing
// A pointer variable allows you to access the value stored in the address of the variable the poiner reference to >> dereferencing 
void	ft_div_mod(int a, int b, int *div, int *mod);

int	main()
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 42;
	b = 8;
	div = &a;
	mod = &b;
	
	printf("The original:a >  %d, b>  %d\n, the pointer *div > %p, the pointer *mod > %p\n", a, b, div, mod);
	ft_div_mod(a, b, div, mod);
	printf("Post Function:a >  %d, b>  %d\n, the pointer *div > %p, the pointer *mod > %p\n", a, b, div, mod);

}

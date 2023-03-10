/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:40:29 by szhong            #+#    #+#             */
/*   Updated: 2023/03/09 12:19:12 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INSTRUCTION
1. This function divides parameters a by b.
2. The result of this division is stored in the
int pointed by a.
3. The remainder of the division is stored in the int pointed by b
*/

// First action is the division of two parameter a and b >> original ones
// the result of the division is stored in an integer variable >> you create a new variable
// the integer variable is pointed by pointer a >> this variable pointed by the same pointer a
// >>>> it means the pointer a now has a new memory address that points to the new value of the division result variable
// the remainder of the division is stored in the int pointed by the pointer variable b >> this variable pointed by the same pointer b 
// >>>> it means the pointer b now has a new memory address that points to the new value of the remainder result variable
// >>>>>>>>>>>>>>>> thoughts on pointer arithmetic <<<<<<<<<<<<<<<<
// obviously, the you can't perform the division of two pointer variables
// because the pointer stores the address of a variable
// the devision of two pointer variable will cause a compiler error
// a memory address is the memory location, ( memory >> computer memory)
// it's like you ask people to divide one post code by another post code unless everyone knows the rule and agree with it then it won't work
// >>>> >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main()
{
	int	*a;
	int	*b;
	int	p;
	int	q;
	
	p = 42;
	q = 8;
	a = &p;
	b = &q;
	printf("The origin: p -> %d, q -> %d\n the addresses that pointer stores: a -> %p, b -> %p\n, the value of the pointers stored *a >> %d, *b >>  %d\n\n", p, q, a, b, (*a), (*b));
	ft_ultimate_div_mod(a, b);
	printf("The origin: p -> %d, q -> %d\n the addresses that pointer stores: a -> %p, b -> %p\n, the value of the pointers stored *a >> %d, *b >>  %d\n", p, q, a, b, (*a), (*b));
}

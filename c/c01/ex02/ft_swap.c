/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 22:03:34 by szhong            #+#    #+#             */
/*   Updated: 2023/03/09 07:49:16 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// this is a function which take two pointers as arguments
// what the function is trying to do is to access the value
// the pointer a is integer pointer to integer x, meaning storing the address of x
// the pointer b is integer pointer to integer y, meaning storing the address of y
// when the pointer a dereferencing, the *a  access the value of x that stored in the address
// when the pointer b dereferencing, the *b  access the value of y that store in the address
// since we are trying to swap two values
// we can use the pointer a,  the address of x, and dereferencing a,
// we assign it with the dereferencing pointer b, the value that stored in the address of y
// so the pointer, the address of x will be replaced with the value of y
// however, at this point, the value of x is replaced so you can't do anything
// therefore the logic isn't sound
//
// We can try it again
// With the purpose of swaping two values from each other side,
// we need to have a temporary place to store the one or another value
// First of all, we declare our aim is to assign the value of x, the one that is awaiting for being assigned
// Secondly, we declare a variable to be saved 
// by doing that, we use the dereferencing pointer a, which is the value stored in the address of x, we assign the value of the dereferencing pointer a
// thirdly, we assign the value of y to the variable x, by using the dereferencing pointer a, the value stored in the address of x, we assign *a = *b ( the value stored in the address of y)
// Then, our variable x has a new value, but the address remains the same
// Fourthly, we assign the temporary value to the variable y, by using the dereferencing pointer b, the value stored in the address of y, we assign *b = temporary 

#include <stdio.h>

void	ft_swap(int *a, int *b)
{

	int	temporary;

	temporary = *a; // the value stored in x
	*a = *b; // reassignment the value of x that stored in the pointer a is modified and replaced with b
	*b = temporary;	// reassignment, the value of y that stored in the pointer b is modified by dereferencing, and replaced with the temporary which is the value of x
	
}

int	main()
{
	int	x;
	int	y;
	int	*p;
	int	*q;

	x = 5;
	y = 10;
	p = &x;
	q = &y;
	printf("the original: %d, %d\n", x, y);
	ft_swap(p, q);
	printf("after swap: %d, %d\n", *p, *q);
	
	

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 07:11:10 by szhong            #+#    #+#             */
/*   Updated: 2023/03/10 13:09:42 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Instruction
 * Create a function which sort an array of integers by ascending order
 * The argument tab is a pointer to int, the number of ints in the array
 *
 * 	Thought & Theory
 * Sorting is to rearrange elements by some properties
 * In this exercise, we aim to rearrange the value of integers by the increasing order.
 * 
 * Mathematically, sorting has many different methods. Linear search is the first one
 * I came up with. That is, each element compares with each other element. It takes a
 * a long time
 *
 * Later, I came up with a new idea: why are we doing sorting?
 * Because we want to sort element by order
 * In terms of order, integer will have the smallest and biggest.
 * Stuff are inbetween these two points. 
 *
 * First, we can find the smallest
 * Second, we can find the biggest
 * Third, we can compare the second smallest, and the second biggest
 * And so on 
 *
 * I think I figure out Binary Search Sorting Method
 *  
 *
 * 	Key Points
 * 1. Variable Declaration - How many variables do I need to have? what types are they?
 * 2. What are the outcome? what are purposes? What logics do I need to use?
 * 3. Variable(Value) Assignment -  what values do I need and why?
 * 4. How do I know the loop comes to the end? - when the initiator 
 * The end outcome is to have a sorted order integer - the order is ascending order
 * From the smallest to the greatest - greater and smaller
 *
 * 	Plan
 * 1. Pattern recognition
 * 	[] Selection Sort -> Left <> Right
 * 	[] Linear Search
 * 	[] Binary Search
 * 2. We need to declare variables such as 
 * 	[] a int variable for the total number of elements in a given array
 * 	[] a int variable for the initiator to control the left hand  loop - threhold
 * 	[] a int variable for the index for the smallest number
 * 	[] a int variable for the initiator to control the right hand loop 
 * 	[] a variable for pointer to integer to hold the given array
 * 	[] a variable for 
 * 3. Concepts check
 * 	[] while loop - looping
 * 	[] if else statment - branching 
 * 	[] Selection Sort
 * 	 
*/
#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_sort_int_tab(int *tab, int size);
void	ft_putnbr_arr(int *nb, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_index;
	int	temp;
	
	i = 0;
	while (i < size - 1)
	{	min_index = i;
		j = i + 1;
		while ( j < size)
		{
			if ( tab[j] < tab[min_index])
			{
				min_index = j;
			}
			j++;
		}

		temp = tab[i];
		tab[i] = tab[min_index];
		tab[min_index] = temp;
		i++;
	}

}

void	ft_putnbr_arr(int *nb, int size)
{
	int	i;
	
	i=0;
	while (i < size)
	{
		ft_putnbr(*(nb + i));
		if ( i != size - 1)
		{
			write(1, ", ", 2);
		}
		i++;		
	}
}

void	ft_putnbr(int nb)
{
	int	digit;

	digit = nb % 10 + 48;
	if (nb > 9)
	{
		nb = nb /10;
		ft_putnbr(nb);
	}
	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
		ft_putnbr(nb);
	}
	write(1, &digit, 1);
}


int	main()
{
	int	tab[] = {30,20,50,-10, 0,100};
	int	size;

	size = sizeof(tab) / sizeof(tab[0]);
	
	ft_putnbr_arr(tab, size);
	ft_sort_int_tab(tab, size);
	printf("\n");
	ft_putnbr_arr(tab, size);
}

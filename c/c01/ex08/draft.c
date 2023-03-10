/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 07:11:10 by szhong            #+#    #+#             */
/*   Updated: 2023/03/10 11:06:35 by szhong           ###   ########.fr       */
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
 * 	[] Linear Search
 * 	[] Binary Search
 * 2. We need to declare variables such as 
 * 	[] a variable for the total number of elements in a given array
 * 	[] a variable for the initiator to control the loop - or you can say it threhold
 * 	[] a variable for pointer to integer to hold the given array
 * 	[] a variable for 
 * 3. Concepts check
 * 	[] while loop - looping
 * 	[] if else statment - branching
 * 
 * 	 
*/

// ABANDON

void	ft_sort_int_tab(int *tab, int size)
{
	int	*p;
	int	i;
	int	a;
	int	b;
	int	*result;
	int	smallest;
	int	largest;

	i = 0;
	p = tab;
	result = tab;
	a = *p
	while( i <= size/2)
	{
		while ( i < size -1)
		{
			a = *(p + i);
			while ( i < size -2)
			{
				b = *(p + i + 1);
				if (a < b)
				{
					b = *(p + i + 2);
				}
			}
			a = 

				
		}
		
	}	
}


int	main()
{
}

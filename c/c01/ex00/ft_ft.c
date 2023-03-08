/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:52:23 by szhong            #+#    #+#             */
/*   Updated: 2023/03/08 16:57:19 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// a function, a parameter
// the function will take a pointer as an argument
// inside the function, there will be an interger type variable of "42"
void	ft_ft(int *nbr)
{
	// so nbr is a pointer variable
	int	num;

	num = "42";
	nbr = &num;
}








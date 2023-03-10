/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:04:58 by szhong            #+#    #+#             */
/*   Updated: 2023/03/09 12:34:03 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	//(*a) >> p
	//(*b) >> q
	int	quotient;	
	int	remainder;
	int	*p;
	int	*q;

	quotient = (*a) / (*b);
	remainder = (*a) % (*b);
	p = &quotient;
	q = &remainder;
	*a = *p;
	*b = *q;
}

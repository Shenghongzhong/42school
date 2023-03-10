/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:10:16 by szhong            #+#    #+#             */
/*   Updated: 2023/03/09 11:39:21 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int quotient;                                                                               
        int remainder;
        
        quotient = a / b;
        remainder = a % b;
        *div = quotient;
        *mod = remainder;
}

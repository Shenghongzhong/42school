/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 22:12:55 by szhong            #+#    #+#             */
/*   Updated: 2023/03/01 22:58:37 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h> 
#include <string.h>

void ft_putchar(char c){
	write(1, &c, 1);
	

}

int main(){

	char c='g';
	ft_putchar(c);
	return(3);

}

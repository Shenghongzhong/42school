/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:06:49 by szhong            #+#    #+#             */
/*   Updated: 2023/03/04 18:33:37 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* 
 * 42 school is awesome!
 * */

#include <stdio.h>
#include <string.h>

int	main(){
	char name[] = "42 school is awesome!";
	
	char name_two[21] = "42 school is awesome!";

	char name_three[] = {'4', '2', 's', 'c', 'h', 'o', 'o', 'l', 'i', 's', 'a', 'w', 'e', 's', 'o', 'm', 'e', '!', '\0'};

	char name_four[21] =  {'4', '2', 's', 'c', 'h', 'o', 'o', 'l', 'i', 's', 'a', 'w', 'e', 's', 'o', 'm', 'e', '!', '\0'};

	int i;

	for( int j=0;name_three[j] != '\0'; j++)
	{	
		char *input_name = name_three[j];
		char outcome_name[80];

		char outcome_name[] = strcat(input_name); 	
	}	
	
	return 0;
}

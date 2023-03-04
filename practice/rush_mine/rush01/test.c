/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:35:08 by szhong            #+#    #+#             */
/*   Updated: 2023/03/04 21:35:32 by szhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(){
	int x = 1;
	int y = 5;
	
	int j = 0;
	char c[4];
	
	while( j <=  y){

		if (j == 0){
			int i = 0;
			while( i <= x ){
				if ( i == 0){
					c[0] = '/';
					write(1, &c, 1);
					} 
				else if (i < x){
					c[0] = '*';
					write(1, &c, 1);
					}
				else if ( i == x ) {
					char c[3] = "\\\n";
					write(1, &c, 2);
					}
			
				i++;
				
					}
			}	
		else if ( j < y ) {
			int i = 0;
			while( i <= x ) {
				if ( i == 0) {
					c[0] = '*';
					write(1, &c, 1);
				}
				else if (i < x) {
					c[0] = ' ';
					write(1, &c, 1);
				}
				else if (i == x) {
					char c[2] = "*\n";
					write(1, &c, 2);
				}
			i++;
			}
		}
		else if ( j == y) {
			int i = 0;
			while( i <= x) {
				if (i == 0) {
					char c[2] = "\\";
					write(1, &c, 1);
				}
				else if ( i < x){
					c[0] = '*';
					write(1, &c, 1);
				}
				else if ( i == x ) {
					char c[3] = "/\n";
					write(1, &c, 3);
				}
			i++;
			}
		
		
		}		
	j++;
		}

	}

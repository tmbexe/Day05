/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmbexe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:31:32 by tmbexe            #+#    #+#             */
/*   Updated: 2020/06/26 11:18:30 by tmbexe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char ft_strcpy(char *dest, char *src){
	int i;

	i = 0;
	while(src [i] != '\0'){
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return '\0';
}

int main(){
	char p[40] = {};
	char z[] = "Hello World";
	ft_strcpy(p, z);
	printf("%s\n", p);
	return 0;
}

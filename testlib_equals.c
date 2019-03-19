/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelhomm <ndelhomm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/01 14:32:43 by ndelhomm          #+#    #+#             */
/*   Updated: 2019/02/15 12:05:44 by ndelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int 	main()
{
	int		x;
	int		i;
	void	*p;
	int		y;
	float	f;
	long double lf;

	p = realloc;
	i = 1;
	f = 6;
	lf = 900.603665;

	
	// 1
	printf("===============  \033[33mTEST | Width = Precision = l %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%9.9d|%%1.1d||%%9.9d|%%2.2d||%%9.9d|%%3.3d|\033[0m arg: \033[36m 150, -150 \033[0m \n");
	x =     ft_printf("my  printf: |%9.8d|%1.1d||%9.9d|%2.2d||%9.9d|%3.3d|\n", 0, 0, -1, -1, 123, 123);
    y =        printf("the printf: |%9.8d|%1.1d||%9.9d|%2.2d||%9.9d|%3.3d|\n", 0, 0, -1, -1, 123, 123);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

		printf("===============  \033[33mTEST | Width = Precision = l | Flag # %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#9.9d|%%#1.1d||%%#9.9d|%%#2.2d||%%#9.9d|%%#3.3d|\033[0m arg: \033[36m 150, -150 \033[0m \n");
	x =     ft_printf("my  printf: |%#9.9d|%#1.1d||%#9.9d|%#2.2d||%#9.9d|%#3.3d|\n", 0, 0, -1, -1, 123, 123);
    y =        printf("the printf: |%#9.9d|%#1.1d||%#9.9d|%#2.2d||%#9.9d|%#3.3d|\n", 0, 0, -1, -1, 123, 123);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

			printf("===============  \033[33mTEST | Width = Precision = l | Flag ' ' %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%# 9.9d|%%# 1.1d||%%# 9.9d|%%# 2.2d||%%# 9.9d|%%# 3.3d|\033[0m arg: \033[36m 150, -150 \033[0m \n");
	x =     ft_printf("my  printf: |%# 9.9d|%# 1.1d||%# 9.9d|%# 2.2d||%# 9.9d|%# 3.3d|\n", 0, 0, -1, -1, 123, 123);
    y =        printf("the printf: |%# 9.9d|%# 1.1d||%# 9.9d|%# 2.2d||%# 9.9d|%# 3.3d|\n", 0, 0, -1, -1, 123, 123);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	return(0);
}




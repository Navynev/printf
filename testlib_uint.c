/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlib.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:28:53 by jbrisset          #+#    #+#             */
/*   Updated: 2019/02/25 14:29:00 by jbrisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(vuid)
{
	int		i;
	int		x;
	int		y;

	i = 1;


    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%u|%%u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%u|%u|\n", 42, -42);
    y =        printf("the printf: |%u|%u|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+u|%%+u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+u|%+u|\n", 42, -42);
    y =        printf("the printf: |%+u|%+u|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%4u|%%4u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%4u|%4u|\n", 42, -42);
    y =        printf("the printf: |%4u|%4u|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+4u|%%+4u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+4u|%+4u|\n", 42, -42);
    y =        printf("the printf: |%+4u|%+4u|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%.4u|%%.4u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%.4u|%.4u|\n", 42, -42);
    y =        printf("the printf: |%.4u|%.4u|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+.4u|%%+.4u|\033[0m arg: \033[36m 4242, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+.4u|%+.4u|\n", 4242, -42);
    y =        printf("the printf: |%+.4u|%+.4u|\n", 4242, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%2.4u|%%2.4u|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	x =     ft_printf("my  printf: |%2.4u|%2.4u|\n", 21, -21);
    y =        printf("the printf: |%2.4u|%2.4u|\n", 21, -21);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+2.4u|%%+2.4u|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	x =     ft_printf("my  printf: |%+2.4u|%+2.4u|\n", 21, -21);
    y =        printf("the printf: |%+2.4u|%+2.4u|\n", 21, -21);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%09.2ulul|%%09.2ulul|%%09.2ulul|\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
	x =     ft_printf("my  printf: |%09.2ulul|%09.2ulul|%09.2ulul|\n", 1, 150, -15);
    y =        printf("the printf: |%09.2ulul|%09.2ulul|%09.2ulul|\n", 1, 150, -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%-09.3ulul|%%-09.3u|\033[0m arg: \033[36m -15, 1512\033[0m \n");
	x =     ft_printf("my  printf: |%-09.4ulul|%-09.3u|\n", -15, 1512);
    y =        printf("the printf: |%-09.4ulul|%-9.3u|\n", -15, 1512);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%4.2u|%%-4.2u|\033[0m arg: \033[36m 32, -32\033[0m \n");
	x =     ft_printf("my  printf: |%4.2u|%-4.2u|\n", 32, -32);
    y =        printf("the printf: |%4.2u|%-4.2u|\n", 32, -32);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');
	
	printf("===============  \033[33mTEST %d | Flag - : pusitive and neg,  w < p\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%-4.9u |%%4.9u |\033[0m arg: \033[36m -15, -15, 15124\033[0m \n");
	x =     ft_printf("my  printf: |%-4.9u |%4.9u |%4.9u |\n", -15, -15, 15124);
    y =        printf("the printf: |%-4.9u |%4.9u |%4.9u |\n", -15, -15, 15124);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, nu specifier\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%u|%%#u|%%#u|%%#u|\033[0m arg: \033[36m 42, 142, 542, -42\033[0m \n");
	x =     ft_printf("my  printf: |%u|%#u|%#u|%#u|\n", 42, 142, 542, -42);
    y =        printf("the printf: |%u|%#u|%#u|%#u|\n", 42, 142, 542, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, withd unly, precisiun unly\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#u|%%#5u|%%#.5u|%%#u|%%#5u|%%#.5u|\033[0m arg: \033[36m 42, 42, 42, -42, -42, -42\033[0m \n");
	x =     ft_printf("my  printf: %#u|%#5u|%#.5u|%#.5d|%#u|%#5u|%#.5u|\n", 42, 42, 42, 42, -42, -42, -42);
    y =        printf("the printf: %#u|%#5u|%#.5u|%#.5d|%#u|%#5u|%#.5u|\n", 42, 42, 42, 42, -42, -42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, withd unly, precisiun unly, equal len\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#5u|%%#.5u|%%#5u|%%#.5u|\033[0m arg: \033[36m 42121, 42121, -4212, -4212\033[0m \n");
	x =     ft_printf("my  printf: %#5u|%#.5u|%#5u|%#.5u|\n", 42121, 42121, -4212, -4212);
    y =        printf("the printf: %#5u|%#.5u|%#5u|%#.5u|\n", 42121, 42121, -4212, -4212);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, w > p \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#6.3u|%%#6.3u|%%#6.3u|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%#6.3u|%#6.3u|%#6.3u|\n", 42, 424, -42);
    y =        printf("the printf: |%#6.3u|%#6.3u|%#6.3u|\n", 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, w < p\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#3.6u|%%#3.6u|%%#3.6u|\033[0m arg: \033[36m 42, 424, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%#3.6u|%#3.6u|%#3.6u|\n", 42, 424, -42);
    y =        printf("the printf: |%#3.6u|%#3.6u|%#3.6u|\n", 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag # -: pus and neg, w < p, flag -\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#-3.6u|%%#-3.6u|%%#-3.6u||%%-#3.6u|%%-#3.6u|%%-#3.6u|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%#-3.6u|%#-3.6u|%#-3.6u||%-#3.6u|%-#3.6u|%-#3.6u|\n", 42, 424, -42, 42, 424, -42);
    y =        printf("the printf: |%#-3.6u|%#-3.6u|%#-3.6u||%-#3.6u|%-#3.6u|%-#3.6u|\n", 42, 424, -42, 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag + # -: pus and neg, w < p, flag -\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#+-3.6u|%%#+-3.6u|%%#+-3.6u||%%-#+3.6u|%%-#+3.6u|%%+-#3.6u|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%#+-3.6u|%#+-3.6u|%#+-3.6u||%-#+3.6u|%-+#3.6u|%+-#3.6u|\n", 42, 424, -42, 42, 424, -42);
    y =        printf("the printf: |%#+-3.6u|%#+-3.6u|%#+-3.6u||%-#+3.6u|%-+#3.6u|%+-#3.6u|\n", 42, 424, -42, 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag # -: pusitive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-#6.3u|%%-#6.3u|%%-#6.3u|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%-#6.3u|%-#6.3u|%-#6.3u|%-#6.3u|\n", 42, 424, 424536, -42);
    y =        printf("the printf: |%-#6.3u|%-#6.3u|%-#6.3u|%-#6.3u|\n", 42, 424, 424536, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag + # - : pusitive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+-#6.3u|%%+-#6.3u|%%+-#6.3u|%%+-#6.3u|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%+-#6.3u|%+-#6.3u|%+-#6.3u|%+-#6.3u|\n", 42, 424, 424536, -42);
    y =        printf("the printf: |%+-#6.3u|%+-#6.3u|%+-#6.3u|%+-#6.3u|\n", 42, 424, 424536, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	
	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag # - : pusitive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-#15.10u|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%-#15.10u|\n", 42, 42, 42, 42);
    y =        printf("the printf: |%-#15.10u|\n", 42, 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	
	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag # - : pusitive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-#5u|\033[0m arg: \033[36m 42, 42, \033[0m \n");
	x =     ft_printf("my  printf: |%-#5u|\n", 42, 42, 42, 42);
    y =        printf("the printf: |%-#5u|\n", 42, 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	// Flag ' '

	    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% u|%% u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% u|% u|\n", 42, -42);
    y =        printf("the printf: |% u|% u|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% +u|%% +u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% +u|% +u|\n", 42, -42);
    y =        printf("the printf: |% +u|% +u|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 4u|%% 4u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% 4u|% 4u|\n", 42, -42);
    y =        printf("the printf: |% 4u|% 4u|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% +4u|%% +4u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% +4u|% +4u|\n", 42, -42);
    y =        printf("the printf: |% +4u|% +4u|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% .4u|%% .4u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% .4u|% .4u|\n", 42, -42);
    y =        printf("the printf: |% .4u|% .4u|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% +.4u|%% +.4u|\033[0m arg: \033[36m 4242, -42\033[0m \n");
	x =     ft_printf("my  printf: |% +.4u|% +.4u|\n", 4242, -42);
    y =        printf("the printf: |% +.4u|% +.4u|\n", 4242, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 2.4u|%% 2.4u|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	x =     ft_printf("my  printf: |% 2.4u|% 2.4u|\n", 21, -21);
    y =        printf("the printf: |% 2.4u|% 2.4u|\n", 21, -21);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+ 2.4u|%%+ 2.4u|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	x =     ft_printf("my  printf: |%+ 2.4u|%+ 2.4u|\n", 21, -21);
    y =        printf("the printf: |%+ 2.4u|%+ 2.4u|\n", 21, -21);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 09.2ulul|%% 09.2ulul|%% 09.2ulul|\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
	x =     ft_printf("my  printf: |% 09.2ulul|% 09.2ulul|% 09.2ulul|\n", 1, 150, -15);
    y =        printf("the printf: |% 09.2ulul|% 09.2ulul|% 09.2ulul|\n", 1, 150, -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %% -09.3ulul|%% -09.3u|\033[0m arg: \033[36m -15, 1512\033[0m \n");
	x =     ft_printf("my  printf: |% -09.4ulul|% -09.3u|\n", -15, 1512);
    y =        printf("the printf: |% -09.4ulul|% -9.3u|\n", -15, 1512);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 4.2u|%% -4.2u|\033[0m arg: \033[36m 32, -32\033[0m \n");
	x =     ft_printf("my  printf: |% 4.2u|% -4.2u|\n", 32, -32);
    y =        printf("the printf: |% 4.2u|% -4.2u|\n", 32, -32);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');
	
	printf("===============  \033[33mTEST %d | Flag - : pusitive and neg,  w < p\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %% -4.9u |%% 4.9u |\033[0m arg: \033[36m -15, -15, 15124\033[0m \n");
	x =     ft_printf("my  printf: |% -4.9u |% 4.9u |% 4.9u |\n", -15, -15, 15124);
    y =        printf("the printf: |% -4.9u |% 4.9u |% 4.9u |\n", -15, -15, 15124);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, nu specifier\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% u|%%# u|%%# u|%%# u|\033[0m arg: \033[36m 42, 142, 542, -42\033[0m \n");
	x =     ft_printf("my  printf: |% u|%# u|%# u|%# u|\n", 42, 142, 542, -42);
    y =        printf("the printf: |% u|%# u|%# u|%# u|\n", 42, 142, 542, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, withd unly, precisiun unly\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%# u|%%#5 u|%%# .5u|%%# u|%%# 5u|%%# .5u|\033[0m arg: \033[36m 42, 42, 42, -42, -42, -42\033[0m \n");
	x =     ft_printf("my  printf: %# u|%# 5u|%# .5u|%# .5d|%# u|%# 5u|%# .5u|\n", 42, 42, 42, 42, -42, -42, -42);
    y =        printf("the printf: %# u|%# 5u|%# .5u|%# .5d|%# u|%# 5u|%# .5u|\n", 42, 42, 42, 42, -42, -42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, withd unly, precisiun unly, equal len\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%# 5u|%%# .5u|%%# 5u|%%# .5u|\033[0m arg: \033[36m 42121, 42121, -4212, -4212\033[0m \n");
	x =     ft_printf("my  printf: %# 5u|%# .5u|%# 5u|%# .5u|\n", 42121, 42121, -4212, -4212);
    y =        printf("the printf: %# 5u|%# .5u|%# 5u|%# .5u|\n", 42121, 42121, -4212, -4212);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, w > p \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%# 6.3u|%%# 6.3u|%%# 6.3u|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%# 6.3u|%# 6.3u|%# 6.3u|\n", 42, 424, -42);
    y =        printf("the printf: |%# 6.3u|%# 6.3u|%# 6.3u|\n", 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, w < p\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% #3.6u|%% #3.6u|%% #3.6u|\033[0m arg: \033[36m 42, 424, -42 \033[0m \n");
	x =     ft_printf("my  printf: |% #3.6u|% #3.6u|% #3.6u|\n", 42, 424, -42);
    y =        printf("the printf: |% #3.6u|% #3.6u|% #3.6u|\n", 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag # -: pus and neg, w < p, flag -\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%# -3.6u|%%#- 3.6u|%%#- 3.6u||%%- #3.6u|%%- #3.6u|%% -#3.6u|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	x =     ft_printf("my  printf: |% #-3.6u|% #-3.6u|% #-3.6u||% -#3.6u|% -#3.6u|% -#3.6u|\n", 42, 424, -42, 42, 424, -42);
    y =        printf("the printf: |% #-3.6u|% #-3.6u|% #-3.6u||% -#3.6u|% -#3.6u|% -#3.6u|\n", 42, 424, -42, 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag + # -: pus and neg, w < p, flag -\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%# +-3.6u|%%# +-3.6u|%%# +-3.6u||%% -#+3.6u|%% -#+3.6u|%% +-#3.6u|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	x =     ft_printf("my  printf: |% #+-3.6u|% #+-3.6u|% #+-3.6u||% -#+3.6u|% -+#3.6u|% +-#3.6u|\n", 42, 424, -42, 42, 424, -42);
    y =        printf("the printf: |% #+-3.6u|% #+-3.6u|% #+-3.6u||% -#+3.6u|% -+#3.6u|% +-#3.6u|\n", 42, 424, -42, 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag # -: pusitive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% -#6.3u|%% -#6.3u|%% -#6.3u|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	x =     ft_printf("my  printf: |% -#6.3u|% -#6.3u|% -#6.3u|% -#6.3u|\n", 42, 424, 424536, -42);
    y =        printf("the printf: |% -#6.3u|% -#6.3u|% -#6.3u|% -#6.3u|\n", 42, 424, 424536, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag + # - : pusitive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% +-#6.3u|%% +-#6.3u|%% +-#6.3u|%% +-#6.3u|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%+ -#6.3u|%+- #6.3u|% +-#6.3u|% +-#6.3u|\n", 42, 424, 424536, -42);
    y =        printf("the printf: |%+ -#6.3u|%+- #6.3u|% +-#6.3u|% +-#6.3u|\n", 42, 424, 424536, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	
	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag # - : pusitive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-# 15.10u|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	x =     ft_printf("my  printf: |% -#15.10u|\n", 42, 42, 42, 42);
    y =        printf("the printf: |% -#15.10u|\n", 42, 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	
	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag # - : pusitive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% -#5u|\033[0m arg: \033[36m 42, 42, \033[0m \n");
	x =     ft_printf("my  printf: |% -#5u|\n", 42, 42, 42, 42);
    y =        printf("the printf: |% -#5u|\n", 42, 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	return (0);

}
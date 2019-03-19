/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlib.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:28:53 by jbrisset          #+#   #+#              */
/*   Updated: 2019/02/25 14:29:00 by jbrisset         ###  ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// Warnings habituels :
// flag '+' results in undefined behavior with 'o' conversion specifier
// flag '0' is ignored when flag '-' is present
// flag ' ' results in undefined behavior with 'o' conversion specifier
// flag ' ' is ignored when flag '+' is present

#include "ft_printf.h"

int main(void)
{
	int		i;
	int		x;
	int		y;

	i = 1;


    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%o|%%o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%o|%o|\n", 42, -42);
    y =        printf("the printf: |%o|%o|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+o|%%+o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+o|%+o|\n", 42, -42);
    y =        printf("the printf: |%+o|%+o|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%4o|%%4o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%4o|%4o|\n", 42, -42);
    y =        printf("the printf: |%4o|%4o|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+4o|%%+4o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+4o|%+4o|\n", 42, -42);
    y =        printf("the printf: |%+4o|%+4o|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%.4o|%%.4o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%.4o|%.4o|\n", 42, -42);
    y =        printf("the printf: |%.4o|%.4o|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+.4o|%%+.4o|\033[0m arg: \033[36m 4242, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+.4o|%+.4o|\n", 4242, -42);
    y =        printf("the printf: |%+.4o|%+.4o|\n", 4242, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%2.4o|%%2.4o|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	x =     ft_printf("my  printf: |%2.4o|%2.4o|\n", 21, -21);
    y =        printf("the printf: |%2.4o|%2.4o|\n", 21, -21);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+2.4o|%%+2.4o|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	x =     ft_printf("my  printf: |%+2.4o|%+2.4o|\n", 21, -21);
    y =        printf("the printf: |%+2.4o|%+2.4o|\n", 21, -21);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%09.2olol|%%09.2olol|%%09.2olol|\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
	x =     ft_printf("my  printf: |%09.2olol|%09.2olol|%09.2olol|\n", 1, 150, -15);
    y =        printf("the printf: |%09.2olol|%09.2olol|%09.2olol|\n", 1, 150, -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%-09.3olol|%%-09.3o|\033[0m arg: \033[36m -15, 1512\033[0m \n");
	x =     ft_printf("my  printf: |%-09.4olol|%-09.3o|\n", -15, 1512);
    y =        printf("the printf: |%-09.4olol|%-9.3o|\n", -15, 1512);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%4.2o|%%-4.2o|\033[0m arg: \033[36m 32, -32\033[0m \n");
	x =     ft_printf("my  printf: |%4.2o|%-4.2o|\n", 32, -32);
    y =        printf("the printf: |%4.2o|%-4.2o|\n", 32, -32);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');
	
	printf("===============  \033[33mTEST %d | Flag - : positive and neg,  w < p\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%-4.9o |%%4.9o |\033[0m arg: \033[36m -15, -15, 15124\033[0m \n");
	x =     ft_printf("my  printf: |%-4.9o |%4.9o |%4.9o |\n", -15, -15, 15124);
    y =        printf("the printf: |%-4.9o |%4.9o |%4.9o |\n", -15, -15, 15124);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: positive and negative, no specifier\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%o|%%#o|%%#o|%%#o|\033[0m arg: \033[36m 42, 142, 542, -42\033[0m \n");
	x =     ft_printf("my  printf: |%o|%#o|%#o|%#o|\n", 42, 142, 542, -42);
    y =        printf("the printf: |%o|%#o|%#o|%#o|\n", 42, 142, 542, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: positive and negative, withd only, precision only\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#o|%%#5o|%%#.5o|%%#o|%%#5o|%%#.5o|\033[0m arg: \033[36m 42, 42, 42, -42, -42, -42\033[0m \n");
	x =     ft_printf("my  printf: %#o|%#5o|%#.5o|%#.5o|%#o|%#5o|%#.5o|\n", 42, 42, 42, 42, -42, -42, -42);
    y =        printf("the printf: %#o|%#5o|%#.5o|%#.5o|%#o|%#5o|%#.5o|\n", 42, 42, 42, 42, -42, -42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: positive and negative, withd only, precision only, equal len\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#5o|%%#.5o|%%#5o|%%#.5o|\033[0m arg: \033[36m 42121, 42121, -4212, -4212\033[0m \n");
	x =     ft_printf("my  printf: %#5o|%#.5o|%#5o|%#.5o|\n", 42121, 42121, -4212, -4212);
    y =        printf("the printf: %#5o|%#.5o|%#5o|%#.5o|\n", 42121, 42121, -4212, -4212);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: positive and negative, w > p \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#6.3o|%%#6.3o|%%#6.3o|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%#6.3o|%#6.3o|%#6.3o|\n", 42, 424, -42);
    y =        printf("the printf: |%#6.3o|%#6.3o|%#6.3o|\n", 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: positive and negative, w < p\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#3.6o|%%#3.6o|%%#3.6o|\033[0m arg: \033[36m 42, 424, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%#3.6o|%#3.6o|%#3.6o|\n", 42, 424, -42);
    y =        printf("the printf: |%#3.6o|%#3.6o|%#3.6o|\n", 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #-: pos and neg, w < p, flag -\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#-3.6o|%%#-3.6o|%%#-3.6o||%%-#3.6o|%%-#3.6o|%%-#3.6o|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%#-3.6o|%#-3.6o|%#-3.6o||%-#3.6o|%-#3.6o|%-#3.6o|\n", 42, 424, -42, 42, 424, -42);
    y =        printf("the printf: |%#-3.6o|%#-3.6o|%#-3.6o||%-#3.6o|%-#3.6o|%-#3.6o|\n", 42, 424, -42, 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag + #-: pos and neg, w < p, flag -\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#+-3.6o|%%#+-3.6o|%%#+-3.6o||%%-#+3.6o|%%-#+3.6o|%%+-#3.6o|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%#+-3.6o|%#+-3.6o|%#+-3.6o||%-#+3.6o|%-+#3.6o|%+-#3.6o|\n", 42, 424, -42, 42, 424, -42);
    y =        printf("the printf: |%#+-3.6o|%#+-3.6o|%#+-3.6o||%-#+3.6o|%-+#3.6o|%+-#3.6o|\n", 42, 424, -42, 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #-: positive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-#6.3o|%%-#6.3o|%%-#6.3o|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%-#6.3o|%-#6.3o|%-#6.3o|%-#6.3o|\n", 42, 424, 424536, -42);
    y =        printf("the printf: |%-#6.3o|%-#6.3o|%-#6.3o|%-#6.3o|\n", 42, 424, 424536, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag + #- : positive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+-#6.3o|%%+-#6.3o|%%+-#6.3o|%%+-#6.3o|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%+-#6.3o|%+-#6.3o|%+-#6.3o|%+-#6.3o|\n", 42, 424, 424536, -42);
    y =        printf("the printf: |%+-#6.3o|%+-#6.3o|%+-#6.3o|%+-#6.3o|\n", 42, 424, 424536, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	
	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #- : positive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-#15.10o|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%-#15.10o|\n", 42, 42, 42, 42);
    y =        printf("the printf: |%-#15.10o|\n", 42, 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	
	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #- : positive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-#5o|\033[0m arg: \033[36m 42, 42, \033[0m \n");
	x =     ft_printf("my  printf: |%-#5o|\n", 42, 42, 42, 42);
    y =        printf("the printf: |%-#5o|\n", 42, 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");


	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%o|%%o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%o|%o|\n", 42, -42);
    y =        printf("the printf: |%o|%o|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+o|%%+o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+o|%+o|\n", 42, -42);
    y =        printf("the printf: |%+o|%+o|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%4o|%%4o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%4o|%4o|\n", 42, -42);
    y =        printf("the printf: |%4o|%4o|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+4o|%%+4o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+4o|%+4o|\n", 42, -42);
    y =        printf("the printf: |%+4o|%+4o|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%.4o|%%.4o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%.4o|%.4o|\n", 42, -42);
    y =        printf("the printf: |%.4o|%.4o|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+.4o|%%+.4o|\033[0m arg: \033[36m 4242, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+.4o|%+.4o|\n", 4242, -42);
    y =        printf("the printf: |%+.4o|%+.4o|\n", 4242, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%2.4o|%%2.4o|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	x =     ft_printf("my  printf: |%2.4o|%2.4o|\n", 21, -21);
    y =        printf("the printf: |%2.4o|%2.4o|\n", 21, -21);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+ 2.4o|%%+ 2.4o|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	x =     ft_printf("my  printf: |%+ 2.4o|%+ 2.4o|\n", 21, -21);
    y =        printf("the printf: |%+ 2.4o|%+ 2.4o|\n", 21, -21);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%09.2olol|%%09.2olol|%%09.2olol|\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
	x =     ft_printf("my  printf: |%09.2olol|%09.2olol|%09.2olol|\n", 1, 150, -15);
    y =        printf("the printf: |%09.2olol|%09.2olol|%09.2olol|\n", 1, 150, -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%-09.3olol|%%-09.3o|\033[0m arg: \033[36m -15, 1512\033[0m \n");
	x =     ft_printf("my  printf: |%-09.4olol|%-09.3o|\n", -15, 1512);
    y =        printf("the printf: |%-09.4olol|%-9.3o|\n", -15, 1512);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%4.2o|%%-4.2o|\033[0m arg: \033[36m 32, -32\033[0m \n");
	x =     ft_printf("my  printf: |%4.2o|%-4.2o|\n", 32, -32);
    y =        printf("the printf: |%4.2o|%-4.2o|\n", 32, -32);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');
	
	printf("===============  \033[33mTEST %d | Flag - : positive and neg,  w < p\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%-4.9o |%%4.9o |\033[0m arg: \033[36m -15, -15, 15124\033[0m \n");
	x =     ft_printf("my  printf: |%-4.9o |%4.9o |%4.9o |\n", -15, -15, 15124);
    y =        printf("the printf: |%-4.9o |%4.9o |%4.9o |\n", -15, -15, 15124);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: positive and negative, no specifier\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%o|%%#o|%%#o|%%#o|\033[0m arg: \033[36m 42, 142, 542, -42\033[0m \n");
	x =     ft_printf("my  printf: |%o|%#o|%#o|%#o|\n", 42, 142, 542, -42);
    y =        printf("the printf: |%o|%#o|%#o|%#o|\n", 42, 142, 542, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: positive and negative, withd only, precision only\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#o|%%#5 o|%%#.5o|%%#o|%%#5o|%%#.5o|\033[0m arg: \033[36m 42, 42, 42, -42, -42, -42\033[0m \n");
	x =     ft_printf("my  printf: %#o|%#5o|%#.5o|%#.5d|%#o|%#5o|%#.5o|\n", 42, 42, 42, 42, -42, -42, -42);
    y =        printf("the printf: %#o|%#5o|%#.5o|%#.5d|%#o|%#5o|%#.5o|\n", 42, 42, 42, 42, -42, -42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: positive and negative, withd only, precision only, equal len\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#5o|%%#.5o|%%#5o|%%#.5o|\033[0m arg: \033[36m 42121, 42121, -4212, -4212\033[0m \n");
	x =     ft_printf("my  printf: |%#o|%#.5o|%#5o|%#.5o|\n", 42121, 42121, -4212, -4212);
    y =        printf("the printf: |%#o|%#.5o|%#5o|%#.5o|\n", 42121, 42121, -4212, -4212);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: positive and negative, w > p \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#6.3o|%%#6.3o|%%#6.3o|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%#6.3o|%#6.3o|%#6.3o|\n", 42, 424, -42);
    y =        printf("the printf: |%#6.3o|%#6.3o|%#6.3o|\n", 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: positive and negative, w < p\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#3.6o|%%#3.6o|%%#3.6o|\033[0m arg: \033[36m 42, 424, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%#3.6o|%#3.6o|%#3.6o|\n", 42, 424, -42);
    y =        printf("the printf: |%#3.6o|%#3.6o|%#3.6o|\n", 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #-: pos and neg, w < p, flag -\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#-3.6o|%%#- 3.6o|%%#- 3.6o||%%- #3.6o|%%- #3.6o|%%-#3.6o|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%#-3.6o|%#-3.6o|%#-3.6o||%-#3.6o|%-#3.6o|%-#3.6o|\n", 42, 424, -42, 42, 424, -42);
    y =        printf("the printf: |%#-3.6o|%#-3.6o|%#-3.6o||%-#3.6o|%-#3.6o|%-#3.6o|\n", 42, 424, -42, 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag + #-: pos and neg, w < p, flag -\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#+-3.6o|%%#+-3.6o|%%#+-3.6o||%%-#+3.6o|%%-#+3.6o|%%+-#3.6o|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%#+-3.6o|%#+-3.6o|%#+-3.6o||%-#+3.6o|%-+#3.6o|%+-#3.6o|\n", 42, 424, -42, 42, 424, -42);
    y =        printf("the printf: |%#+-3.6o|%#+-3.6o|%#+-3.6o||%-#+3.6o|%-+#3.6o|%+-#3.6o|\n", 42, 424, -42, 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #-: positive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-#6.3o|%%-#6.3o|%%-#6.3o|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%-#6.3o|%-#6.3o|%-#6.3o|%-#6.3o|\n", 42, 424, 424536, -42);
    y =        printf("the printf: |%-#6.3o|%-#6.3o|%-#6.3o|%-#6.3o|\n", 42, 424, 424536, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag + #- : positive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+-#6.3o|%%+-#6.3o|%%+-#6.3o|%%+-#6.3o|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%+ -#6.3o|%+- #6.3o|%+-#6.3o|%+-#6.3o|\n", 42, 424, 424536, -42);
    y =        printf("the printf: |%+ -#6.3o|%+- #6.3o|%+-#6.3o|%+-#6.3o|\n", 42, 424, 424536, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	
	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #- : positive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-#15.10o|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%-#15.10o|\n", 42, 42, 42, 42);
    y =        printf("the printf: |%-#15.10o|\n", 42, 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	
	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #- : positive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-#5o|\033[0m arg: \033[36m 42, 42, \033[0m \n");
	x =     ft_printf("my  printf: |%-#5o|\n", 42, 42, 42, 42);
    y =        printf("the printf: |%-#5o|\n", 42, 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	printf("===============  \033[33mTEST %d | Flag #- : positive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
    printf("test: \033[36m t%%04.2o|%%#2oet %%#-8.3o titi %%%%%%04.2o|\033[0m arg: \033[36m 42, 42, \033[0m \n");
	x =     ft_printf("%%%t%04.2o|%%%#2oet %#-8.3o titi %%%04.4o|\n", 0, 0, 0, 0);
    y =        printf("%%%t%04.2o|%%%#2oet %#-8.3o titi %%%04.4o|\n", 0, 0, 0, 0);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	return (0);

}
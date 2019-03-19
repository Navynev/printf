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

// Warnings habituels :
// flag '0' is ignored when flag '-' is present
// flag ' ' results in undefined behavior with 'x' conversion specifier

int main(void)
{
	int		i;
	int		x;
	int		y;

	i = 1;

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%x|%%x|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%x|%x|\n", 42, -42);
    y =        printf("the printf: |%x|%x|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%4x|%%4x|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%4x|%4x|\n", 42, -42);
    y =        printf("the printf: |%4x|%4x|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%.4x|%%.4x|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%.4x|%.4x|\n", 42, -42);
    y =        printf("the printf: |%.4x|%.4x|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%2.4x|%%2.4x|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	x =     ft_printf("my  printf: |%2.4x|%2.4x|\n", 21, -21);
    y =        printf("the printf: |%2.4x|%2.4x|\n", 21, -21);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%09.2x|%%09.2o|%%09.2x\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
	x =     ft_printf("my  printf: |%09.2x|%09.2o|%09.2x|\n", 1, 150, -15);
    y =        printf("the printf: |%09.2x|%09.2o|%09.2x|\n", 1, 150, -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%-09.3x|%%-09.3x|\033[0m arg: \033[36m -15, 1512\033[0m \n");
	x =     ft_printf("my  printf: |%-09.4x|%-09.3x|\n", -15, 1512);
    y =        printf("the printf: |%-09.4x|%-9.3x|\n", -15, 1512);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%4.2x|%%-4.2x|\033[0m arg: \033[36m 32, -32\033[0m \n");
	x =     ft_printf("my  printf: |%4.2x|%-4.2x|\n", 32, -32);
    y =        printf("the printf: |%4.2x|%-4.2x|\n", 32, -32);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');
	
	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%-4.9x |%%4.9x |\033[0m arg: \033[36m -15, -15, 15124\033[0m \n");
	x =     ft_printf("my  printf: |%-4.9x |%4.9x |%4.9x |\n", -15, -15, 15124);
    y =        printf("the printf: |%-4.9x |%4.9x |%4.9x |\n", -15, -15, 15124);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%x|%%#x|%%#x|%%#x|\033[0m arg: \033[36m 42, 142, 542, -42\033[0m \n");
	x =     ft_printf("my  printf: |%x|%#x|%#x|%#x|\n", 42, 142, 542, -42);
    y =        printf("the printf: |%x|%#x|%#x|%#x|\n", 42, 142, 542, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%x|%%#5x|%%-#5x|%%#.4x|\033[0m arg: \033[36m 42, 42, 42, 42\033[0m \n");
	x =     ft_printf("my  printf: |%x|%#5x|%-#5x|%#.4x|\n", 42, 42, 42, 42);
    y =        printf("the printf: |%x|%#5x|%-#5x|%#.4x|\n", 42, 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	printf("test: \033[36m |%%-#0.5x|%%-#10.4x|%%-#15.10x|\033[0m arg: \033[36m -15, 42\033[0m \n");
	x =     ft_printf("my  printf: |%-#0.5X|%-#10.4x|%-#15.10x|\n", 42, 42, 42);
	y =        printf("the printf: |%-#0.5X|%-#10.4x|%-#15.10x|\n", 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%x|%%x|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%#x|%#x|\n", 42, -42);
    y =        printf("the printf: |%#x|%#x|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#-4x|%%#-4x|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%#-4x|%#-4x|\n", 42, -42);
    y =        printf("the printf: |%#-4x|%#-4x|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#.4x|%%#.4x|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%#.4x|%#.4x|\n", 42, -42);
    y =        printf("the printf: |%#.4x|%#.4x|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#2.4x|%%2#.4x|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	x =     ft_printf("my  printf: |%#2.4x|%#2.4x|\n", 21, -21);
    y =        printf("the printf: |%#2.4x|%#2.4x|\n", 21, -21);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#-09.2x|%%#09.2x|%%#-09.2x\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
	x =     ft_printf("my  printf: |%#-09.2x|%#09.2x|%#-09.2x|\n", 1, 150, -15);
    y =        printf("the printf: |%#-09.2x|%#09.2x|%#-09.2x|\n", 1, 150, -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');
	
	//Flag ' '

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% x|%% x|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% x|% x|\n", 42, -42);
    y =        printf("the printf: |% x|% x|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 4x|%% 4x|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% 4x|% 4x|\n", 42, -42);
    y =        printf("the printf: |% 4x|% 4x|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% .4x|%% .4x|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% .4x|% .4x|\n", 42, -42);
    y =        printf("the printf: |% .4x|% .4x|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 2.4x|%% 2.4x|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	x =     ft_printf("my  printf: |% 2.4x|% 2.4x|\n", 21, -21);
    y =        printf("the printf: |% 2.4x|% 2.4x|\n", 21, -21);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 09.2x|%% 09.2o|%% 09.2x\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
	x =     ft_printf("my  printf: |% 09.2x|% 09.2o|% 09.2x|\n", 1, 150, -15);
    y =        printf("the printf: |% 09.2x|% 09.2o|% 09.2x|\n", 1, 150, -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %% -09.3x|%% -09.3x|\033[0m arg: \033[36m -15, 1512\033[0m \n");
	x =     ft_printf("my  printf: |% -09.4x|% -09.3x|\n", -15, 1512);
    y =        printf("the printf: |% -09.4x|% -9.3x|\n", -15, 1512);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 4.2x|%% -4.2x|\033[0m arg: \033[36m 32, -32\033[0m \n");
	x =     ft_printf("my  printf: |% 4.2x|% -4.2x|\n", 32, -32);
    y =        printf("the printf: |% 4.2x|% -4.2x|\n", 32, -32);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');
	
	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %% -4.9x |%% 4.9x |\033[0m arg: \033[36m -15, -15, 15124\033[0m \n");
	x =     ft_printf("my  printf: |% -4.9x |% 4.9x |% 4.9x |\n", -15, -15, 15124);
    y =        printf("the printf: |% -4.9x |% 4.9x |% 4.9x |\n", -15, -15, 15124);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% x|%% #x|%% #x|%% #x|\033[0m arg: \033[36m 42, 142, 542, -42\033[0m \n");
	x =     ft_printf("my  printf: |% x|% #x|% #x|% #x|\n", 42, 142, 542, -42);
    y =        printf("the printf: |% x|% #x|% #x|% #x|\n", 42, 142, 542, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% x|%%# 5x|%% -#5x|%% #.4x|\033[0m arg: \033[36m 42, 42, 42, 42\033[0m \n");
	x =     ft_printf("my  printf: |% x|%# 5x|% -#5x|% #.4x|\n", 42, 42, 42, 42);
    y =        printf("the printf: |% x|%# 5x|% -#5x|% #.4x|\n", 42, 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	printf("test: \033[36m |%% -#0.5x|%% -#10.4x|%% -#15.10x|\033[0m arg: \033[36m -15, 42\033[0m \n");
	x =     ft_printf("my  printf: |% -#0.5X|% -#10.4x|% -#15.10x|\n", 42, 42, 42);
	y =        printf("the printf: |% -#0.5X|% -#10.4x|% -#15.10x|\n", 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% x|%% x|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% #x|% #x|\n", 42, -42);
    y =        printf("the printf: |% #x|% #x|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% #-4x|%% #-4x|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% #-4x|% #-4x|\n", 42, -42);
    y =        printf("the printf: |% #-4x|% #-4x|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% #.4x|%% #.4x|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% #.4x|% #.4x|\n", 42, -42);
    y =        printf("the printf: |% #.4x|% #.4x|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% #2.4x|%% #2.4x|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	x =     ft_printf("my  printf: |% #2.4x|% #2.4x|\n", 21, -21);
    y =        printf("the printf: |% #2.4x|% #2.4x|\n", 21, -21);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% #-09.2x|%% #09.2x|%% #-09.2x\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
	x =     ft_printf("my  printf: |% #-09.2x|% #09.2x|% #-09.2x|\n", 1, 150, -15);
    y =        printf("the printf: |% #-09.2x|% #09.2x|% #-09.2x|\n", 1, 150, -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	printf("test: \033[36m |t %%#7.5X %%06.2X et %%lX!|\033[0m arg: \033[36m 0xab, 0x876, 0xff11ff11ff1\033[0m \n");
	y =ft_printf("my  printf: |t %#7.5X %06.2X et %lX!|\n", 0xab, 0x876, 0xff11ff11ff1);
	x =   printf("the printf: |t %#7.5X %06.2X et %lX!|\n", 0xab, 0x876, 0xff11ff11ff1);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	printf("test: \033[36m |t %%07.5X %%006.2X et %%000lX!|\033[0m arg: \033[36m 0xab, 0x876, 0xff11ff11ff1\033[0m \n");
	y =ft_printf("my  printf: |t %07.5X %006.2X et %000lX!|\n", 0xab, 0x876, 0xff11ff11ff1);
	x =   printf("the printf: |t %07.5X %006.2X et %000lX!|\n", 0xab, 0x876, 0xff11ff11ff1);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	printf("test: \033[36m |%%0#10.0x %0#x|%%0#10.2x||%%0#10.15x||%%0#10.10x|\033[0m arg: \033[36m 12345, 0, 12345, 12345, 12345 \033[0m \n");
	y =ft_printf("my  printf: |%0#10.0x %0#x|%0#10.2x||%0#10.15x||%0#10.5x|\n", 12345, 0, 12345, 12345, 12345);
	x =   printf("the printf: |%0#10.0x %0#x|%0#10.2x||%0#10.15x||%0#10.5x|\n", 12345, 0, 12345, 12345, 12345);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");


    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	printf("test: \033[36m |t %%-#7.5X %%06.2X et %%lX!|\033[0m arg: \033[36m 0xab, 0x876, 0xff11ff11ff1\033[0m \n");
	y =ft_printf("my  printf: |t %-#7.5X %06.7X et %#lX!|\n", 0xab, 0x876, 0xff11ff11ff1);
	x =   printf("the printf: |t %-#7.5X %06.7X et %#lX!|\n", 0xab, 0x876, 0xff11ff11ff1);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	printf("test: \033[36m |%%#20lx|\033[0m arg: \033[36m -4242424242424242\033[0m \n");
	y =ft_printf("my  printf: |%#20lx|\n", -4242424242424242);
	x =   printf("the printf: |%#20lx|\n", -4242424242424242);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[33mTEST %d | Padding with 0 | Flag 0 \033[0m  ===============\n\n", i++);
	printf("test: \033[36m |%%#08x||%%-#08x||%% #08x||%% #08.2x||%% #08.4x||%% #08.9x|\033[0m arg: \033[36m 42\033[0m \n");
	y =ft_printf("my  printf: |%#08x||%-#08x||% #08x||% #08.2x||% #08.4x||% #08.9x|\n", 42, 42, 42, 42, 42, 42);
	x =   printf("the printf: |%#08x||%-#08x||% #08x||% #08.2x||% #08.4x||% #08.9x|\n", 42, 42, 42, 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	
	printf("++++++++++++++++++++ TESTS CHIANTS AVEC DES 0 ++++++++++++++++\n\n");

	printf("===============  \033[31mTEST %d | hexa with res 0  \033[0m  ===============\n\n", i++);
	y =ft_printf("|%-5.x|%-5.15x|%-5x|%5.15x|%15.5x|%-15.5x|%0.x|%0.0x|%.0x|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 );
	x = printf("|%-5.x|%-5.15x|%-5x|%5.15x|%15.5x|%-15.5x|%0.x|%0.0x|%.0x|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d | hexa with res 0 | Flag ' ' \033[0m  ===============\n\n", i++);
	y =ft_printf("hello |%.x|%x|%5x|%5.x|%-5.x|%5.3x|%3.5x|%-5.3x|%-3.5x| this is a test  |%.x|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	x = printf("hello |%.x|%x|%5x|%5.x|%-5.x|%5.3x|%3.5x|%-5.3x|%-3.5x| this is a test  |%.x|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");


	printf("===============  \033[31mTEST %d | hexa with res 0 | Flag ' ' \033[0m  ===============\n\n", i++);
	y =ft_printf("|% -5.X|% -5.15X|% -5X|% 5.15X|% 15.5X|% -15.5X|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	x = printf("|% -5.X|% -5.15X|% -5X|% 5.15X|% 15.5X|% -15.5X|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d | hexa with res 0 | Flag ' ' \033[0m  ===============\n\n", i++);
	y =ft_printf("hello |%.X|% X|% 5X|% 5.X|% -5.X|% 5.3X|% 3.5X|% -5.3X|% -3.5X| this is a test  |% .X|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 15);
	x = printf("hello |%.X|% X|% 5X|% 5.X|% -5.X|% 5.3X|% 3.5X|% -5.3X|% -3.5X| this is a test  |% .X|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 15);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	return (0);
}
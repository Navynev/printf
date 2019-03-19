/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlib_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelhpmm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 09:33:30 by ndelhpmm          #+#    #+#             */
/*   Updated: 2019/03/08 09:33:34 by ndelhpmm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	int		i;
	int		x;
	int		y;

	i = 1;

	int a = 42;
	int	*p = &a;


	printf("===============  \033[33mTEST %d | Ppinteur addr \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% p|%%.20p|%%20p|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% p|%.20p|%20p|%30.20p|%20.30p|\n", p, p, p, p, p);
    y =        printf("the printf: |% p|%.20p|%20p|%30.20p|%20.30p|\n", p, p, p, p, p);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	char	str[6] = "Salut";

	printf("===============  \033[33mTEST %d | String \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%p|%%.20p|%%20p|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%p|%.20p|%20p|%30.20p|%20.30p|\n", str, str, str, str, str);
    y =        printf("the printf: |%p|%.20p|%20p|%30.20p|%20.30p|\n", str, str, str, str, str);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | - and + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%p|%%p|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%p|%.20p|\n", p, p);
    y =        printf("the printf: |%p|%.20p|\n", p, p);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	//

    printf("===============  \033[33mTEST %d | - and + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%p|%%p|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%p|%p|\n", 18446744073709551615, -42);
    y =        printf("the printf: |%p|%p|\n", 18446744073709551615, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+p|%%+p|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+p|%+p|\n", 42, -42);
    y =        printf("the printf: |%+p|%+p|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Witdh \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%5p|%%10p|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%5p|%10p|\n", 42, -42);
    y =        printf("the printf: |%5p|%10p|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag + and Width \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+4p|%%+4p|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+4p|%+4p|\n", 42, -42);
    y =        printf("the printf: |%+4p|%+4p|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Precisipn \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%.50p|%%.8p|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%.50p|%.8p|%.11p|\n", 42, -42, -42);
    y =        printf("the printf: |%.50p|%.8p|%.11p|\n", 42, -42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag + and Precisipn \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+.10p|%%+.4p|\033[0m arg: \033[36m 4242, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+.10p|%+.4p|\n", 42, -42);
    y =        printf("the printf: |%+.10p|%+.4p|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d | Width and Precisipn \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%3.10p|%%3.10p|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	x =     ft_printf("my  printf: |%3.10p|%3.10p|\n", 21, -21);
    y =        printf("the printf: |%3.10p|%3.10p|\n", 21, -21);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Width and Precisipn \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%p|%%7.3p|%%14.10p|\033[0m arg: \033[36m 21, 21, 21 \033[0m \n");
	x =     ft_printf("my  printf: |%p|%7.3p|%14.10p|\n", 21, 21, 21);
    y =        printf("the printf: |%p|%7.3p|%14.10p|\n", 21, 21, 21);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


    printf("===============  \033[33mTEST %d | Width > Precisipn > l\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%p|%%9.2p|%%9.2p|%%9.2p|\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
	x =     ft_printf("my  printf: |%p||%9.2p|%9.2p|\n", 1, 150, -15);
    y =        printf("the printf: |%p||%9.2p|%9.2p|\n", 1, 150, -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

	  printf("===============  \033[33mTEST %d | Width > Precisipn > l\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%p|%%9.2p|%%9.2p|%%9.2p|\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
	x =     ft_printf("my  printf: |%9.2p|\n", 1, 1, 150, -15);
    y =        printf("the printf: |%9.2p|\n", 1, 1, 150, -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%-09.3plpl|%%-09.3p|\033[0m arg: \033[36m -15, 1512\033[0m \n");
	x =     ft_printf("my  printf: |%-010.4plpl|%-09.3p|\n", -15, 2);
    y =        printf("the printf: |%-010.4plpl|%-09.3p|\n", -15, 2);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%4.2p|%%-4.2p|\033[0m arg: \033[36m 32, -32\033[0m \n");
	x =     ft_printf("my  printf: |%4.2p|%-4.2p|\n", 32, -32);
    y =        printf("the printf: |%4.2p|%-4.2p|\n", 32, -32);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');
	
	printf("===============  \033[33mTEST %d | Flag - : ppsitive and neg,  w < p\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%-4.9p |%%4.9p |\033[0m arg: \033[36m -15, -15, 15124\033[0m \n");
	x =     ft_printf("my  printf: |%-16.26p |%4.9p |%4.9p |\n", -15, -15, 15124);
    y =        printf("the printf: |%-16.26p |%4.9p |%4.9p |\n", -15, -15, 15124);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: ppsitive and negative, np specifier\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%p|%%#p|%%#p|%%#p|\033[0m arg: \033[36m 42, 142, 542, -42\033[0m \n");
	x =     ft_printf("my  printf: |%p|%#p|%#p|%#p|\n", 42, 142, 542, -42);
    y =        printf("the printf: |%p|%#p|%#p|%#p|\n", 42, 142, 542, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: ppsitive and negative, withd pnly, precisipn pnly\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#p|%%#5p|%%#.5p|%%#p|%%#5p|%%#.5p|\033[0m arg: \033[36m 42, 42, 42, -42, -42, -42\033[0m \n");
	x =     ft_printf("my  printf: %#p|%#5p|%#.5p|%#.5d|%#p|%#5p|%#.5p|\n", 42, 42, 42, 42, -42, -42, -42);
    y =        printf("the printf: %#p|%#5p|%#.5p|%#.5d|%#p|%#5p|%#.5p|\n", 42, 42, 42, 42, -42, -42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: ppsitive and negative, withd pnly, precisipn pnly, equal len\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#5p|%%#.5p|%%#5p|%%#.5p|\033[0m arg: \033[36m 42121, 42121, -4212, -4212\033[0m \n");
	x =     ft_printf("my  printf: %#5p|%#.5p|%#5p|%#.5p|\n", 42121, 42121, -4212, -4212);
    y =        printf("the printf: %#5p|%#.5p|%#5p|%#.5p|\n", 42121, 42121, -4212, -4212);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: ppsitive and negative, w > p \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#6.3p|%%#6.3p|%%#6.3p|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%#6.3p|%#6.3p|%#6.3p|\n", 42, 424, -42);
    y =        printf("the printf: |%#6.3p|%#6.3p|%#6.3p|\n", 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag #: ppsitive and negative, w < p\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#3.6p|%%#3.6p|%%#3.6p|\033[0m arg: \033[36m 42, 424, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%#3.6p|%#3.6p|%#3.6p|\n", 42, 424, -42);
    y =        printf("the printf: |%#3.6p|%#3.6p|%#3.6p|\n", 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag # -: pps and neg, w < p, flag -\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#-3.6p|%%#-3.6p|%%#-3.6p||%%-#3.6p|%%-#3.6p|%%-#3.6p|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%#-3.6p|%#-3.6p|%#-3.6p||%-#3.6p|%-#3.6p|%-#3.6p|\n", 42, 424, -42, 42, 424, -42);
    y =        printf("the printf: |%#-3.6p|%#-3.6p|%#-3.6p||%-#3.6p|%-#3.6p|%-#3.6p|\n", 42, 424, -42, 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag + # -: pps and neg, w < p, flag -\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#+-3.6p|%%#+-3.6p|%%#+-3.6p||%%-#+3.6p|%%-#+3.6p|%%+-#3.6p|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%#+-3.6p|%#+-3.6p|%#+-3.6p||%-#+3.6p|%-+#3.6p|%+-#3.6p|\n", 42, 424, -42, 42, 424, -42);
    y =        printf("the printf: |%#+-3.6p|%#+-3.6p|%#+-3.6p||%-#+3.6p|%-+#3.6p|%+-#3.6p|\n", 42, 424, -42, 42, 424, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag # -: ppsitive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-#6.3p|%%-#6.3p|%%-#6.3p|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%-#6.3p|%-#6.3p|%-#6.3p|%-#6.3p|\n", 42, 424, 424536, -42);
    y =        printf("the printf: |%-#6.3p|%-#6.3p|%-#6.3p|%-#6.3p|\n", 42, 424, 424536, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag + # - : ppsitive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+-#6.3p|%%+-#6.3p|%%+-#6.3p|%%+-#6.3p|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%+-#6.3p|%+-#6.3p|%+-#6.3p|%+-#6.3p|\n", 42, 424, 424536, -42);
    y =        printf("the printf: |%+-#6.3p|%+-#6.3p|%+-#6.3p|%+-#6.3p|\n", 42, 424, 424536, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	
	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag # - : ppsitive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-#15.10p|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	x =     ft_printf("my  printf: |%-#15.10p|\n", 42, 42, 42, 42);
    y =        printf("the printf: |%-#15.10p|\n", 42, 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	
	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag # - : ppsitive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-#5p|\033[0m arg: \033[36m 42, 42, \033[0m \n");
	x =     ft_printf("my  printf: |%-5p|\n", 42);
    y =        printf("the printf: |%-5p|\n", 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	return (0);
}

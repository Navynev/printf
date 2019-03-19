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

int main(void)
{
	int		i;
	int		x;
	int		y;

	i = 1;
	
	// 1
    
	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% .2f|\033[0m arg: \033[36m 263.367 \033[0m \n");
	x =     ft_printf("my  printf: |%# .2f|\n", 263.367);
    y =        printf("the printf: |%# .2f|\n", 263.367);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%10f|\033[0m arg: \033[36m 42.42566 \033[0m \n");
	x =     ft_printf("my  printf: |%10.3f|\n", -42.42566);
    y =        printf("the printf: |%10.3f|\n", -42.42566);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%f|\033[0m arg: \033[36m 0.42 \033[0m \n");
	x =     ft_printf("my  printf: |%f|\n", 42.54);
    y =        printf("the printf: |%f|\n", 42.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%f|\033[0m arg: \033[36m 42.48655555 \033[0m \n");
	x =     ft_printf("my  printf: |%f|\n", 42.48655555);
    y =        printf("the printf: |%f|\n", 42.48655555);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%.4f|%%.4f|\033[0m arg: \033[36m 42506, -42506\033[0m \n");
	x =     ft_printf("my  printf: |%.2f|%.4f|\n", 42506.546, -42506.54);
    y =        printf("the printf: |%.2f|%.4f|\n", 42506.546, -42506.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%2.4f|%%2.4f|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	x =     ft_printf("my  printf: |%2.4f|%2.4f|\n", 21.54, -21.54);
    y =        printf("the printf: |%2.4f|%2.4f|\n", 21.54, -21.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	// 7

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%09.2f|\033[0m arg: \033[36m -15\033[0m \n");
	x =     ft_printf("my  printf: |%09.2f|\n", -15.54);
    y =        printf("the printf: |%09.2f|\n", -15.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%09.4f|%%-09.4f|\033[0m arg: \033[36m -15, -15\033[0m \n");
	x =     ft_printf("my  printf: |%09.4f|%-09.4f|\n", -15.54, -15.54);
    y =        printf("the printf: |%09.4f|%-09.4f|\n", -15.54, -15.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%4.2f|%%-4.2f|\033[0m arg: \033[36m 32, -32\033[0m \n");
	x =     ft_printf("my  printf: |%4.2f|%-4.2f|\n", 32.54, -32.54);
    y =        printf("the printf: |%4.2f|%-4.2f|\n", 32.54, -32.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%-09.4f|\033[0m arg: \033[36m 15\033[0m \n");
	x =     ft_printf("my  printf: |%-09.4f|\n", 15.54);
    y =        printf("the printf: |%-09.4f|\n", 15.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%-4.9f|%%4.9f|\033[0m arg: \033[36m 15, -15\033[0m \n");
	x =     ft_printf("my  printf: |%-4.9f|%4.9f|\n", -15.54, -15.54);
    y =        printf("the printf: |%-4.9f|%4.9f|\n", -15.54, -15.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	//12

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%f|%%-5f|%%-5f|%%.4f|\033[0m arg: \033[36m -15, 42\033[0m \n");
	x =     ft_printf("my  printf: |%f|%5f|%-5f|%.4f|\n", 42.54, 42.54, 42.54, 42.54);
    y =        printf("the printf: |%f|%5f|%-5f|%.4f|\n", 42.54, 42.54, 42.54, 42.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-0.5f|%%-10.4f|%%-15.10f|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
	x =     ft_printf("my  printf: |%-0.5f|%-10.4f|%-15.10f|\n", 42.54, 42.54, 42.54);
    y =        printf("the printf: |%-0.5f|%-10.4f|%-15.10f|\n", 42.54, 42.54, 42.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-0.5f|%%-10.4f|%%-15.10f|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
	x =     ft_printf("my  printf: |%-0.5f|%-10.4f|%-15.10f|\n", 42.54, 42.54, 42.54);
    y =        printf("the printf: |%-0.5f|%-10.4f|%-15.10f|\n", 42.54, 42.54, 42.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%8.2f|%%8.2f|\033[0m arg: \033[36m 142, 142142142\033[0m \n");
	x =     ft_printf("my  printf: |%8.2f|%8.2f|\n", 142.54, 142142142.54);
    y =        printf("the printf: |%8.2f|%8.2f|\n", 142.54, 142142142.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%09.2f|%%09.2f|\033[0m arg: \033[36m 150, -150 \033[0m \n");
	x =     ft_printf("my  printf: |%09.2f|%09.2f|\n", 150.54, -150.54);
    y =        printf("the printf: |%09.2f|%09.2f|\n", 150.54, -150.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	// 17

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+f|%%+f|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+f|%f|\n", 42.54, -42.54);
    y =        printf("the printf: |%+f|%f|\n", 42.54, -42.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+.4f|%%+.4f|\033[0m arg: \033[36m 42506, -42506\033[0m \n");
	x =     ft_printf("my  printf: |%+.4f|%+.4f|\n", 42506.54, -42506.54);
    y =        printf("the printf: |%+.4f|%+.4f|\n", 42506.54, -42506.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+2.4f|%%+2.4f|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	x =     ft_printf("my  printf: |%+2.4f|%+2.4f|\n", 21.54, -21.54);
    y =        printf("the printf: |%+2.4f|%+2.4f|\n", 21.54, -21.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%09.2d\033[0m arg: \033[36m -15\033[0m \n");
	x =     ft_printf("my  printf: |%09.2f|\n", -15.54);
    y =        printf("the printf: |%09.2f|\n", -15.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%+09.4f|%%+-09.4f|\033[0m arg: \033[36m -15, -15\033[0m \n");
	x =     ft_printf("my  printf: |%+09.4f|%+-09.4f|\n", -15.54, -15.54);
    y =        printf("the printf: |%+09.4f|%+-09.4f|\n", -15.54, -15.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

	//22

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+4.2f|%%+-4.2f|\033[0m arg: \033[36m 32, -32\033[0m \n");
	x =     ft_printf("my  printf: |%+4.2f|%+-4.2f|\n", 32.54, -32.54);
    y =        printf("the printf: |%+4.2f|%+-4.2f|\n", 32.54, -32.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%+-09.4f|\033[0m arg: \033[36m 15\033[0m \n");
	x =     ft_printf("my  printf: |%+-09.4f|\n", 15.54);
    y =        printf("the printf: |%+-09.4f|\n", 15.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%+-4.9f|%%4.9f|\033[0m arg: \033[36m 15, -15\033[0m \n");
	x =     ft_printf("my  printf: |%+-4.9f|%4.9f|\n", -15.54, -15.54);
    y =        printf("the printf: |%+-4.9f|%4.9f|\n", -15.54, -15.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+f|%%+5f|%%+-5f|%%+.4f|\033[0m arg: \033[36m 42, 42, 42, 42\033[0m \n");
	x =     ft_printf("my  printf: |%+f|%+5f|%+-5f|%+.4f|\n", 42.54, 42.54, 42.54, 42.54);
    y =        printf("the printf: |%+f|%+5f|%+-5f|%+.4f|\n", 42.54, 42.54, 42.54, 42.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+-0.5f|%%+-10.4f|%%-15.10f|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
	x =     ft_printf("my  printf: |%+-0.5f|%+-10.4f|%+-15.10f|\n", 42.54, 42.54, 42.54);
    y =        printf("the printf: |%+-0.5f|%+-10.4f|%+-15.10f|\n", 42.54, 42.54, 42.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	//27

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+-0.5f|%%+-10.4f|%%+-15.10f|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
	x =     ft_printf("my  printf: |%+-0.5f|%+-10.4f|%+-15.10f|\n", 42.54, 42.54, 42.54);
    y =        printf("the printf: |%+-0.5f|%+-10.4f|%+-15.10f|\n", 42.54, 42.54, 42.54);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+8.2f|%%+8.2f|\033[0m arg: \033[36m 142, 142142142\033[0m \n");
	x =     ft_printf("my  printf: |%+8.2f|%+8.2f|\n", 142.54424242, 142142142.54424242);
    y =        printf("the printf: |%+8.2f|%+8.2f|\n", 142.54424242, 142142142.54424242);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

		printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+8.2f|%%+8.2f|\033[0m arg: \033[36m 142, 142142142\033[0m \n");
	x =     ft_printf("my  printf: |%+8.15Lf|%+8.2Lf|\n", (long double)142.544242428888, (long double)142142142.54424242);
    y =        printf("the printf: |%+8.15Lf|%+8.2Lf|\n", (long double)142.544242428888, (long double)142142142.54424242);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

			printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+8.2f|%%+8.2f|\033[0m arg: \033[36m 142, 142142142\033[0m \n");
	x =     ft_printf("my  printf: |%#+8.2Lf|%+8.2Lf %%|\n", (long double)-999999999999999999.1999999999999999, (long double)142142142.9999999999);
    y =        printf("the printf: |%#+8.2Lf|%+8.2Lf %%|\n", (long double)-999999999999999999.1999999999999999, (long double)142142142.9999999999);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");


	ft_putchar('\n');
}
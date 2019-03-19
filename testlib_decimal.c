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
// flag ' ' is ignored when flag '+' is present
// flag ' ' results in undefined behavior with 'c' conversion specifier

int main(void)
{
	int		i;
	int		x;
	int		y;

	i = 1;



// int main() {

//   printf("%09d\n", 42);
//   printf("%09d\n", -42);
//   printf("%09.1d\n", 42);
//   printf("%09.1d\n", -42);
//    printf("%09.2d\n", 42);
//   printf("%09.3d\n", -42);
//      printf("%09.5d\n", 42);
//   printf("%09.5d\n", -42);
//   printf("%-09d\n", 42);
//   printf("%-09d\n", -42);
//     printf("\n flag 0 et + \n%+09d\n", 42);
//   printf("%+09d\n", -42);
//   printf("%+09.1d\n", 42);
//   printf("%+09.1d\n", -42);
//    printf("%+09.2d\n", 42);
//   printf("%+09.3d\n", -42);
//      printf("%+09.5d\n", 42);
//   printf("%+09.5d\n", -42);
//   printf("%+-09d\n", 42);
//   printf("%+-09d\n", -42);
//     printf("\nsans flag :\n%9.1d\n", 42);
//   printf("%9.1d\n", -42);
//    printf("%9.2d\n", 42);
//   printf("%9.3d\n", -42);
//      printf("%9.5d\n", 42);
//   printf("%9.5d\n", -42);
//   printf("%-9d\n", 42);
//   printf("%-9d\n", -42);
//   return 0;
// }


//////////////////////// PART I : TEST AVEC TOUS LES FLAGS && WIDTH UNIQUEMENT ///////////////////////////////
	

    printf("===============  \033[33mTEST %d | Width \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%d|%%d||%%5d|%%5d||%%1d|%%1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%d|%d|%5d|%5d|%1d|%1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%d|%d|%5d|%5d|%1d|%1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Width | Flag ' ' \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% d|%% d||%% 5d|%% 5d||%% 1d|%% 1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% d|% d|% 5d|% 5d|% 1d|% 1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |% d|% d|% 5d|% 5d|% 1d|% 1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Width | Flag 0 \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%0d|%%0d||%%05d|%%05d||%%01d|%%01d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%0d|%0d|%05d|%05d|%01d|%01d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%0d|%0d|%05d|%05d|%01d|%01d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Width | Flag + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+d|%%+d||%%+5d|%%+5d||%%+1d|%%+1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+d|%+d|%+5d|%+5d|%+1d|%+1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%+d|%+d|%+5d|%+5d|%+1d|%+1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


	printf("===============  \033[33mTEST %d | Width | Flag ' ' && 0 \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 0d|%% 0d||%% 05d|%% 05d||%% 01d|%% 01d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% 0d|% 0d|% 05d|% 05d|% 01d|% 01d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |% 0d|% 0d|% 05d|% 05d|% 01d|% 01d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	//Flag + is ignored when Flag ' ' is present
	printf("===============  \033[33mTEST %d | Width | Flag ' ' && + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% +d|%% +d||%% +5d|%% +5d||%% +1d|%% +1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% +d|% +d|% +5d|% +5d|% +1d|% 01d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |% +d|% +d|% +5d|% +5d|% +1d|% 01d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Width | Flag 0 && + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%0+d|%%0+d||%%0+5d|%%0+5d||%%0+1d|%%0+1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+0d|%+0d|%+05d|%+05d|%+01d|%+01d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%+0d|%+0d|%+05d|%+05d|%+01d|%+01d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Width | Flag 0 && + && ' ' \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 0+d|%% 0+d||%% 0+5d|%% 0+5d||%% 0+1d|%% 0+1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% +0d|% +0d|% +05d|% +05d|% +01d|% +01d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |% +0d|% +0d|% +05d|% +05d|% +01d|% +01d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

///////////////////////// FLAG - //////////////////////////

    printf("===============  \033[33mTEST %d | Width | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-d|%%-d||%%-5d|%%-5d||%%-1d|%%-1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-d|%-d|%-5d|%-5d|%-1d|%-1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%-d|%-d|%-5d|%-5d|%-1d|%-1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Width | Flag ' ' | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% -d|%% -d||%% -5d|%% -5d||%% -1d|%% -1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% -d|% -d|% -5d|% -5d|% -1d|% -1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |% -d|% -d|% -5d|% -5d|% -1d|% -1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


	printf("===============  \033[33mTEST %d | Width | Flag 0 | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-0d|%%-0d||%%-05d|%%-05d||%%-01d|%%-01d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-0d|%-0d|%-05d|%-05d|%-01d|%-01d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%-0d|%-0d|%-05d|%-05d|%-01d|%-01d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Width | Flag + | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+d|%%-+d||%%-+5d|%%-+5d||%%-+1d|%%-+1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+-d|%-+d|%-+5d|%-+5d|%-+1d|%-+1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%+-d|%-+d|%-+5d|%-+5d|%-+1d|%-+1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


	printf("===============  \033[33mTEST %d | Width | Flag ' ' && 0 | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%- 0d|%%- 0d||%%- 05d|%%- 05d||%%- 01d|%%- 01d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%- 0d|%- 0d|%- 05d|%- 05d|%- 01d|%- 01d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%- 0d|%- 0d|%- 05d|%- 05d|%- 01d|%- 01d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	//Flag + is ignored when Flag ' ' is present
	printf("===============  \033[33mTEST %d | Width | Flag ' ' && + | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%- +d|%%- +d||%%- +5d|%%- +5d||%%- +1d|%%- +1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%- +d|%- +d|%- +5d|%- +5d|%- +1d|%- +01d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%- +d|%- +d|%- +5d|%- +5d|%- +1d|%- +01d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Width | Flag 0 && + | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-0+d|%%-0+d||%%-0+5d|%%-0+5d||%%-0+1d|%%-0+1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-+0d|%-+0d|%-+05d|%-+05d|%-+01d|%-+01d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%-+0d|%-+0d|%-+05d|%-+05d|%-+01d|%-+01d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Width | Flag 0 && + && ' ' | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%- 0+d|%%- 0+d||%%- 0+5d|%%- 0+5d||%%- 0+1d|%%- 0+1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%- +0d|%- +0d|%- +05d|%- +05d|%- +01d|%- +01d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%- +0d|%- +0d|%- +05d|%- +05d|%- +01d|%- +01d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');



//////////////////////// PART II : TEST AVEC TOUS LES FLAGS && PRECISION UNIQUEMENT ///////////////////////////////
	

    printf("===============  \033[33mTEST %d | Precision \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%.d|%%.d||%%.5d|%%.5d||%%.1d|%%.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%.d|%.d|%.5d|%.5d|%.1d|%.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%.d|%.d|%.5d|%.5d|%.1d|%.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Precision | Flag ' ' \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% .d|%% .d||%% .5d|%% .5d||%% .1d|%% .1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% .d|% .d|% .5d|% .5d|% .1d|% .1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |% .d|% .d|% .5d|% .5d|% .1d|% .1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Precision | Flag 0 \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%0.d|%%0.d||%%0.5d|%%0.5d||%%0.1d|%%0.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%0.d|%0.d|%0.5d|%0.5d|%0.1d|%0.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%0.d|%0.d|%0.5d|%0.5d|%0.1d|%0.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Precision | Flag + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+.d|%%+.d||%%+.5d|%%+.5d||%%+.1d|%%+.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+.d|%+.d|%+.5d|%+.5d|%+.1d|%+.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%+.d|%+.d|%+.5d|%+.5d|%+.1d|%+.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


	printf("===============  \033[33mTEST %d | Precision | Flag ' ' && 0 \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 0.d|%% 0.d||%% 0.5d|%% 0.5d||%% 0.1d|%% 0.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% 0.d|% 0.d|% 0.5d|% 0.5d|% 0.1d|% 0.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |% 0.d|% 0.d|% 0.5d|% 0.5d|% 0.1d|% 0.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	//Flag + is ignored when Flag ' ' is present
	printf("===============  \033[33mTEST %d | Precision | Flag ' ' && + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% +.d|%% +.d||%% +5.d|%% +5.d||%% +1.d|%%- +1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% +.d|% +.d|% +5.d|% +5.d|% +1.d|% +1.d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |% +.d|% +.d|% +5.d|% +5.d|% +1.d|% +1.d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Precision | Flag 0 && + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%0+.d|%%0+.d||%%0+.5d|%%0+.5d||%%0+.1d|%%0+.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+0.d|%+0.d|%+0.5d|%+0.5d|%+0.1d|%+0.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%+0.d|%+0.d|%+0.5d|%+0.5d|%+0.1d|%+0.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Precision | Flag 0 && + && ' ' \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 0+.d|%% 0+.d||%% 0+.5d|%% 0+.5d||%% 0+.1d|%% 0+.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% +0.d|% +0.d|% +0.5d|% +0.5d|% +0.1d|% +0.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |% +0.d|% +0.d|% +0.5d|% +0.5d|% +0.1d|% +0.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

// ///////////////////////// FLAG - //////////////////////////

    printf("===============  \033[33mTEST %d | Precision | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-.d|%%-.d||%%-.5d|%%-.5d||%%-.1d|%%-.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-.d|%-.d|%-.5d|%-.5d|%-.1d|%-.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%-.d|%-.d|%-.5d|%-.5d|%-.1d|%-.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Precision | Flag ' ' | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% -.d|%% -.d||%% -.5d|%% -.5d||%% -.1d|%% -.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% -.d|% -.d|% -.5d|% -.5d|% -.1d|% -.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |% -.d|% -.d|% -.5d|% -.5d|% -.1d|% -.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


	printf("===============  \033[33mTEST %d | Precision | Flag 0 | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-0.d|%%-0.d||%%-0.5d|%%-0.5d||%%-0.1d|%%-0.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-0.d|%-0.d|%-0.5d|%-0.5d|%-0.1d|%-0.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%-0.d|%-0.d|%-0.5d|%-0.5d|%-0.1d|%-0.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Precision | Flag + | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+.d|%%-+.d||%%-+.5d|%%-+.5d||%%-+.1d|%%-+.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+-.d|%-+.d|%-+.5d|%-+.5d|%-+.1d|%-+.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%+-.d|%-+.d|%-+.5d|%-+.5d|%-+.1d|%-+.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


	printf("===============  \033[33mTEST %d | Precision | Flag ' ' && 0 | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%- 0.d|%%- 0.d||%%- 0.5d|%%- 0.5d||%%- 0.1d|%%- 0.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%- 0.d|%- 0.d|%- 0.5d|%- 0.5d|%- 0.1d|%- 0.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%- 0.d|%- 0.d|%- 0.5d|%- 0.5d|%- 0.1d|%- 0.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	//Flag + is ignored when Flag ' ' is present
	printf("===============  \033[33mTEST %d | Precision | Flag ' ' && + | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%- +d|%%- +.d||%%- +.5d|%%- +.5d||%%- +.1d|%%- +.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%- +.d|%- +.d|%- +.5d|%- +.5d|%- +.1d|%- +0.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%- +.d|%- +.d|%- +.5d|%- +.5d|%- +.1d|%- +0.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Precision | Flag 0 && + | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-0+.d|%%-0+.d||%%-0+.5d|%%-0+.5d||%%-0+.1d|%%-0+.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-+0.d|%-+0.d|%-+0.5d|%-+0.5d|%-+0.1d|%-+0.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%-+0.d|%-+0.d|%-+0.5d|%-+0.5d|%-+0.1d|%-+0.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Precision | Flag 0 && + && ' ' | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%- 0+.d|%%- 0+.d||%%- 0+.5d|%%- 0+.5d||%%- 0+1.d|%%- 0+1.d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%- +0.d|%- +0.d|%- +0.5d|%- +0.5d|%- +0.1d|%- +0.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%- +0.d|%- +0.d|%- +0.5d|%- +0.5d|%- +0.1d|%- +0.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');



//////////////////////// PART III : TEST AVEC TOUS LES FLAGS && PRECISION > WIDTH ///////////////////////////////

 printf("===============  \033[33mTEST %d | Precision >= Width \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%2.2d|%%2.2d||%%5.6d|%%5.6d||%%1.7d|%%1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%2.2d|%2.2d||%5.6d|%5.6d||%1.7d|%1.7d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%2.2d|%2.2d||%5.6d|%5.6d||%1.7d|%1.7d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Precision >= Width | Flag ' ' \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 2.2d|%% 2.2d||%% 5.6d|%% 5.6d||%% 1.7d|%% 1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% 2.2d|% 2.2d||% 5.6d|% 5.6d||% 1.7d|% 1.7d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |% 2.2d|% 2.2d||% 5.6d|% 5.6d||% 1.7d|% 1.7d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Precision >= Width | Flag 0 \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%02.2d|%%02.2d||%%05.6d|%%05.6d||%%01.7d|%%01.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%02.2d|%02.2d||%05.6d|%05.6d||%01.7d|%01.7d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%02.2d|%02.2d||%05.6d|%05.6d||%01.7d|%01.7d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Precision >= Width | Flag + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+2.2d|%%+2.2d||%%+5.6d|%%+5.6d||%%+1.7d|%%+1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+2.2d|%+2.2d||%+5.6d|%+5.6d||%+1.7d|%+1.7d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%+2.2d|%+2.2d||%+5.6d|%+5.6d||%+1.7d|%+1.7d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Precision >= Width | Flag ' ' && 0 \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 02.2d|%% 02.2d||%% 05.6d|%% 05.6d||%% 01.7d|%% 01.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% 02.2d|% 02.2d||% 05.6d|% 05.6d||% 01.7d|% 01.7d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |% 02.2d|% 02.2d||% 05.6d|% 05.6d||% 01.7d|% 01.7d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 	//Flag + is ignored when Flag ' ' is present

 printf("===============  \033[33mTEST %d | Precision >= Width | Flag ' ' && + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 2.2d|%% +2.2d||%% +5.6d|%% +5.6d||%% +1.7d|%% +1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% +2.2d|% +2.2d||% +5.6d|% +5.6d||% +1.7d|% +1.7d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |% +2.2d|% +2.2d||% +5.6d|% +5.6d||% +1.7d|% +1.7d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Precision >= Width | Flag 0 && + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%0+2.2d|%%0+2.2d||%%0+5.6d|%%0+5.6d||%%0+1.7d|%%0+1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%0+2.2d|%0+2.2d||%0+5.6d|%0+5.6d||%0+1.7d|%0+1.7d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%0+2.2d|%0+2.2d||%0+5.6d|%0+5.6d||%0+1.7d|%0+1.7d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Precision >= Width | Flag 0 && + && ' '\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 0+2.2d|%% 0+2.2d||%% 0+5.6d|%% 0+5.6d||%% 0+1.7d|%% 0+1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% 0+2.2d|% 0+2.2d||% 0+5.6d|% 0+5.6d||% 0+1.7d|% 0+1.7d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |% 0+2.2d|% 0+2.2d||% 0+5.6d|% 0+5.6d||% 0+1.7d|% 0+1.7d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


 ///////////////////////// FLAG - //////////////////////////

 printf("===============  \033[33mTEST %d | Precision >= Width | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-2.2d|%%-2.2d||%%-5.6d|%%-5.6d||%%-1.7d|%%-1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-2.2d|%-2.2d||%-5.6d|%-5.6d||%-1.7d|%-1.7d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%-2.2d|%-2.2d||%-5.6d|%-5.6d||%-1.7d|%-1.7d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Precision >= Width | Flag ' ' | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%- 2.2d|%%- 2.2d||%%- 5.6d|%%- 5.6d||%%- 1.7d|%%- 1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%- 2.2d|%- 2.2d||%- 5.6d|%- 5.6d||%- 1.7d|%- 1.7d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%- 2.2d|%- 2.2d||%- 5.6d|%- 5.6d||%- 1.7d|%- 1.7d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Precision >= Width | Flag 0 | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-02.2d|%%-02.2d||%%-05.6d|%%-05.6d||%%-01.7d|%%-01.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-02.2d|%-02.2d||%-05.6d|%-05.6d||%-01.7d|%-01.7d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%-02.2d|%-02.2d||%-05.6d|%-05.6d||%-01.7d|%-01.7d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Precision >= Width | Flag +  | Flag -\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-+2.2d|%%-+2.2d||%%-+5.6d|%%-+5.6d||%%-+1.7d|%%-+1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-+2.2d|%-+2.2d||%-+5.6d|%-+5.6d||%-+1.7d|%-+1.7d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%-+2.2d|%-+2.2d||%-+5.6d|%-+5.6d||%-+1.7d|%-+1.7d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Precision >= Width | Flag ' ' && 0  | Flag -\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%- 02.2d|%%- 02.2d||%%- 05.6d|%%- 05.6d||%%- 01.7d|%%- 01.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%- 02.2d|%- 02.2d||%- 05.6d|%- 05.6d||%- 01.7d|%- 01.7d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%- 02.2d|%- 02.2d||%- 05.6d|%- 05.6d||%- 01.7d|%- 01.7d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 	//Flag + is ignored when Flag ' ' is present

 printf("===============  \033[33mTEST %d | Precision >= Width | Flag ' ' && + | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%- 2.2d|%%- +2.2d||%%- +5.6d|%%- +5.6d||%%- +1.7d|%%- +1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%- +2.2d|%- +2.2d||%- +5.6d|%- +5.6d||%- +1.7d|%- +1.7d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%- +2.2d|%- +2.2d||%- +5.6d|%- +5.6d||%- +1.7d|%- +1.7d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Precision >= Width | Flag 0 && + | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-0+2.2d|%%-0+2.2d||%%-0+5.6d|%%-0+5.6d||%%-0+1.7d|%%-0+1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-0+2.2d|%-0+2.2d||%-0+5.6d|%-0+5.6d||%-0+1.7d|%-0+1.7d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%-0+2.2d|%-0+2.2d||%-0+5.6d|%-0+5.6d||%-0+1.7d|%-0+1.7d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Precision >= Width | Flag 0 && + && ' ' | Flag -\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%- 0+2.2d|%%- 0+2.2d||%%- 0+5.6d|%%- 0+5.6d||%%- 0+1.7d|%%- 0+1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%- 0+2.2d|%- 0+2.2d||%- 0+5.6d|%- 0+5.6d||%- 0+1.7d|%- 0+1.7d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%- 0+2.2d|%- 0+2.2d||%- 0+5.6d|%- 0+5.6d||%- 0+1.7d|%- 0+1.7d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

//////////////////////// PART IV : TEST AVEC TOUS LES FLAGS && PRECISION < WIDTH ///////////////////////////////

 printf("===============  \033[33mTEST %d | Width >= Precision \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%2.d|%%2.d||%%6.5d|%%6.5d||%%7.1d|%%7.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%2.d|%2.d||%6.5d|%6.5d||%7.1d|%7.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%2.d|%2.d||%6.5d|%6.5d||%7.1d|%7.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Width >= Precision | Flag ' ' \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 2.d|%% 2.d||%% 6.5d|%% 6.5d||%% 7.1d|%%7 .1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% 2.d|% 2.d||% 6.5d|% 6.5d||% 7.1d|% 7.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |% 2.d|% 2.d||% 6.5d|% 6.5d||% 7.1d|% 7.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Width >= Precision | Flag 0 \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%02.d|%%02.d||%%06.5d|%%06.5d||%%07.1d|%%07.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%02.d|%02.d||%06.5d|%06.5d||%07.1d|%07.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%02.d|%02.d||%06.5d|%06.5d||%07.1d|%07.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Width >= Precision | Flag + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+2.d|%%+2.d||%%+6.5d|%%+6.5d||%%+7.1d|%%+7.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+2.d|%+2.d||%+6.5d|%+6.5d||%+7.1d|%+7.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%+2.d|%+2.d||%+6.5d|%+6.5d||%+7.1d|%+7.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Width >= Precision | Flag ' ' && 0 \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+02.d|%%0+2.d||%%0+6.5d|%%+06.5d||%%+07.1d|%%+07.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+02.d|%+02.d||%+06.5d|%+06.5d||%+07.1d|%0+7.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%+02.d|%+02.d||%+06.5d|%+06.5d||%+07.1d|%0+7.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

  	//Flag + is ignored when Flag ' ' is present
 
 printf("===============  \033[33mTEST %d | Width >= Precision | Flag ' ' && + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+02.d|%% +2.d||%% +6.5d|%%+ 6.5d||%%+ 7.1d|%%+ 7.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+ 2.d|%+ 2.d||%+ 6.5d|%+ 6.5d||%+ 7.1d|% +7.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%+ 2.d|%+ 2.d||%+ 6.5d|%+ 6.5d||%+ 7.1d|% +7.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

printf("===============  \033[33mTEST %d | Width >= Precision | Flag 0 && + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+02.d|%%0+2.d||%%0+6.5d|%%+06.5d||%%+07.1d|%%+07.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+02.d|%+02.d||%+06.5d|%+06.5d||%+07.1d|%0+7.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%+02.d|%+02.d||%+06.5d|%+06.5d||%+07.1d|%0+7.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

printf("===============  \033[33mTEST %d | Width >= Precision | Flag 0 && ' ' && + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% +02.d|%% 0+2.d||%% 0+6.5d|%% +06.5d||%%+ 07.1d|%% +07.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+ 02.d|% +02.d||% +06.5d|%+ 06.5d||%+ 07.1d|% 0+7.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%+ 02.d|% +02.d||% +06.5d|%+ 06.5d||%+ 07.1d|% 0+7.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 ///////////////////////// FLAG - //////////////////////////

 printf("===============  \033[33mTEST %d | Width >= Precision | Flag -  \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-2.d|%%-2.d||%%-6.5d|%%-6.5d||%%-7.1d|%%-7.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-2.d|%-2.d||%-6.5d|%-6.5d||%-7.1d|%-7.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%-2.d|%-2.d||%-6.5d|%-6.5d||%-7.1d|%-7.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Width >= Precision | Flag ' ' \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-% 2.d|%% 2.d||%% 6.5d|%% 6.5d||%% 7.1d|%%7 .1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%- 2.d|%- 2.d||%- 6.5d|%- 6.5d||%- 7.1d|%- 7.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%- 2.d|%- 2.d||%- 6.5d|%- 6.5d||%- 7.1d|%- 7.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Width >= Precision | Flag 0 \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%02.d|%%02.d||%%06.5d|%%06.5d||%%07.1d|%%07.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-02.d|%-02.d||%-06.5d|%-06.5d||%-07.1d|%-07.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%-02.d|%-02.d||%-06.5d|%-06.5d||%-07.1d|%-07.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Width >= Precision | Flag + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%-%+2.d|%%+2.d||%%+6.5d|%%+6.5d||%%+7.1d|%%+7.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-+2.d|%-+2.d||%-+6.5d|%-+6.5d||%-+7.1d|%-+7.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%-+2.d|%-+2.d||%-+6.5d|%-+6.5d||%-+7.1d|%-+7.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | Width >= Precision | Flag ' ' && 0 \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+02.d|%%0+2.d||%%0+6.5d|%%+06.5d||%%+07.1d|%%+07.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-+02.d|%-+02.d||%-+06.5d|%-+06.5d||%-+07.1d|%-0+7.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%-+02.d|%-+02.d||%-+06.5d|%-+06.5d||%-+07.1d|%-0+7.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

  	//Flag + is ignored when Flag ' ' is present
 
 printf("===============  \033[33mTEST %d | Width >= Precision | Flag ' ' && + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+02.d|%% +2.d||%% +6.5d|%%+ 6.5d||%%+ 7.1d|%%+ 7.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-+ 2.d|%-+ 2.d||%-+ 6.5d|%-+ 6.5d||%-+ 7.1d|%- +7.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%-+ 2.d|%-+ 2.d||%-+ 6.5d|%-+ 6.5d||%-+ 7.1d|%- +7.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

printf("===============  \033[33mTEST %d | Width >= Precision | Flag 0 && + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+02.d|%%0+2.d||%%0+6.5d|%%+06.5d||%%+07.1d|%%+07.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-+02.d|%-+02.d||%-+06.5d|%-+06.5d||%-+07.1d|%-0+7.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%-+02.d|%-+02.d||%-+06.5d|%-+06.5d||%-+07.1d|%-0+7.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

printf("===============  \033[33mTEST %d | Width >= Precision | Flag 0 && ' ' && + | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%- +02.d|%%- 0+2.d||%%- 0+6.5d|%%- +06.5d||%%-+ 07.1d|%%- +07.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-+ 02.d|%- +02.d||%- +06.5d|%-+ 06.5d||%-+ 07.1d|%- 0+7.1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%-+ 02.d|%- +02.d||%- +06.5d|%-+ 06.5d||%-+ 07.1d|%- 0+7.1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

////////////////////////PART V : ZERO

    printf("===============  \033[33mTEST %d | 0 && Width \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%d|%%d|%%0d|%%5d|%%5d||%%1d|%%1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%d|%0d|%5d|%5d|%1d|%1d|\n", 0, 0, 0, 0, 0, 0);
    y =        printf("the printf: |%d|%0d|%5d|%5d|%1d|%1d|\n", 0, 0, 0, 0, 0, 0);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	 printf("===============  \033[33mTEST %d | 0 && Precision \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%.d|%%.0d||%%.1d|%%.2d||%%.3d|%%.4d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%.d|%.0d||%.1d|%.2d||%.3d|%.4d|\n", 0, 0, 0, 0, 0, 0);
    y =        printf("the printf: |%.d|%.0d||%.1d|%.2d||%.3d|%.4d|\n", 0, 0, 0, 0, 0, 0);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | 0 | Flag ' ' \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% d|%% 1d||%% 2d|%% 3d||%% .1d|%% .2d|%% .3d||%% 0.0d|%% 0.d||%% 1.1d|%% 2.2d||%% 2.1d|%% 1.2d|%% 2.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% d|% 1d|% 2d|% 3d|% .1d|% .2d|% .3d|% 0.0d|% 0.d|% 1.1d|% 2.2d|% 2.1d|% 1.2d|% 2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
    y =        printf("the printf: |% d|% 1d|% 2d|% 3d|% .1d|% .2d|% .3d|% 0.0d|% 0.d|% 1.1d|% 2.2d|% 2.1d|% 1.2d|% 2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | 0 | Flag 0 \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%0d|%%01d||%%02d|%%03d||%%0.1d|%%0.2d|%%0.3d||%%00.0d|%%00.d||%%01.1d|%%02.2d||%%02.1d|%%01.2d|%%02.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: %0d|%01d|%02d|%03d|%0.1d|%0.2d|%0.3d|%00.0d|%00.d|%01.1d|%02.2d|%02.1d|%01.2d|%02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
    y =        printf("the printf: %0d|%01d|%02d|%03d|%0.1d|%0.2d|%0.3d|%00.0d|%00.d|%01.1d|%02.2d|%02.1d|%01.2d|%02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | 0 | Flag + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+d|%%+1d||%%+2d|%%+3d||%%+.1d|%%+.2d|%%+.3d||%%+0.0d|%%+0.d||%%+1.1d|%%+2.2d||%%+2.1d|%%+1.2d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: %+d|%+1d|%+2d|%+3d|%+.1d|%+.2d|%+.3d|%+0.0d|%+0.d|%+1.1d|%+2.2d|%+2.1d|%+1.2d|%+2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
    y =        printf("the printf: %+d|%+1d|%+2d|%+3d|%+.1d|%+.2d|%+.3d|%+0.0d|%+0.d|%+1.1d|%+2.2d|%+2.1d|%+1.2d|%+2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | 0 | Flag ' ' && 0 \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 0d|%% 01d||%% 02d|%% 03d||%% 0.1d|%% 0.2d|%% 0.3d||%% 00.0d|%% 00.d||%% 01.1d|%% 02.2d||%% 02.1d|%% 01.2d|%% 02.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: % 0d|% 01d|% 02d|% 03d|% 0.1d|% 0.2d|% 0.3d|% 00.0d|% 00.d|% 01.1d|% 02.2d|% 02.1d|% 01.2d|% 02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
    y =        printf("the printf: % 0d|% 01d|% 02d|% 03d|% 0.1d|% 0.2d|% 0.3d|% 00.0d|% 00.d|% 01.1d|% 02.2d|% 02.1d|% 01.2d|% 02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

  	//Flag + is ignored when Flag ' ' is present
 
  printf("===============  \033[33mTEST %d | 0 | Flag ' ' && + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% +d|%% +1d||%% +2d|%% +3d||%% +.1d|%% +.2d|%% +.3d||%% +0.0d|%% +0.d||%% +1.1d|%% +2.2d||%% +2.1d|%% +1.2d|%% 02.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: %+ d|% +1d|% +2d|% +3d|% +.1d|% +.2d|% +.3d|% +0.0d|% +0.d|% +1.1d|% +2.2d|% +2.1d|% +1.2d|% +2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
    y =        printf("the printf: %+ d|% +1d|% +2d|% +3d|% +.1d|% +.2d|% +.3d|% +0.0d|% +0.d|% +1.1d|% +2.2d|% +2.1d|% +1.2d|% +2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | 0 | Flag ' ' && 0 && '+' \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 0d|%% 01d||%% 02d|%% 03d||%% 0.1d|%% 0.2d|%% 0.3d||%% 00.0d|%% 00.d||%% 01.1d|%% 02.2d||%% 02.1d|%% 01.2d|%% 02.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: % +0d|% +01d|% +02d|% +03d|% +0.1d|% +0.2d|% +0.3d|% +00.0d|% +00.d|% +01.1d|% +02.2d|% +02.1d|% +01.2d|% +02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
    y =        printf("the printf: % +0d|% +01d|% +02d|% +03d|% +0.1d|% +0.2d|% +0.3d|% +00.0d|% +00.d|% +01.1d|% +02.2d|% +02.1d|% +01.2d|% +02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

////////////////////////////// FLAG - && RES = 0

    printf("===============  \033[33mTEST %d | 0 && Width | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%d|%%d|%%0d|%%5d|%%5d||%%1d|%%1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-d|%-0d|%-5d|%-5d|%-1d|%-1d|\n", 0, 0, 0, 0, 0, 0);
    y =        printf("the printf: |%-d|%-0d|%-5d|%-5d|%-1d|%-1d|\n", 0, 0, 0, 0, 0, 0);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	 printf("===============  \033[33mTEST %d | 0 && Precision | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%.d|%%.0d||%%.1d|%%.2d||%%.3d|%%.4d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-.d|%-.0d||%-.1d|%-.2d||%-.3d|%-.4d|\n", 0, 0, 0, 0, 0, 0);
    y =        printf("the printf: |%-.d|%-.0d||%-.1d|%-.2d||%-.3d|%-.4d|\n", 0, 0, 0, 0, 0, 0);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | 0 | Flag ' ' Flag -\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% d|%% 1d||%% 2d|%% 3d||%% .1d|%% .2d|%% .3d||%% 0.0d|%% 0.d||%% 1.1d|%% 2.2d||%% 2.1d|%% 1.2d|%% 2.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%- d|%- 1d|%- 2d|%- 3d|%- .1d|%- .2d|%- .3d|%- 0.0d|%- 0.d|%- 1.1d|%- 2.2d|%- 2.1d|%- 1.2d|%- 2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
    y =        printf("the printf: |%- d|%- 1d|%- 2d|%- 3d|%- .1d|%- .2d|%- .3d|%- 0.0d|%- 0.d|%- 1.1d|%- 2.2d|%- 2.1d|%- 1.2d|%- 2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | 0 | Flag 0 \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%0d|%%01d||%%02d|%%03d||%%0.1d|%%0.2d|%%0.3d||%%00.0d|%%00.d||%%01.1d|%%02.2d||%%02.1d|%%01.2d|%%02.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: %0d|%01d|%02d|%03d|%0.1d|%0.2d|%0.3d|%00.0d|%00.d|%01.1d|%02.2d|%02.1d|%01.2d|%02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
    y =        printf("the printf: %0d|%01d|%02d|%03d|%0.1d|%0.2d|%0.3d|%00.0d|%00.d|%01.1d|%02.2d|%02.1d|%01.2d|%02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | 0 | Flag + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+d|%%+1d||%%+2d|%%+3d||%%+.1d|%%+.2d|%%+.3d||%%+0.0d|%%+0.d||%%+1.1d|%%+2.2d||%%+2.1d|%%+1.2d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: %+d|%+1d|%+2d|%+3d|%+.1d|%+.2d|%+.3d|%+0.0d|%+0.d|%+1.1d|%+2.2d|%+2.1d|%+1.2d|%+2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
    y =        printf("the printf: %+d|%+1d|%+2d|%+3d|%+.1d|%+.2d|%+.3d|%+0.0d|%+0.d|%+1.1d|%+2.2d|%+2.1d|%+1.2d|%+2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | 0 | Flag ' ' && 0 \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 0d|%% 01d||%% 02d|%% 03d||%% 0.1d|%% 0.2d|%% 0.3d||%% 00.0d|%% 00.d||%% 01.1d|%% 02.2d||%% 02.1d|%% 01.2d|%% 02.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: % 0d|% 01d|% 02d|% 03d|% 0.1d|% 0.2d|% 0.3d|% 00.0d|% 00.d|% 01.1d|% 02.2d|% 02.1d|% 01.2d|% 02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
    y =        printf("the printf: % 0d|% 01d|% 02d|% 03d|% 0.1d|% 0.2d|% 0.3d|% 00.0d|% 00.d|% 01.1d|% 02.2d|% 02.1d|% 01.2d|% 02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

  	//Flag + is ignored when Flag ' ' is present
 
  printf("===============  \033[33mTEST %d | 0 | Flag ' ' && + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% +d|%% +1d||%% +2d|%% +3d||%% +.1d|%% +.2d|%% +.3d||%% +0.0d|%% +0.d||%% +1.1d|%% +2.2d||%% +2.1d|%% +1.2d|%% 02.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: %+ d|% +1d|% +2d|% +3d|% +.1d|% +.2d|% +.3d|% +0.0d|% +0.d|% +1.1d|% +2.2d|% +2.1d|% +1.2d|% +2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
    y =        printf("the printf: %+ d|% +1d|% +2d|% +3d|% +.1d|% +.2d|% +.3d|% +0.0d|% +0.d|% +1.1d|% +2.2d|% +2.1d|% +1.2d|% +2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

 printf("===============  \033[33mTEST %d | 0 | Flag ' ' && 0 && '+' \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 0d|%% 01d||%% 02d|%% 03d||%% 0.1d|%% 0.2d|%% 0.3d||%% 00.0d|%% 00.d||%% 01.1d|%% 02.2d||%% 02.1d|%% 01.2d|%% 02.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: % +0d|% +01d|% +02d|% +03d|% +0.1d|% +0.2d|% +0.3d|% +00.0d|% +00.d|% +01.1d|% +02.2d|% +02.1d|% +01.2d|% +02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
    y =        printf("the printf: % +0d|% +01d|% +02d|% +03d|% +0.1d|% +0.2d|% +0.3d|% +00.0d|% +00.d|% +01.1d|% +02.2d|% +02.1d|% +01.2d|% +02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');



// 	printf("===============  \033[33mTEST %d | Width | Flag 0 | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%-0d|%%-0d||%%-05d|%%-05d||%%-01d|%%-01d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-0d|%-0d|%-05d|%-05d|%-01d|%-01d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-0d|%-0d|%-05d|%-05d|%-01d|%-01d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

// 	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Width | Flag + | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+d|%%-+d||%%-+5d|%%-+5d||%%-+1d|%%-+1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+-d|%-+d|%-+5d|%-+5d|%-+1d|%-+1d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%+-d|%-+d|%-+5d|%-+5d|%-+1d|%-+1d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


	printf("===============  \033[33mTEST %d | Width | Flag ' ' && 0 | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%- 0d|%%- 0d||%%- 05d|%%- 05d||%%- 01d|%%- 01d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%- 0d|%- 0d|%- 05d|%- 05d|%- 01d|%- 01d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%- 0d|%- 0d|%- 05d|%- 05d|%- 01d|%- 01d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	//Flag + is ignored when Flag ' ' is present
	printf("===============  \033[33mTEST %d | Width | Flag ' ' && + | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%- +d|%%- +d||%%- +5d|%%- +5d||%%- +1d|%%- +1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%- +d|%- +d|%- +5d|%- +5d|%- +1d|%- +01d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%- +d|%- +d|%- +5d|%- +5d|%- +1d|%- +01d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Width | Flag 0 && + | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-0+d|%%-0+d||%%-0+5d|%%-0+5d||%%-0+1d|%%-0+1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%-+0d|%-+0d|%-+05d|%-+05d|%-+01d|%-+01d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%-+0d|%-+0d|%-+05d|%-+05d|%-+01d|%-+01d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Width | Flag 0 && + && ' ' | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%- 0+d|%%- 0+d||%%- 0+5d|%%- 0+5d||%%- 0+1d|%%- 0+1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%- +0d|%- +0d|%- +05d|%- +05d|%- +01d|%- +01d|\n", 42, -42, 42, -42, 42, -42);
    y =        printf("the printf: |%- +0d|%- +0d|%- +05d|%- +05d|%- +01d|%- +01d|\n", 42, -42, 42, -42, 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


    printf("===============  \033[33mTEST %d | Precision \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%.d|%%.d||%%5.d|%%5.d||%%8.d|%%8.d||%%1.d|%%1.d|\033[0m arg: \033[36m 42506, -42506\033[0m \n");
	x =     ft_printf("my  printf: |%.d|%.d||%5.d|%5.d||%8.d|%8.d||%1.d|%1.d|\n", 42506, -42506, 42506, -42506, 42506, -42506, 42506, -42506);
    y =        printf("the printf: |%.d|%.d||%5.d|%5.d||%8.d|%8.d||%1.d|%1.d|\n", 42506, -42506, 42506, -42506, 42506, -42506, 42506, -42506);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Width >= Precision \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%9.2d|%%9.2d||%%9.3d|%%9.3d||%%9.4d|%%9.4d||%%9.6d|%%9.6d||%%9.9d|%%9.9d|\033[0m arg: \033[36m 150, -150 \033[0m \n");
	x =     ft_printf("my  printf: |%9.2d|%9.2d||%9.3d|%9.3d||%9.4d|%9.4d||%9.6d|%9.6d||%9.9d|%9.9d|\n", 150, -150, 150, -150, 150, -150, 150, -150, 150, -150);
    y =        printf("the printf: |%9.2d|%9.2d||%9.3d|%9.3d||%9.4d|%9.4d||%9.6d|%9.6d||%9.9d|%9.9d|\n", 150, -150, 150, -150, 150, -150, 150, -150, 150, -150);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Precision >= Width \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%2.9d|%%2.9d||%%3.9d|%%3.9d||%%4.9d|%%4.9d||%%6.9d|%%6.9d||%%9.9d|%%9.9d|\033[0m arg: \033[36m 150, -150 \033[0m \n");
	x =     ft_printf("my  printf: |%2.9d|%2.9d||%3.9d|%3.9d||%4.9d|%4.9d||%6.9d|%6.9d||%9.9d|%9.9d|\n", 150, -150, 150, -150, 150, -150, 150, -150, 150, -150);
    y =        printf("the printf: |%2.9d|%2.9d||%3.9d|%3.9d||%4.9d|%4.9d||%6.9d|%6.9d||%9.9d|%9.9d|\n", 150, -150, 150, -150, 150, -150, 150, -150, 150, -150);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Width >= Precision | Flag 0 \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%09.2d|%%09.2d||%%09.3d|%%09.3d||%%09.4d|%%09.4d||%%09.6d|%%09.6d||%%09.9d|%%09.9d|\033[0m arg: \033[36m 150, -150 \033[0m \n");
	x =     ft_printf("my  printf: |%09.2d|%09.2d||%09.3d|%09.3d||%09.4d|%09.4d||%09.6d|%09.6d||%09.9d|%09.9d|\n", 150, -150, 150, -150, 150, -150, 150, -150, 150, -150);
    y =        printf("the printf: |%09.2d|%09.2d||%09.3d|%09.3d||%09.4d|%09.4d||%09.6d|%09.6d||%09.9d|%09.9d|\n", 150, -150, 150, -150, 150, -150, 150, -150, 150, -150);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


	//5

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%09.2d\033[0m arg: \033[36m -15\033[0m \n");
	x =     ft_printf("my  printf: |%09.2d|\n", -15);
    y =        printf("the printf: |%09.2d|\n", -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%09.4d|%%-09.4d|\033[0m arg: \033[36m -15, -15\033[0m \n");
	x =     ft_printf("my  printf: |%09.4d|%-09.4d|\n", -15, -15);
    y =        printf("the printf: |%09.4d|%-09.4d|\n", -15, -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%4.2d|%%-4.2d|\033[0m arg: \033[36m 32, -32\033[0m \n");
	x =     ft_printf("my  printf: |%4.2d|%-4.2d|\n", 32, -32);
    y =        printf("the printf: |%4.2d|%-4.2d|\n", 32, -32);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%-09.4d\033[0m arg: \033[36m 15\033[0m \n");
	x =     ft_printf("my  printf: |%-09.4d|\n", 15);
    y =        printf("the printf: |%-09.4d|\n", 15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%-4.9d |%%4.9d |\033[0m arg: \033[36m 15, -15\033[0m \n");
	x =     ft_printf("my  printf: |%-4.9d |%4.9d |\n", -15, -15);
    y =        printf("the printf: |%-4.9d |%4.9d |\n", -15, -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	//10

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%d|%%-5d|%%-5d|%%.4d|\033[0m arg: \033[36m -15, 42\033[0m \n");
	x =     ft_printf("my  printf: |%d|%5d|%-5d|%.4d|\n", 42, 42, 42, 42);
    y =        printf("the printf: |%d|%5d|%-5d|%.4d|\n", 42, 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-0.5d|%%-10.4d|%%-15.10d|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
	x =     ft_printf("my  printf: |%-0.5d|%-10.4d|%-15.10d|\n", 42, 42, 42);
    y =        printf("the printf: |%-0.5d|%-10.4d|%-15.10d|\n", 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-0.5d|%%-10.4d|%%-15.10d|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
	x =     ft_printf("my  printf: |%-0.5d|%-10.4d|%-15.10d|\n", 42, 42, 42);
    y =        printf("the printf: |%-0.5d|%-10.4d|%-15.10d|\n", 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%8.2d|%%8.2d|\033[0m arg: \033[36m 142, 142142142\033[0m \n");
	x =     ft_printf("my  printf: |%8.2d|%8.2d|\n", 142, 142142142);
    y =        printf("the printf: |%8.2d|%8.2d|\n", 142, 142142142);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%09.2d|%%09.2d|\033[0m arg: \033[36m 150, -150 \033[0m \n");
	x =     ft_printf("my  printf: |%09.2d|%09.2d|\n", 150, -150);
    y =        printf("the printf: |%09.2d|%09.2d|\n", 150, -150);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	// 15

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+d|%%+d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |%+d|%d|\n", 42, -42);
    y =        printf("the printf: |%+d|%d|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+.4d|%%+.4d|\033[0m arg: \033[36m 42506, -42506\033[0m \n");
	x =     ft_printf("my  printf: |%+.4d|%+.4d|\n", 42506, -42506);
    y =        printf("the printf: |%+.4d|%+.4d|\n", 42506, -42506);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+2.4d|%%+2.4d|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	x =     ft_printf("my  printf: |%+2.4d|%+2.4d|\n", 21, -21);
    y =        printf("the printf: |%+2.4d|%+2.4d|\n", 21, -21);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%09.2d\033[0m arg: \033[36m -15\033[0m \n");
	x =     ft_printf("my  printf: |%09.2d|\n", -15);
    y =        printf("the printf: |%09.2d|\n", -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%+09.4d|%%+-09.4d|\033[0m arg: \033[36m -15, -15\033[0m \n");
	x =     ft_printf("my  printf: |%+09.4d|%+-09.4d|\n", -15, -15);
    y =        printf("the printf: |%+09.4d|%+-09.4d|\n", -15, -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

	//20

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+4.2d|%%+-4.2d|%%+-4.2d|%%-4.2d|%%-4.2d|\033[0m arg: \033[36m 32, -32\033[0m \n");
	x =     ft_printf("my  printf: |%+4.2d|%+-4.2d|%-4.2d|%-4.2d|\n", 32, -32, 32, -32);
    y =        printf("the printf: |%+4.2d|%+-4.2d|%-4.2d|%-4.2d|\n", 32, -32, 32, -32);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag 0\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+-09.4d|%%+09.4d|%%-09.4d|%%09.4d|\033[0m arg: \033[36m 15\033[0m \n");
	x =     ft_printf("my  printf: |%+-09.4d|%+09.4d|%-09.4d|%09.4d|\n", 15, 15, 15, 15);
    y =        printf("the printf: |%+-09.4d|%+09.4d|%-09.4d|%09.4d|\n", 15, 15, 15, 15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %%+-4.9d |%%4.9d |\033[0m arg: \033[36m 15, -15\033[0m \n");
	x =     ft_printf("my  printf: |%+-4.9d |%4.9d |\n", -15, -15);
    y =        printf("the printf: |%+-4.9d |%4.9d |\n", -15, -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+d|%%+5d|%%+-5d|%%+.4d|\033[0m arg: \033[36m 42, 42, 42, 42\033[0m \n");
	x =     ft_printf("my  printf: |%+d|%+5d|%+-5d|%+.4d|\n", 42, 42, 42, 42);
    y =        printf("the printf: |%+d|%+5d|%+-5d|%+.4d|\n", 42, 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+-0.5d|%%+-10.4d|%%-15.10d|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
	x =     ft_printf("my  printf: |%+-0.5d|%+-10.4d|%+-15.10d|\n", 42, 42, 42);
    y =        printf("the printf: |%+-0.5d|%+-10.4d|%+-15.10d|\n", 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	//25

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+-0.5d|%%+-10.4d|%%+-15.10d|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
	x =     ft_printf("my  printf: |%+-0.5d|%+-10.4d|%+-15.10d|\n", 42, 42, 42);
    y =        printf("the printf: |%+-0.5d|%+-10.4d|%+-15.10d|\n", 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+8.2d|%%+8.2d|\033[0m arg: \033[36m 142, 142142142\033[0m \n");
	x =     ft_printf("my  printf: |%+8.2d|%+8.2d|\n", 142, 142142142);
    y =        printf("the printf: |%+8.2d|%+8.2d|\n", 142, 142142142);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%c|%%-8c|%%8c|\033[0m arg: \033[36m 'd', 'd', 68\033[0m \n");
	x =     ft_printf("my  printf: |%c|%-8c|%8c|\n", 'd', 'd', 68);
    y =        printf("the printf: |%c|%-8c|%8c|\n", 'd', 'd', 68);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	// 29
	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 09.2d|%% 09.2d|\033[0m arg: \033[36m 150, -150 \033[0m \n");
	x =     ft_printf("my  printf: |% 09.2d|% 09.2d|\n", 150, -150);
    y =        printf("the printf: |% 09.2d|% 09.2d|\n", 150, -150);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% d|%% d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% d|% d|\n", 42, -42);
    y =        printf("the printf: |% d|%  d|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% .4d|%% .4d|\033[0m arg: \033[36m 42506, -42506\033[0m \n");
	x =     ft_printf("my  printf: |% .4d|% .4d|\n", 42506, -42506);
    y =        printf("the printf: |% .4d|% .4d|\n", 42506, -42506);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 2.4d|%% 2.4d|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	x =     ft_printf("my  printf: |% 2.4d|% 2.4d|\n", 21, -21);
    y =        printf("the printf: |% 2.4d|% 2.4d|\n", 21, -21);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %% 09.2d\033[0m arg: \033[36m -15\033[0m \n");
	x =     ft_printf("my  printf: |% 09.2d|\n", -15);
    y =        printf("the printf: |% 09.2d|\n", -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %% 09.4d|%% -09.4d|\033[0m arg: \033[36m -15, -15\033[0m \n");
	x =     ft_printf("my  printf: |% 09.4d|% -09.4d|\n", -15, -15);
    y =        printf("the printf: |% 09.4d|% -09.4d|\n", -15, -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

	// 35

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 4.2d|%% -4.2d|\033[0m arg: \033[36m 32, -32\033[0m \n");
	x =     ft_printf("my  printf: |% 4.2d|% -4.2d|\n", 32, -32);
    y =        printf("the printf: |% 4.2d|% -4.2d|\n", 32, -32);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %% -09.4d\033[0m arg: \033[36m 15\033[0m \n");
	x =     ft_printf("my  printf: |% -09.4d|\n", 15);
    y =        printf("the printf: |% -09.4d|\n", 15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %% -4.9d |%% 4.9d |\033[0m arg: \033[36m 15, -15\033[0m \n");
	x =     ft_printf("my  printf: |% -4.9d |% 4.9d |\n", -15, -15);
    y =        printf("the printf: |% -4.9d |% 4.9d |\n", -15, -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% d|%% 5d|%% -5d|%% .4d|\033[0m arg: \033[36m -15, 42\033[0m \n");
	x =     ft_printf("my  printf: |% d|% 5d|% -5d|% .4d|\n", 42, 42, 42000, 42);
    y =        printf("the printf: |% d|% 5d|% -5d|% .4d|\n", 42, 42, 42000, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% -0.5d|%% -10.4d|%% -15.10d|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
	x =     ft_printf("my  printf: |% -0.5d|% -10.4d|% -15.10d|\n", 42, 42, 42);
    y =        printf("the printf: |% -0.5d|% -10.4d|% -15.10d|\n", 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	// 40

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% -0.5d|%% -10.4d|%% -15.10d|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
	x =     ft_printf("my  printf: |% -0.5d|% -10.4d|% -15.10d|\n", 42, 42, 42);
    y =        printf("the printf: |% -0.5d|% -10.4d|% -15.10d|\n", 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 8.2d|%% 8.2d|%% 9.2d|%% 10.2d|\033[0m arg: \033[36m 142, 142142142\033[0m \n");
	x =     ft_printf("my  printf: |% 8.2d|% 8.2d|% 9.2d|% 10.2d|\n", 142, 142142142, 142142142, 142142142);
    y =        printf("the printf: |% 8.2d|% 8.2d|% 9.2d|% 10.2d|\n", 142, 142142142, 142142142, 142142142);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 09.2d|%% 09.2d|\033[0m arg: \033[36m 150, -150 \033[0m \n");
	x =     ft_printf("my  printf: |% 09.2d|% 09.2d|\n", 150, -150);
    y =        printf("the printf: |% 09.2d|% 09.2d|\n", 150, -150);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% +d|%% +d|\033[0m arg: \033[36m 42, -42\033[0m \n");
	x =     ft_printf("my  printf: |% +d|% d|\n", 42, -42);
    y =        printf("the printf: |% +d|% d|\n", 42, -42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% +.4d|%% +.4d|\033[0m arg: \033[36m 42506, -42506\033[0m \n");
	x =     ft_printf("my  printf: |% +.4d|% +.4d|\n", 42506, -42506);
    y =        printf("the printf: |% +.4d|% +.4d|\n", 42506, -42506);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	// 45

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% +2.4d|%% +2.4d|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	x =     ft_printf("my  printf: |% +2.4d|% +2.4d|\n", 21, -21);
    y =        printf("the printf: |% +2.4d|% +2.4d|\n", 21, -21);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %% 09.2d\033[0m arg: \033[36m -15\033[0m \n");
	x =     ft_printf("my  printf: |% 09.2d|\n", -15);
    y =        printf("the printf: |% 09.2d|\n", -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %% +09.4d|%% +-09.4d|\033[0m arg: \033[36m -15, -15\033[0m \n");
	x =     ft_printf("my  printf: |% +09.4d|% +-09.4d|\n", -15, -15);
    y =        printf("the printf: |% +09.4d|% +-09.4d|\n", -15, -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

    ft_putchar('\n');

    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% +4.2d|%% +-4.2d|\033[0m arg: \033[36m 32, -32\033[0m \n");
	x =     ft_printf("my  printf: |% +4.2d|% +-4.2d|\n", 32, -32);
    y =        printf("the printf: |% +4.2d|% +-4.2d|\n", 32, -32);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %% +-09.4d\033[0m arg: \033[36m 15\033[0m \n");
	x =     ft_printf("my  printf: |% +-09.4d|\n", 15);
    y =        printf("the printf: |% +-09.4d|\n", 15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	// 50

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m %% +-4.9d |%% 4.9d |\033[0m arg: \033[36m 15, -15\033[0m \n");
	x =     ft_printf("my  printf: |% +-4.9d |% 4.9d |\n", 15, -15);
    y =        printf("the printf: |% +-4.9d |% 4.9d |\n", 15, -15);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% +d|%% +5d|%% +-5d|%% +.4d|\033[0m arg: \033[36m 42, 42, 42, 42\033[0m \n");
	x =     ft_printf("my  printf: |% +d|% +5d|% +-5d|% +.4d|\n", 42, 42, 42, 42);
    y =        printf("the printf: |% +d|% +5d|% +-5d|% +.4d|\n", 42, 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% +-0.5d|%% +-10.4d|%% -15.10d|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
	x =     ft_printf("my  printf: |% +-0.5d|% +-10.4d|% +-15.10d|\n", 42, 42, 42);
    y =        printf("the printf: |% +-0.5d|% +-10.4d|% +-15.10d|\n", 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% +-0.5d|%% +-10.4d|%% +-15.10d|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
	x =     ft_printf("my  printf: |% +-0.5d|% +-10.4d|% +-15.10d|\n", 42, 42, 42);
    y =        printf("the printf: |% +-0.5d|% +-10.4d|% +-15.10d|\n", 42, 42, 42);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% +8.2d|%% +8.2d|\033[0m arg: \033[36m 142, 142142142\033[0m \n");
	x =     ft_printf("my  printf: |% +8.2d|% +8.2d|\n", 142, 142142142);
    y =        printf("the printf: |% +8.2d|% +8.2d|\n", 142, 142142142);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	// 55

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% c|%% -8c|%%8c|\033[0m arg: \033[36m 'd', 'd', 68\033[0m \n");
	x =     ft_printf("my  printf: |% c|% -8c|%8c|\n", 'd', 'd', 68);
    y =        printf("the printf: |% c|% -8c|%8c|\n", 'd', 'd', 68);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 08c|%%08c|%% -8c|%%8c|\033[0m arg: \033[36m 'd', 'd', 68\033[0m \n");
	x =     ft_printf("my  printf: |% 08c|%08c|% -8c|%8c|\n",'y' ,'d', 'd', 68);
    y =        printf("the printf: |% 08c|%08c|% -8c|%8c|\n",'y' ,'d', 'd', 68);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%09.d|%%09.2d|%% 9.d|%% 9.2d|%%+9.d|%%+9.2d|%%-9.d|%%-9.2d|\033[0m arg: \033[36m 0, -150 \033[0m \n");
	x =     ft_printf("my  printf: |%09.d|%09.2d|% 9.d|% 9.2d|%+9.d|%+9.2d|%-9.d|%-9.2d|\n", 0, 0, 0, 0, 0, 0, 0, 0);
    y =        printf("the printf: |%09.d|%09.2d|% 9.d|% 9.2d|%+9.d|%+9.2d|%-9.d|%-9.2d|\n", 0, 0, 0, 0, 0, 0, 0, 0);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Integer | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+d||\033[0m arg: \033[36m 0, 42424242, -42424242 \033[0m \n");
	x =     ft_printf("my  printf: |%+d||%+d||%+d|\n", 0, 42424242, -42424242);
    y =        printf("the printf: |%+d||%+d||%+d|\n", 0, 42424242, -42424242);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Integer | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+010i||\033[0m arg: \033[36m 0, 42424242, -42424242 \033[0m \n");
	x =     ft_printf("my  printf: |%+010i||%+010i||%+010i|\n", 0, 42424242, -42424242);
    y =        printf("the printf: |%+010i||%+010i||%+010i|\n", 0, 42424242, -42424242);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Integer | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+05.i||%%-+05.i||%%+010.i||%%+010.i|\033[0m arg: \033[36m 0, 42424242, -42424242 \033[0m \n");
	x =     ft_printf("my  printf: |%+05.i||%-+05.i||%+010.i||%+010.i|\n", 0, 0, 42424242, -42424242);
    y =        printf("the printf: |%+05.i||%-+05.i||%+010.i||%+010.i|\n", 0, 0, 42424242, -42424242);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Integer | Flag +\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%03.2d|\033[0m arg: \033[36m -1 \033[0m \n");
	y =ft_printf("%03.2d\n", -1);
	x = printf("%03.2d\n", -1);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");


	printf("===============  \033[33mTEST %d | Integer | Flag 0\033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%010i|%%010i|\033[0m arg: \033[36m 42424242, -42424242 \033[0m \n");
	x =     ft_printf("my  printf: |%010i|%010i|\n", 42424242, -42424242);
    y =        printf("the printf: |%010i|%010i|\n", 42424242, -42424242);
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

		
	printf("++++++++++++++++++++ TESTS CHIANTS AVEC DES 0 ++++++++++++++++\n\n");

	printf("===============  \033[31mTEST %d | decimal with res 0  \033[0m  ===============\n\n", i++);
	y =ft_printf("|%-5.d|%-5.15d|%-5d|%5.15d|%15.5d|%-15.5d|%0.d|%0.0d|%.0d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 );
	x = printf("|%-5.d|%-5.15d|%-5d|%5.15d|%15.5d|%-15.5d|%0.d|%0.0d|%.0d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d | decimal with res 0 | Flag ' ' \033[0m  ===============\n\n", i++);
	y =ft_printf("hello |%.d|%d|%5d|%5.d|%-5.d|%5.3d|%3.5d|%-5.3d|%-3.5d| this is a test  |%.d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	x = printf("hello |%.d|%d|%5d|%5.d|%-5.d|%5.3d|%3.5d|%-5.3d|%-3.5d| this is a test  |%.d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");


	printf("===============  \033[31mTEST %d | decimal with res 0 | Flag ' ' \033[0m  ===============\n\n", i++);
	y =ft_printf("|% -5.d|% -5.15d|% -5d|% 5.15d|% 15.5d|% -15.5d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	x = printf("|% -5.d|% -5.15d|% -5d|% 5.15d|% 15.5d|% -15.5d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d | decimal with res 0 | Flag ' ' \033[0m  ===============\n\n", i++);
	y =ft_printf("hello |%.d|% d|% 5d|% 5.d|% -5.d|% 5.3d|% 3.5d|% -5.3d|% -3.5d| this is a test  |% .d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 15);
	x = printf("hello |%.d|% d|% 5d|% 5.d|% -5.d|% 5.3d|% 3.5d|% -5.3d|% -3.5d| this is a test  |% .d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 15);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("{% 03d}{% 03d}{% 05d}{% 05d}{%03d}{%03d}{%05d}{%05d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
	x = printf("{% 03d}{% 03d}{% 05d}{% 05d}{%03d}{%03d}{%05d}{%05d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");


	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("{% 03d}{% 03d}{% 05d}{% 05d}{%03d}{%03d}{%05d}{%05d}\n", 0, -4, 0, -4, 0, -4, 0, -4);
	x = printf("{% 03d}{% 03d}{% 05d}{% 05d}{%03d}{%03d}{%05d}{%05d}\n", 0, -4, 0, -4, 0, -4, 0, -4);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
//68
	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("{% 03.d}{% 03.d}{% 05.d}{% 05.d}{%03.d}{%03.d}{%05.d}{%05.d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
	x = printf("{% 03.d}{% 03.d}{% 05.d}{% 05.d}{%03.d}{%03.d}{%05.d}{%05.d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
//69
printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("{% 03.1d}{% 03.1d}{% 05.1d}{% 05.1d}{%03.1d}{%03.1d}{%05.1d}{%05.1d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
	x = printf("{% 03.1d}{% 03.1d}{% 05.1d}{% 05.1d}{%03.1d}{%03.1d}{%05.1d}{%05.1d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

// 70
printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("{% 03.2d}{% 03.2d}{% 05.2d}{% 05.2d}{%03.2d}{%03.2d}{%05.2d}{%05.2d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
	x = printf("{% 03.2d}{% 03.2d}{% 05.2d}{% 05.2d}{%03.2d}{%03.2d}{%05.2d}{%05.2d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("{% 03.3d}{% 03.3d}{% 05.3d}{% 05.3d}{%03.3d}{%03.3d}{%05.3d}{%05.3d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
	x = printf("{% 03.3d}{% 03.3d}{% 05.3d}{% 05.3d}{%03.3d}{%03.3d}{%05.3d}{%05.3d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("{% 03.4d}{% 03.4d}{% 05.4d}{% 05.4d}{%03.4d}{%03.4d}{%05.4d}{%05.4d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
	x = printf("{% 03.4d}{% 03.4d}{% 05.4d}{% 05.4d}{%03.4d}{%03.4d}{%05.4d}{%05.4d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");


	return (0);
}
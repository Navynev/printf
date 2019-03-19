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

int main(void)
{
	int		i;
	int		x;
	int		y;

	i = 1;

	printf("===============  \033[33mTEST %d | Precision 0 and Width \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%18.0s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	x =     ft_printf("my  printf: |%18.0s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
    y =        printf("the printf: |%18.0s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');
	
	// 1
	printf("===============  \033[33mTEST %d | Basic \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%s|%%slol|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!' \033[0m \n");
	x =     ft_printf("my  printf: |%s|%slol|\n", "Salut 123!", "Salut 123!");
    y =        printf("the printf: |%s|%slol|\n", "Salut 123!", "Salut 123!");
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

    printf("===============  \033[33mTEST %d | Width \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%15s|%%8s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	x =     ft_printf("my  printf: |%15s|%8s|\n", "Salut 123!", "Salut 123!");
    y =        printf("the printf: |%15s|%8s|\n", "Salut 123!", "Salut 123!");
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Precision \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%.15s|%%.3s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	x =     ft_printf("my  printf: |%.15s|%.3s|\n", "Salut 123!", "Salut 123!");
    y =        printf("the printf: |%.15s|%.3s|\n", "Salut 123!", "Salut 123!");
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');


	printf("===============  \033[33mTEST %d | Precision 0 and Width \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%.s|%%.0s|%%18.s|%%18.0s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	x =     ft_printf("my  printf: |%.s|%.0s|%18.s|%18.0s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
    y =        printf("the printf: |%.s|%.0s|%18.s|%18.0s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Precision 0 and Width | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%.s|%%.0s||%%-18.s|%%-18.0s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	x =     ft_printf("my  printf: |%.s|%.0s|%-18.s|%-18.0s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
    y =        printf("the printf: |%.s|%.0s|%-18.s|%-18.0s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%-15s|%%-8s||%%-.15s|%%-.3s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	x =     ft_printf("my  printf: |%-15s|%-8s||%-.15s|%-.3s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
    y =        printf("the printf: |%-15s|%-8s||%-.15s|%-.3s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag 0 \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%015s|%%08s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	x =     ft_printf("my  printf: |%015s|%08s|\n", "Salut 123!", "Salut 123!");
    y =        printf("the printf: |%015s|%08s|\n", "Salut 123!", "Salut 123!");
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Precision 0 and Width | Flag 0 | Flag - \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%0.s|%%0.0s||%%018.s|%%018.0s||%%0-18.s|%%0-18.0s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	x =     ft_printf("my  printf: |%0.s|%0.0s|%018.s|%018.0s|%0-18.s|%0-18.0s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
    y =        printf("the printf: |%0.s|%0.0s|%018.s|%018.0s|%0-18.s|%0-18.0s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag + \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%+15s|%%+08s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	x =     ft_printf("my  printf: |%+15s|%+8s|\n", "Salut 123!", "Salut 123!");
    y =        printf("the printf: |%+15s|%+8s|\n", "Salut 123!", "Salut 123!");
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag # \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%%#15s|%%#08s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	x =     ft_printf("my  printf: |%#15s|%#8s|\n", "Salut 123!", "Salut 123!");
    y =        printf("the printf: |%#15s|%#8s|\n", "Salut 123!", "Salut 123!");
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	printf("===============  \033[33mTEST %d | Flag ' ' \033[0m  ===============\n\n", i++);
    printf("test: \033[36m |%% 15s|%% 08s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	x =     ft_printf("my  printf: |% 15s|% 8s|\n", "Salut 123!", "");
    y =        printf("the printf: |% 15s|% 8s|\n", "Salut 123!", "");
	printf("my  printf return = %d\n", x);
	printf("the printf return = %d\n", y);
	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");

	ft_putchar('\n');

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uint_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelhomm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 10:54:00 by ndelhomm          #+#    #+#             */
/*   Updated: 2019/02/28 17:08:43 by ndelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    print_uint(t_struct *t, long long res)
{	
    t->plus = 0;
    t->space = 0;
    t->base = 10;
    t->uns  = 1;
    print_decimal(t, res);
}


void	manage_uint(t_struct *t, va_list args)
{
	unsigned long long int res;

    if (t->length == l)
        res = va_arg(args, unsigned long int);
    else if (t->length == ll)
        res = va_arg(args, unsigned long long int);
    else
        res = va_arg(args, unsigned int);
    print_uint(t, res);
}


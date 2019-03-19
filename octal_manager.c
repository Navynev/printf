/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   octal_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelhomm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 10:54:00 by ndelhomm          #+#    #+#             */
/*   Updated: 2019/02/28 17:08:43 by ndelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    print_o(t_struct *t, long long res)
{
    unsigned int	l;
	int 			blanks;
	int 			zeros;

	l = ft_intlen_base(res, t->base);
    if (t->width > t->precision && t->width > l)
    {
        blanks = t->width - l - 1;
        if (res && !t->sharp)   
            put_chars_ret(1, t, ZERO);
        put_chars_ret(blanks, t, BLANK);
        if (t->sharp)
        {
            if (!res)
                put_chars_ret(1, t, BLANK);
            else
                put_chars_ret(1, t, ZERO);
        }
        putstr_ret(ft_itoa_base(res, t->base), t);
    }
    else if (t-> width < t->precision && t->precision > l)
    {
        zeros = t->precision - l;
        put_chars_ret(zeros, t, ZERO);
        putstr_ret(ft_itoa_base(res, t->base), t);
    }
    else
    {
        put_chars_ret(1, t, ZERO);
        print_decimal(t, res);
    }    
}

void    print_o_left(t_struct *t, long long res)
{
    unsigned int	l;
	int 			blanks;
	int 			zeros;

    l = ft_intlen_base(res, t->base);
    if (t->width > t->precision && t->width > l)
    {
        put_chars_ret(1, t, ZERO);
        zeros = t->precision - l - 1;
        zeros = (zeros < 0) ? 0 : zeros;
        put_chars_ret(zeros, t, ZERO);
        putstr_ret(ft_itoa_base(res, t->base), t);
        blanks = t->width - 1 - zeros - l;
        put_chars_ret(blanks, t, BLANK);
    }
    else
        print_o(t, res); 
}

void    print_octal(t_struct *t, long long res)
{	
    t->plus = 0;
    t->space = 0;
    t->base = 8;
    if (!t->sharp)
        print_decimal(t, res);
    else if (t->sharp && t->minus)
        print_o_left(t, res);
    else
        print_o(t, res);
}


void	manage_octal(t_struct *t, va_list args)
{
	long long int   res;
    unsigned char c;

    if (t->length == hh)
    {
        c = va_arg(args, int);
        print_octal(t, c);
    }
    else
    {
        if (t->length == l)
            res = va_arg(args, unsigned long int);
        else if (t->length == ll)
            res = va_arg(args, unsigned long long int);
        else
            res = va_arg(args, unsigned int);
        print_octal(t, res);
    }
}


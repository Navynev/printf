/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:28:53 by jbrisset          #+#    #+#             */
/*   Updated: 2019/02/25 14:29:00 by jbrisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    print_hex(t_struct *t, long long res)
{
    unsigned int	l;
	int 			blanks;
	int 			zeros;

	l = ft_uintlen_base(res, t->base);
    if (t->width > t->precision)
    {
        if (t->precision < l)
        {
            if (t->zero && !t->got_precision)
            {
                putstr_ret("0X", t);
                zeros = t->width - l - 2;
                put_chars_ret(zeros, t, ZERO);
            }
            else   
            {
                blanks = t->width - l - 2;
                put_chars_ret(blanks, t, BLANK);
                putstr_ret("0X", t);
            }
        }
        else
        {
                zeros = t->precision - l;
                blanks = t->width - l - 2 - zeros;
                put_chars_ret(blanks, t, BLANK);
                putstr_ret("0X", t);
                put_chars_ret(zeros, t, ZERO);

        }
        putstr_ret(ft_itoa_base(res, t->base), t);
        
    }
    else if (t->width < t->precision && t->precision > l)
    {
        putstr_ret("0X", t);
        zeros = t->precision - l;
        put_chars_ret(zeros, t, ZERO);
        putstr_ret(ft_itoa_base(res, t->base), t);
    }
    else
    {
        putstr_ret("0X", t);
        print_decimal(t, res);
    }     
}

void    print_hex_left(t_struct *t, long long res)
{
    unsigned int	l;
	int 			blanks;
	int 			zeros;

	l = ft_uintlen_base(res, t->base);
    if (t->width > t->precision && t->width > l)
    {
        putstr_ret("0X", t);
        zeros = t->precision - l;
        zeros = (zeros < 0) ? 0 : zeros;
        put_chars_ret(zeros, t, ZERO);
        putstr_ret(ft_itoa_base(res, t->base), t);
        blanks = t->width - 2 - zeros - l;
        put_chars_ret(blanks, t, BLANK);
    }
    else
        print_hex(t, res);
}

void    print_hexa(t_struct *t, long long res)
{
    t->plus = 0;
    t->space = 0;
    t->base = 16;
    if (!res)
        t->sharp = 0;
    if (!t->sharp)
        print_decimal(t, res);
    else if (t->sharp && t->minus)
        print_hex_left(t, res);
    else
        print_hex(t, res);
}

void	manage_hexa(t_struct *t, va_list args)
{
	long long int res;

    if (t->length == h)
        res = va_arg(args, int);
    if (t->length == hh)
        res = va_arg(args, int);
    if (t->length == l)
        res = va_arg(args, unsigned long int);
    if (t->length == ll)
        res = va_arg(args, unsigned long long int);
    if (t->length == none)
        res = va_arg(args, unsigned int);
    print_hexa(t, res);
}
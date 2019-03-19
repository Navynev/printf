/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 13:30:18 by jbrisset          #+#    #+#             */
/*   Updated: 2019/02/28 13:57:45 by ndelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    round_fraction_double(double *f_dec, int precision)
{
    int i;

    i = 0;
    while (++i <= precision)
        *f_dec *= 10;
    *f_dec += 0.5;
    while (--i > 0)
        *f_dec /= 10;
}

char    *get_result_fl(t_struct *t, double f_res, int round_int)
{
    static char res[1000];
    long long   i_nb;
    double      f_dec;
    int         i;
    int         intlen;

    i = 0;
    ft_bzero(res, 1000);
    if (!t->precision)
        f_res += 0.5;
    i_nb = f_res;
    if (round_int)
        i_nb++;
    f_dec = f_res - i_nb;
    intlen = ft_strlen(ft_itoa_base(i_nb, 10));
    ft_strcpy(res, ft_itoa_base(i_nb, 10));
    if (t->precision || t->sharp)
        res[intlen] = '.';
    round_fraction_double(&f_dec, t->precision);
    while ((++i + intlen) <= t->precision + intlen)
    {
        f_dec *= 10;
        i_nb = f_dec;
        f_dec = f_dec - i_nb;
        res[i + intlen] = i_nb + '0';
    }
    if (error_in_rounding(&res))
        return (get_result_fl(t, f_res, 1));
    return (res);
}


void    print_fl(t_struct *t, double res)
{
    int             len;
	char			sign;
    char            fill;

    len = 0;
    if (res < 0)
    {
        sign = '-';
        res *= -1;
        len++;
    }
    else 
    {
        sign = '+';
        if (t->plus)
            len++;
    }
	len += ft_strlen(get_result_fl(t, res, 0));
    if (t->width > len)
    {
        fill = (t->zero ? ZERO : BLANK);
        if (!t->zero)
        {
            put_chars_ret(t->width - len, t, fill);
            if (sign == '-' || (sign == '+' && t->plus))
                put_chars_ret(1, t, sign);
            putstr_ret(get_result_fl(t, res, 0), t);
        }
        else
        {
            if (sign == '-' || (sign == '+' && t->plus))
                put_chars_ret(1, t, sign);
            put_chars_ret(t->width - len, t, fill);
            putstr_ret(get_result_fl(t, res, 0), t);
        }
    }
    else
    {
        if (sign == '-')
            put_chars_ret(1, t, sign);
        else
        {    
            if (t->space)
                put_chars_ret(1, t, BLANK);
            else if (t->plus)
                put_chars_ret(1, t, sign);
        }
        putstr_ret(get_result_fl(t, res, 0), t);
    }
}   

void    print_fl_left(t_struct *t, double res)
{
    int     len;
	char    sign;
    double  res_init;

    res_init = res;
    len = 0;
    if (res < 0)
    {
        sign = '-';
        res *= -1;
        len++;
    }
    else 
    {
        sign = '+';
        if (t->plus)
            len++;
    }
	len += ft_strlen(get_result_fl(t, res, 0));
    if (t->width > len)
    {
        if (sign == '-' || (sign == '+' && t->plus))
            put_chars_ret(1, t, sign);
        putstr_ret(get_result_fl(t, res, 0), t);
        put_chars_ret(t->width - len, t, BLANK);
    }
    else
        print_fl(t, res_init);
}

void    manage_float(t_struct *t, va_list args)
{
	double      res;
    long double ldbl;

    if (!t->got_precision)
        t->precision = 6;
    if ((res < 0 && t->space) || (t->plus && t->space))
        t->space = 0;
    if (t->length == L)
    {
        ldbl = va_arg(args, long double);
        print_long_double(t, ldbl);
    }
    else
    {
        res = va_arg(args, double);
        if (!t->minus)
            print_fl(t, res);
        else
        print_fl_left(t, res);
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal_manager.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 13:30:18 by jbrisset          #+#    #+#             */
/*   Updated: 2019/03/09 10:47:04 by ndelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	put_sign(t_struct *t, long long res)
{
	char	sign;

	if (res < 0 && t->base == 10)
		sign = '-';
	else if (t->space && !t->plus && res >= 0)
	{
		sign = ' ';
		//ft_putstr("D");
	}
    else if ((t->plus || (t->plus && t->space)) && res >= 0 && t->base == 10) 
		 sign = '+';
	else
		sign = 0;
    put_chars_ret(1, t, sign); //pas oblige de le putchar tout de suite
}

void	put_zero_flag(t_struct *t, long long res)
{
	unsigned int	l;
	unsigned int	l_init;
	int 			zeros;
	t_struct		tmp;

	tmp = (*t);
	l_init = ft_intlen_base(res, t->base);
	l = get_len_base(res, t);
	if (t->plus && res < 0)
		tmp.plus = 0;
	if (t->zero && t->minus)
		t->zero = 0;
	if (t->zero && t->got_precision)
		t->zero = 0;
	if (t->zero && l_init < t->width)
	{
		if (t->plus || res < 0)
		{
			//ft_putstr("L");
			zeros = t->width - l_init - tmp.plus;
		}
		else 
			zeros = t->width - l_init - t->space;
		put_chars_ret(zeros, t, ZERO);
	}
}

void	put_zero_precision(t_struct *t, long long res)
{
	unsigned int	l;
	int 			zeros;

	l = get_len_base(res, t);
	if (l < t->precision)
	{
		if (!t->minus)
			t->width = 0;
		zeros = t->precision - l;
		put_chars_ret(zeros, t, ZERO);
	}
}

void	put_blank_left(t_struct *t, long long res)
{
	unsigned int	l;
	unsigned int	l_init;
	int 			blanks;
	t_struct		tmp;

	tmp = (*t);
	l_init = ft_intlen_base(res, t->base);
	l = get_len_base(res, t);
	
	//cas de base
	if (t->space && (res < 0 || t->plus)) //le flag space est ignore quand il y a un signe neg ou pos
		tmp.space = 0;
	if (t->plus && res < 0) // le flag + est ignore quand il y a un signe negatif
		tmp.plus = 0;
	if (t->width > t->precision && t->precision >= l_init)
	{
		//ft_putstr("A");
		if (res < 0)
			blanks = t->width - t->precision - 1 - tmp.space;//on enleve 1 pour le signe -
		else
			blanks = t->width - t->precision - tmp.space - tmp.plus;
	}

	//avec flag 0, les blanks sont remplaces par des 0
	else if (t->width > l_init && t->zero)
	{
		if (t->got_precision && t->precision < l_init)
			blanks = t->width - l_init - tmp.space - tmp.plus;// meme phrase en bas
		else
			blanks = 0;
	}
	else
	{
		//ft_putstr("J");
		blanks = t->width - l_init - tmp.space - tmp.plus; //sil y a t->space, on a deja mis le space dans put_sign
	}
	if (t->precision >= t->width)
		blanks = 0;
	
	put_chars_ret(blanks, t, BLANK);
}

void	put_blank_right(t_struct *t, long long res)
{

	int 	blanks;
	unsigned int	l_init;
	t_struct		tmp;

	tmp = (*t);
	if (t->space && (res < 0 || t->plus))
		tmp.space = 0; // car si le nb est neg, le flag space est ignore, ca nous laisse donc un blank en plus
	if (t->plus && res < 0)
		tmp.plus = 0; //meme raisonnement
	l_init = ft_intlen_base(res, t->base);

	if (t->width > t->precision)
	{
		if (l_init > t->precision)
			blanks = t->width - l_init - tmp.space - tmp.plus;
		else if (t->precision >= l_init && res < 0)
			blanks = t->width - t->precision - 1 - tmp.space - tmp.plus;
		else
			blanks = t->width - t->precision - tmp.space - tmp.plus;
	}
	else if (t->precision >= t->width)
		blanks = 0;
	else
		blanks = t->width - l_init - tmp.space - tmp.plus;

	put_chars_ret(blanks, t, BLANK);

}


void    print_d(t_struct *t, long long res)
{
 	unsigned int	l_init;
	int 			blanks;
	int 			zeros;
	char			sign;

	
	if (!t->minus)
	{	
		//ft_putstr("D");
			

		put_blank_left(t, res);
		put_sign(t, res);
		put_zero_flag(t, res);
		put_zero_precision(t, res);
		putstr_ret(get_itoa_base(res, t), t);
	}
	else if (t->minus)
	{
		put_sign(t, res);
		put_zero_flag(t, res);
		put_zero_precision(t, res);
		putstr_ret(get_itoa_base(res, t), t);
		put_blank_right(t, res);
	}
	
}

void	zero_manager(t_struct *t, long long res)
{
	int		blanks;
	
	// le flag space + 0 se gere dans print_d
	if (t->got_precision && !t->precision && !t->space && !t->plus && !t->width)
	{
		//ft_putstr("U");
		putstr_ret("", t);
	}
	else if (t->got_precision && !t->precision && t->plus)
	{
		blanks = t->width - t->plus;

		if (t->width)
		{
			if (t->minus)
			{
				putstr_ret("+", t);
				put_chars_ret(blanks, t, BLANK);
			}
			else
			{
				put_chars_ret(blanks, t, BLANK);
				putstr_ret("+", t);
			}
		}
		else
		{
			putstr_ret("+", t);
		}
		
	}
	else if (t->got_precision && !t->precision && !t->width)
	{
		//ft_putstr("L");
		putstr_ret(" ", t);
	}
	else if (t->got_precision && !t->precision && t->width)
	{
		//ft_putstr("M");

		blanks = t->width;
		put_chars_ret(blanks, t, BLANK);
	}
	else
	{
		//ft_putstr("E");
		print_d(t, res);
	}
	
}

void    print_decimal(t_struct *t, long long res)
{
        if (res == 0)
			zero_manager(t, res);
		else
			print_d(t, res);
}

void	manage_decimal(t_struct *t, va_list args)
{
	long long	res;

    if (t->length == l)
        res = va_arg(args, long int);
    else if (t->length == ll)
        res = va_arg(args, long long int);
    else
        res = va_arg(args, int);
	t->base = 10;
    print_decimal(t, res);
}
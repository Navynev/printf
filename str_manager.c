/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_manager.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelhomm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 13:47:07 by ndelhomm          #+#    #+#             */
/*   Updated: 2019/03/12 15:35:26 by ndelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	put_strings_ret(int l, t_struct *t, char *str)
{
	if (t->precision > 0 && t->precision < l)
	{
		l = t->precision;
		while (l--)
			put_chars_ret(1, t, *str++);
	}
	else
		while (*str)
			put_chars_ret(1, t, *str++);
}

void	precision_zero(t_struct *t, char *res, int blanks)
{
	int zeros;

	if (t->width && t->minus)
	{
		blanks = t->width;
		put_chars_ret(blanks, t, BLANK);
	}
	else if (t->width && !t->minus)
	{
		if (t->zero)
		{
			zeros = t->width;
			put_chars_ret(zeros, t, ZERO);
		}
		else
		{
			blanks = t->width;
			put_chars_ret(blanks, t, BLANK);
		}
	}
	ft_putstr("");
}

void	print_s_left(t_struct *t, char *res)
{
	int blanks;
	int l;

	l = ft_strlen(res);
	if (!t->precision && t->got_precision)
		precision_zero(t, res, blanks);
	else if (t->width > l)
	{
		put_strings_ret(l, t, res);
		blanks = t->width - l;
		put_chars_ret(blanks, t, BLANK);
	}
	else
		put_strings_ret(l, t, res);
}

void	print_s(t_struct *t, char *res)
{
	int l;
	int blanks;
	int zeros;

	l = ft_strlen(res);
	if (!t->precision && t->got_precision)
		precision_zero(t, res, blanks);
	else if (t->width > l)
	{
		if (t->zero)
		{
			zeros = t->width - l;
			put_chars_ret(zeros, t, ZERO);
		}
		else
		{
			blanks = (t->precision && t->precision < l ?
			t->width - t->precision : t->width - l);
			put_chars_ret(blanks, t, BLANK);
		}
		put_strings_ret(l, t, res);
	}
	else
		put_strings_ret(l, t, res);
}

void	manage_str(t_struct *t, va_list args)
{
	char *res;

	res = va_arg(args, char*);
	if (!res)
		return ;
	if (t->minus)
		print_s_left(t, res);
	else
		print_s(t, res);
}

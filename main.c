/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 13:47:07 by jbrisset          #+#    #+#             */
/*   Updated: 2019/02/28 11:18:18 by ndelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_struct(t_struct *t)
{
	t->minus = 0;
	t->plus = 0;
	t->space = 0;
	t->sharp = 0;
	t->got_precision = 0;
	t->precision = 0;
	t->zero = 0;
	t->width = 0;
	t->base = 0;
	t->length = none;
	t->lower = 0;
	t->uns = 0;
}

int		ft_islength(char c)
{
	if (c == 'h' || c == 'l' || c == 'L')
		return (1);
	return (0);
}

void	set_length(char const *format, t_struct *t)
{
	char	curr;
	char	next;

	curr = format[t->i];
	next = format[t->i + 1];
	if (curr == 'h')
	{
		if (next == 'h')
			t->length = hh;
		else
			t->length = h;
	}
	else if (curr == 'l')
	{
		if (next == 'l')
			t->length = ll;
		else
			t->length = l;
	}
	else if (curr == 'L')
		t->length = L;
	while (!(ft_strchr("diouxXscpf", format[t->i])))
		t->i++;
}

void	modif_handler(char const *format, t_struct *t)
{
	if (format[t->i] == ' ')
		t->space = 1;
	if (format[t->i] == '-')
		t->minus = 1;
	if (format[t->i] == '+')
		t->plus = 1;
	if (format[t->i] == '#')
	 	t->sharp = 1;
	if (format[t->i] == '.')
		t->got_precision = 1;
	if (format[t->i] == '0' && !t->got_precision)
			t->zero = 1;
	if (ft_isdigit(format[t->i]))
	{
		if (t->got_precision)
			t->precision = ft_atoi(&format[t->i]);
		else if (!(t->got_precision))
			t->width = ft_atoi(&format[t->i]);
		while (ft_isdigit(format[t->i + 1]))
			t->i++;
	}
	if (ft_islength(format[t->i]))
		set_length(format, t);
}

void	spec_handler(const char *format, t_struct *t, va_list args)
{
	if (format[t->i] == 'd' || format[t->i] == 'i')
		manage_decimal(t, args);
	if (format[t->i] == 'o')
		manage_octal(t, args);
	if (format[t->i] == 'u')
		manage_uint(t, args);
	if (format[t->i] == 'x' || format[t->i] == 'X')
	{
		t->lower = (format[t->i] == 'x' ? 1 : 0);
		manage_hexa(t, args);
	}
	if (format[t->i] == 'c')
		manage_char(t, args);
	if (format[t->i] == 's')
		manage_str(t, args);
	if (format[t->i] == 'f')
		manage_float(t, args);
	if (format[t->i] == 'p')
		manage_ptr(t, args);
}

void	format_handler(const char *format, t_struct *t, va_list args)
{
	t->i = 0;
	t->ret = 0;
	while (format[t->i])
	{
		if (format[t->i] == '%')
		{
			init_struct(t);
			t->i++;
			while (format[t->i] && !ft_strchr("diouxXscpf", format[t->i - 1]) && format[t->i] != '%')
			{
				if (ft_strchr(" -+#.0123456789hlL", format[t->i]))
					modif_handler(format, t);
				if (ft_strchr("diouxXscpf", format[t->i]))
					spec_handler(format, t, args);
				t->i++;
			}
		}
		if (format[t->i] != '%' || (format[t->i] == '%'
			&& !ft_strchr("diouxXscpf", format[t->i - 1])))
		{
			ft_putchar(format[t->i]);
			t->ret++;
			t->i++;
		}
	}
}

int		ft_printf(const char *format, ...)
{
	t_struct	t;
	va_list args;

	va_start(args, format);
	format_handler(format, &t, args);
	va_end(args);
    return (t.ret);
} 

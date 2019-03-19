/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal_manager.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 13:30:18 by jbrisset          #+#    #+#             */
/*   Updated: 2019/02/28 13:57:45 by ndelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	put_chars_ret(int nb, t_struct *t, char c)
{
	while (nb > 0)
	{
		
		ft_putchar(c);
		if (c == 0)
			t->ret += 0;
		else
			t->ret++;
		nb--;
	}
}

void	putstr_ret(char const *str, t_struct *t)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (t->lower)
			ft_putchar(ft_tolower(str[i]));
		else
			ft_putchar(str[i]);
		t->ret++;
		i++;
	}
}

int error_in_rounding(char (*res)[1000])
{
    int i;
    int error;

    i = -1;
    error = 0;
    while ((*res)[++i])
    {
        if ((*res)[i] == ':')
            error++;
    }
    return (error);
}

int		ft_abs(long long n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int		get_len_base(long long res, t_struct *t)
{
	if (t->base == 10 && !t->uns)
		return (ft_intlen_base(ft_abs(res), t->base));
	else
	{
		if (res < 0)
			res *= -1;
		return (ft_intlen_base(res, t->base));
	}	
}

char	*get_itoa_base(long long res, t_struct *t)
{
	if (t->base == 10 && !t->uns)
		return (ft_itoa_base(ft_abs(res), t->base));
	else
	{
		if (res < 0)
			res *= -1;
		return (ft_itoa_base(res, t->base));
	}		
}
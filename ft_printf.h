/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 15:03:47 by jbrisset          #+#    #+#             */
/*   Updated: 2019/02/28 11:17:01 by ndelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_PRINTF_H
# define	FT_PRINTF_H
# include "libft/libft.h"
# include <stdio.h>
# include <stdarg.h>

# define	BLANK 	' '
# define 	ZERO 	'0'
# define	MINUS	'-'


typedef struct  s_struct {
	int				i;
	int				ret;
	int				minus;
	int				plus;
	int				space;
	int				sharp;
	int				got_precision;
	unsigned int    precision;
	unsigned int    width;
	int				zero;
	int				base;
	int				lower;
	int				sign;
	int				uns;
	enum {
		none,
		hh,
		h,
		l,
		ll,
		L
	}				length;	
}				t_struct;

int		ft_printf(const char *format, ...);
char	*ft_itoa_base(long long int n, int base);
char	*get_result_d(long long res, t_struct *t);
void    print_decimal(t_struct *t, long long res);
void    print_octal(t_struct *t, long long res);
void    print_long_double(t_struct *t, long double res);
void    print_hexa(t_struct *t, long long res);

void	put_chars_ret(int nb, t_struct *t, char c);
void	putstr_ret(char const *str, t_struct *t);
int		error_in_rounding(char (*res)[1000]);
int		get_len_base(long long res, t_struct *t);
char *	get_itoa_base(long long res, t_struct *t);
int		ft_abs(long long n);

void	manage_decimal(t_struct *t, va_list args);
void	manage_octal(t_struct *t, va_list args);
void    manage_float(t_struct *t, va_list args);
void	manage_hexa(t_struct *t, va_list args);
void    manage_ptr(t_struct *t, va_list args);
void    manage_str(t_struct *t, va_list args);
void    manage_char(t_struct *t, va_list args);
void    manage_uint(t_struct *t, va_list args);
int		ft_uintlen_base(unsigned long long n, unsigned long long base);



#endif

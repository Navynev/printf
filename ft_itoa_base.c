/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelhomm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 11:08:25 by ndelhomm          #+#    #+#             */
/*   Updated: 2019/03/14 11:11:49 by ndelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* A function that converts an integer value to a null-terminated string using the specified base and stores the result in a char array that must be allocated.
 ** We won't use malloc to prevent syscall from happening, we'll use a 1024 bytes long array instead.
 */

int	ft_uintlen_base(unsigned long long n, unsigned long long base)
{
	unsigned long long int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n)
	{
		n = n / base;
		len++;
	}
	return (len);
}

void	print_itoa_base(unsigned long long nb, unsigned long long base, char *s)
{
	int		i;
	int		len;

	len = ft_uintlen_base(nb, base);
	while (len)
	{
		if (nb % base < 10 || base <= 10)
				s[len - 1] = (nb % base) + '0';
			else
				s[len - 1] = (nb % base) + 'A' - 10;
			nb /= base;	
		len--;
	}
}

char	*ft_itoa_base(long long int nb, int base)
{
	static char s[1500];
	
	ft_bzero(s, 1500);
	if (base == 10 && nb < 0)
	{
		if (nb < -9223372036854775807)
			ft_strcpy(s, "-9223372036854775808");
		else
		{
			s[0] = '-';
			print_itoa_base(-nb, base, s + 1);
		}
	}
	else
		print_itoa_base(nb, base, s);
	return (s);
}

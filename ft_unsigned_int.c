/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:08:32 by kaidda-s          #+#    #+#             */
/*   Updated: 2025/09/05 21:50:00 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_unsigned(unsigned int n)
{
	long	num;
	int		i;

	num = n;
	i = 0;
	if (num >= 10)
		i += ft_unsigned(num / 10);
	i += ft_putchar((num % 10) + '0');
	return (i);
}

int	print_unsigned(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	return (ft_unsigned(n));
}

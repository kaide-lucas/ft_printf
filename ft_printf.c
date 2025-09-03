/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:54:54 by codespace         #+#    #+#             */
/*   Updated: 2025/09/03 22:38:04 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	conversion(char spec_letter, va_list args)
{
	if (spec_letter == 'c')
		return (print_char(args));
	else if (spec_letter == '%')
		return (write(1, "%", 1));
	else if (spec_letter == 's')
		return (print_str(va_arg(args, char *)));
	else if (spec_letter == 'd')
		return (print_int(args));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			count += conversion(format[i + 1], args);
			i += 2;
		}
		else
		{
			count += ft_putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxiliaries.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:06:11 by kaidda-s          #+#    #+#             */
/*   Updated: 2025/09/03 20:18:21 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	print_char(va_list args)
{
	char	c;

	c = (char)va_arg(args, int);
	return (ft_putchar(c));
}

int	print_str(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

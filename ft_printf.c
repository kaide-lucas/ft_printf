/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:54:54 by codespace         #+#    #+#             */
/*   Updated: 2025/08/26 16:14:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_printf(const char *, ...)
{
    va_list args;
    int i;
    int count;

    i = 0;
    count = 0;
    va_start(args, format);
    while (format[i])
    {
        write(1, &format[i], 1);
        count++;
        i++;
    }
    va_end(args);
    return count;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npezzati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:35:46 by npezzati          #+#    #+#             */
/*   Updated: 2024/12/02 14:35:50 by npezzati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int     ft_printf(const char *format, ...);
int     putchar(char c);
int     putstr(const char *str);
int     putptr(void *ptr);
int     putint(int n);
int     putunsigned(unsigned int n);
int     puthex(unsigned int n, char spec);
int     putpercent(void);

#endif

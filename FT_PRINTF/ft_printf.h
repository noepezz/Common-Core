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
int     print_char(char c);
int     print_str(const char *str);
int     print_ptr(void *ptr);
int     print_int(int n);
int     print_unsigned(unsigned int n);
int     print_hex(unsigned int n, char spec);
int     print_percent(void);

#endif

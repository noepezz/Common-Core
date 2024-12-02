/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npezzati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:36:05 by npezzati          #+#    #+#             */
/*   Updated: 2024/12/02 14:36:33 by npezzati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_type(char *format, va_list args)
{
	int		len;

	len = 0;
	if (format[i] == 'c')
		len += print_char(va_arg(args, int));
	else if (format[i] == 's')
		len += print_str(va_arg(args, char *));
	else if (format[i] == 'p')
		len += print_ptr(va_arg(args, void *));
	else if (format[i] == 'd' || format[i] == 'i')
		len += print_int(va_arg(args, int));
	else if (format[i] == 'u')
		len += print_unsigned(va_arg(args, unsigned int));
	else if (format[i] == 'x' || format[i] == 'X')
		len += print_hex(va_arg(args, unsigned int), format[i]);
	else if (format[i] == '%')
		len += print_percent();
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed_chars;
	int		index;
	
	va_start(args, format);
	printed_chars = 0;
	index = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			printed_chars += ft_type(format[i], args);
        }
        else
        	printed_chars += write(1, &format[i], 1);
        i++;
	}
	va_end(args);
	return (printed_chars);
}

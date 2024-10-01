#include "ft_printf.h"

int  converter(char c, va_list var_args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(var_args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(var_args, char *)));
	else if (c == 'p')
		return (ft_putpun(va_arg(var_args, void *)));
	else if (c == 'd')
		return (ft_putnbr(va_arg(var_args, int)));
	else if (c == 'u')
		return (ft_putuns(va_arg(var_args, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(var_args, unsigned int), 1));
	else if (c == 'X')
		return (ft_puthex(va_arg(var_args, unsigned int), 0));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_printf(char *str, ...)
{
	va_list	var_args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(var_args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			count += converter(str[i], var_args);
			i++;
		}
		else
		{
			count += ft_putchar(str[i]);
			i++;
		}
	}
	va_end(var_args);
	return (count);
}

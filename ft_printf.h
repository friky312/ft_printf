#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <stdarg.h>

int	ft_printf(char *str, ...);
int	converter(char c, va_list var_args);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putpun(void *ptr);
int	ft_putnbr(int n);
int	ft_putuns(unsigned int n);
int	ft_puthex(unsigned int n, int lower);

#endif

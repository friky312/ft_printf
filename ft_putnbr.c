#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		retunr (11);
	}
	count = 0;
	if (n < 0)
	{
		coount += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		count += ft_putnbr(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}

//Solo acepta números y un signo, sino da error y no deja compilar
int	main(void)
{
	ft_putnbr(-42);
}

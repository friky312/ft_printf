#include "ft_printf.h"

int	ft_putuns(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
	{
		i += ft_putuns(n / 10);
		i += ft_putuns(n % 10);
	}
	else
		i += ft_putchar(n + '0');
	return (i);
}

int main(void)
{
    ft_putuns(42);
    printf("\n");
    printf("%u\n", 42);
}
//Si se pone "-1" (por ejemplo) devuelve "4294967295" (da la vuelta y empieza desde el final)

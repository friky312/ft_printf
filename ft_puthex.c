#include "ft_printf.h"

int	ft_puthex(unsigned int n, int lower)
{
	char	*numbers;
	char	buffer[9];
	int		count;
	int		i;

	if (lower == 1)
		numbers = "0123456789abcdef";
	else
		numbers = "0123456789ABCDEF";
	i = 0;
	count = 0;
	if (n == 0)
		return (ft_putchar('0'));
	while (n > 0)
	{
		buffer[i++] = numbers[n % 16];
		n /= 16;
	}
	while (i > 0)
	{
		ft_putchar(buffer[--i]);
		count++;
	}
	return (count);
}

int main(void) 
{
    ft_puthex(42, 1);
    printf("\n");
    ft_puthex(42, 0);
    printf("\n");
    ft_puthex(-42, 1);
    printf("\n");
    ft_puthex(-42, 0);
    printf("\n");
    ft_puthex('a', 1);
    printf("\n");
    ft_puthex('a', 0);
    printf("\n");
    ft_puthex('A', 1);
    printf("\n");
    ft_puthex('A', 0);
}

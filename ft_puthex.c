#include "ft_printf.h"

int	ft_puthex(unsigned int n, int lower)
{
	char	*numbers;
	char	buffer[9];  //9 es el tamaño máximo de un entero sin signo, Cuando representas este valor en hexadecimal, el número más grande que puedes obtener es FFFFFFFF (8 F)
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
		buffer[i++] = numbers[n % 16];  //te da el dígito hexadecimal correspondiente al valor de n%16, lo guarda en i
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
    ft_puthex(42, 1);  //2a
    printf("\n");
    ft_puthex(42, 0);  //2A
    printf("\n");
    ft_puthex(-42, 1);  //ffffffd6
    printf("\n");
    ft_puthex(-42, 0);  //FFFFFFD6
    printf("\n");
    ft_puthex('a', 1);  //61
    printf("\n");
    ft_puthex('a', 0);  //61
    printf("\n");
    ft_puthex('A', 1);  //41
    printf("\n");
    ft_puthex('A', 0); //41
}

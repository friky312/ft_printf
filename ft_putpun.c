#include "ft_printf.h"

int	ft_putpun(void *ptr)
{
	unsigned long long	address;
	char				buffer[19];
	const char			*hex_digits;
	int					i;
	int					length;

	hex_digits = "0123456789abcdef";
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	i = 18;
	address = (unsigned long long)ptr;
	buffer[i--] = '\0';
	while (address != 0)
	{
		buffer[i--] = hex_digits[address % 16];
		address /= 16;
	}
	buffer[i--] = 'x';
	buffer[i--] = '0';
	length = ft_putstr(&buffer[i + 1]);
	return (length);
}

//Se compara con el printf para ver que la función funciona correctamente
int main(void)
{
	int		num = 42;
	void	*ptr = &num;
	void	*ptr_null = NULL;

	printf("Prueba con un puntero válido:\n");
	ft_putpun(ptr);
	printf("\n%p\n", ptr);
	printf("\nPrueba con un puntero NULL:\n");
	ft_putpun(ptr_null);
	printf("\n%p\n", ptr_null);
	char str[] = "Hola, mundo";
	printf("\nPrueba con un puntero a una cadena:\n");
	ft_putpun(str);
	printf("\n%p\n", str);
	return (0);
}
//Los punteros empiezan por "0x"

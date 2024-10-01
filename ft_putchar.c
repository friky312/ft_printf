#include "ft_printf.h"

int  ft_putchar(char c)
{
  return (write(1, &c, 1));
}

//Main para comprobar que la función funciona bien 🥸
int	main(void)
{
	char c = 'r';

	ft_putchar(c);
	return (0);
}

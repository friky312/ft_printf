#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	if (str == NULL)
		return (ft_putstr("(null)"));
	i = 0;
	while (str[i] != '\0')
		i += ft_putchar(str[i]);
	return (i);
}

//Para comprobar que la función funciona 🥸
int main(void)
{
	char *str = "awinmawe";

	ft_putstr(str);
	return (0);
}


#include "ft_printf.h"

int	main(void)
{
	ft_printf("Entero positivo: %d\n", 42); // Esperado: "Entero positivo: 42"
	ft_printf("Entero negativo: %d\n", -42); // Esperado: "Entero negativo: -42"
	ft_printf("Hex minúscula: %x\n", 255); // Esperado: "Hex minúscula: ff"
	ft_printf("Hex mayúscula: %X\n", 255); // Esperado: "Hex mayúscula: FF"
	ft_printf("Cadena: %s\n", "Hola Mundo"); // Esperado: "Cadena: Hola Mundo"
	ft_printf("Cadena nula: %s\n", NULL); // Esperado: "Cadena nula: (null)"
	int x = 42;
	ft_printf("Puntero: %p\n", &x); // Esperado: "Puntero: 0x[hex]"
	ft_printf("Puntero: %p\n", (void *)0x7ffeb01fe414); // Esperando: "Puntero: 0x7ffeb01fe414"
	ft_printf("Caracter: %c\n", 'A'); // Esperado: "Caracter: A"
	ft_printf("Porcentaje: %%\n"); // Esperado: "Porcentaje: %"
	ft_printf("%z", 32); // No imprime nada porque %z no está implementado, es para ver qué hace cuando le pasas algo no implementado
}


int main(void)
{
	ft_printf("Puntero: %p\n", (void *)42); // 0x2a   Dirección de puntero en formato hexadecimal, se pasa el valor 42 como puntero, El formato del puntero se imprime como 0x seguido del valor hexadecimal (0x2a)
	ft_printf("Mínimo int: %d\n", -2147483648); // Mínimo valor de un entero de 32 bits con signo
	ft_printf("Máximo int: %d\n", 2147483647); // Máximo valor de un entero de 32 bits con signo
	ft_printf("Sin argumento: %d\n"); // Devuelve numeros alazar
	ft_printf("Número con espacios: %5d\n", 42); // Entero con signo con un ancho mínimo de campo de 5 caracteres. Imprime 42 (con 3 espacios antes del 42).
	ft_printf("Número con ceros: %05d\n", 42); // 00042   Entero con signo con un ancho mínimo de campo de 5 caracteres, relleno con ceros a la izquierda
}

int main() 
{
    // Caso de prueba adicional
    ft_printf("Caso de prueba adicional:\n");
    
    // Cadenas vacías
    ft_printf("Cadena vacía: %s\n", "");
    
    // Cadenas largas
    ft_printf("Cadena larga: %s\n", "Esto es una cadena extremadamente larga que puede ayudar a verificar el comportamiento de ft_printf.");
    
    // Hexadecimales de extremos
    ft_printf("Hexadecimal de 0: %x\n", 0);
    ft_printf("Hexadecimal de 1: %x\n", 1);
    ft_printf("Hexadecimal de 10: %x\n", 10);
    
    // Puntero nulo
    ft_printf("Puntero nulo: %p\n", NULL);
    
    // Prueba de múltiples especificadores
    ft_printf("Múltiples especificadores: %d, %x, %s, %c\n", 42, 42, "Cadena", 'C');
    
    return 0;
}

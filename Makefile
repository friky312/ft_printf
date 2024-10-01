
#Define el nombre de la librería a generar
NAME = libftprintf.a

#El compilador que se usa
CC = gcc

#Las flags de compilación
#	-c: Compila cada archivo fuente (.c) en un objeto (.o) sin crear el ejecutable
#	-Wall: Habilita todas las advertencias recomendadas por el compilador
#	-Werror: Convierte todas las advertencias en errores(no compila si hay advertencias)
#	-Wextra: Habilita advertencias adicionales que  -Wall no incluye
#	-I: Especifica los directorios donde buscarr archivos de cabecera(.h)
CFLAGS = -c -Wall -Werror -Wextra -I

#ar es una herramienta para crear archivos de librería estática
#-rcs:
#	r inserta los archivos en la librería reemplazando versisones anteriores
#	c crea la librería si no existe
#	s crea uun índice para hacer que la librería sea más eficiente en la búsqueda de símbolos
AR = ar -rcs

#rm es el comando para eliminar archivos
#	-f  fuerza la eliminción ignorando archivos existentes y sin pedir confirmación
RM = rm -f

#Lista todos los archivos fuentes(.c) que forman parte de la librería
SRCS =	ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putpun.c \
		ft_putnbr.c \
		ft_putuns.c \
		ft_puthex.c

#Esta línea convierte la lista de archivos .c en archivos .o 
#	$(SRCS:.c=.o): crea un archivo .o para cada .c
OBJS = $(SRCS:.c=.o)

#Hace que el objetivo ${NAME} se ejecute, crea la librería libftprintf.a
all: ${NAME}

#Toma todos los objetos y ejecuta el comando $(AR) para crear la librería
${NAME} : $(OBJS)
		$(AR) $(NAME) $(OBJS)

#Indica cómo compilar os archivos .c en .o
#	El comando $(CC) invoca al compilador con las flags definidas para compilar el archivo .c en el .o
%.o: %.c
		$(CC) $(CCFLAGS) -c -o $@ $<

#Elimina los .o
clean:
		$(RM) $(OBJS)

#Ejecuta clean y elimina la librería
fclean: clean
		$(RM) $(NAME)

#Eimina todo y lo recompila de nuevo ejecutando el all
re: fclean all 

#Le dice a make que estos nombres no corresponden a archivos sino a objetos para que no se confunda si existen archivos con esos nombres en el directorio
.PHONY: all, clean, fclean, re

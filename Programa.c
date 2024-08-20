//  Este es un comentario de línea
	
#include <stdio.h>

int main()
{	
    float pi = 3.14159;
    int costo = 60;
    // numeros enteros
	printf("El valor de la variable costo es: %d \n", costo);
	printf("El valor de la variable costo es: %i \n", costo);
	printf("El valor de la variable costo es: %c \n", costo);
	printf("El valor de la variable costo es: %o \n", costo);
	printf("El valor de la variable costo es: %X \n", costo);
	printf("El valor de la variable costo es: %u \n", costo);
	costo = -60;
	printf("El valor de la variable costo es: %u \n", costo);
	// Numeros Flotantes
	printf("El valor de la variable pi es: %f \n", pi);
	printf("El valor de la variable pi es: %e \n", pi);
	//  Cadenas
	printf("%s\n", "Saludos programas!!!!!");
	printf("El descuento es del 30%% sobre el precio\n", pi);
	//  ancho de pantalla
	printf("El valor de la variable costo es: %d \n", costo);
	printf("El valor de la variable costo es: %10d \n", costo);
	printf("El valor de la variable pi es: %7.2f \n", pi);
	// Banderas
	printf("El valor de la variable costo es: %010d \n", costo);
	printf("El valor de la variable costo es: %-10d \n", costo);
	printf("El valor de la variable costo es: %+10d \n", costo);
}








#include <stdio.h>
#include <stdlib.h>

#define pausa system("pause");

int main()
{
	int a,b,c;
	int *pa, *pb, *pc;
	
	pa = &a;
	pb = &b;
	pc = &c;
	
	printf("Dame el valor del primer numero:");
	scanf("%d", pa);
	printf("Dame el valor del segundo numero:");
	scanf("%d", pb);
	
	*pc = *pa + *pb;
	
	printf("El resultado de sumar %d mas %d es: %d\n", *pa, *pb, *pc);
	
	
	/*int costo = 60;				//  Decalro una variable de tipo entero llama costo
	int *pointer;				//  DEclaro un apuntador a enteros llamado pointer
	
	pointer = &costo;			// Guardo la dorección de memoria de costo
								

	printf("El contenido de la variable costo es: %p\n", &costo);																																																						
	printf("La diraccion de memoria de la variable costo es %d\n", costo);
	
	printf("El contenido de la variable pointer es: %p\n", &pointer);																																																						
	printf("La diraccion de memoria guardada en pointer es %p\n", pointer);
	printf("El valor apuntado por pointer es %d\n", *pointer);
	
	*pointer = 50;
	printf("La diraccion de memoria de la variable costo es %d\n", costo);*/
	
	return  0;
}			





																																																																																																																																																										
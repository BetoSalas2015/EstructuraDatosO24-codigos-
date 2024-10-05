//   Base.c - Plantilla de programa para algoritmos de ordenamiento
#include <stdio.h>				//   PAra la I/O (input/output) 
#include <stdlib.h>				//  Para rand() - numeros pseudoaleatorios
#include <time.h>				//  Para la hora dela computadora

// sección de prototipos
void imprimeArreglo(int arreglo[]);

#define SIZE 15
#define RANGO 1000

void imprimeArreglo(int arreglo[])
{
	int i;
	for(i = 0; i < SIZE; i++)
		printf("%d, ",arreglo[i]);
	putchar('\n');   // o printf("\n");
}

//  Programe su función de ordenamiento aquí

int main ()
{
	int arreglo[SIZE];
	int i;
	srand( time(0) );
	
	for(i = 0; i < SIZE; i++)
		arreglo[i] = rand() % RANGO;
		
	imprimeArreglo(arreglo);
	
	//  Invocar el algoritmos de ordenamiento aquí
	
	imprimeArreglo(arreglo);
}  
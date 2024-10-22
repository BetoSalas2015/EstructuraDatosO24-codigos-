//   Base.c - Plantilla de programa para algoritmos de ordenamiento
#include <stdio.h>				//   PAra la I/O (input/output) 
#include <stdlib.h>				//  Para rand() - numeros pseudoaleatorios
#include <time.h>				//  Para la hora dela computadora

// sección de prototipos
void imprimeArreglo(int arreglo[]);
void inicializaArreglo(int arr[], int n);
void burbuja(int arr[], int n);

#define SIZE 15
#define RANGO 1000
#define SEED 2024

void imprimeArreglo(int arreglo[])
{
	int i;
	for(i = 0; i < SIZE; i++)
		printf("%d, ",arreglo[i]);
	putchar('\n');   // o printf("\n");
}

void inicializaArreglo(int arr[], int n)
{
	int i;
	srand( SEED );
	
	for(i = 0; i < n; i++)
		arr[i] = rand() % RANGO;
}

//  Programe su función de ordenamiento aquí
void burbuja(int arr[], int n) {
	 
}

int main ()
{
	int arreglo[SIZE];
	long inicio, fin, dif;
	
	// Para cada algoritmo:

	inicializaArreglo(arreglo, SIZE);
	
	
	imprimeArreglo(arreglo);  // opcional
	
	inicio = time(0);
	
	//  Invocar el algoritmos de ordenamiento aquí
	burbuja(arreglo, SIZE);
	
	fin = time(0);	
	dif = fin - inicio;
	
	imprimeArreglo(arreglo);  	// Opcional
	
}  
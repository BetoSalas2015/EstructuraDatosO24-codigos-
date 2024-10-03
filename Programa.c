//  Programa que copia una archivo de texto
	
#include <stdio.h>

int factorialIterativo(int n)
{
	int i, fact = 1;
	for(i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	return fact;
}

//	n! = 1				Si n = 1
//	n! = n * (n - 1)!	Si n > 1
int factorial(int n)
{
	if(n == 1)			// Criterio de Paro (caso más simple)
		return 1;
	else
		return n * factorial(n - 1);	// llamada recursiva (aproximación al c.m.s.)
}

//  pi = 4 					Si i == 1
//  pi = pi-1 - 4/(2i-1)	Si i es par e i > 1
//  pi = pi-1 + 4/(2i-1)	Si i es impar e i > 1
float pi(int i)
{
	if(i == 1)
		return 4;
	else
		if(i % 2)
			return pi(i-1) +  4.0 / (2 * i - 1); 
		else
			return pi(i-1) -  4.0 / (2 * i - 1); 
}

//  (a * b) = a						si b = 1
//  (a * b) = a + (a * b-1)			Si b > 1
int multiplicacion( int a, int b) {
}

//   x^y = 1						Si y = 0
//   x^y = x * x^y-1				Si y > 0
int potencia(int x, int y) {
}

//  Fi = 1							Si i = 0  o i = 1
//  Fi = Fi-1 + Fi-2				Si i > 1
int Fibonacci(int i) {
}


void hanoi(int n, char desde, char hasta, char aux) {
}

int main()
{
	int i,j;
	//printf("El factorial de 5 es: %d\n", factorialIterativo(5));
	//printf("El factorial de 5 es: %d\n", factorial(5));
	printf("Pi a cuantos terminos? ");
	scanf("%d", &i);
	for(j = 1; j < i; j++)
		printf("Pi a %d terminos es %7.5f\n", j, pi(j));
		
		
	hanoi(3, 'A', 'C', 'B');	
	
	
	
}
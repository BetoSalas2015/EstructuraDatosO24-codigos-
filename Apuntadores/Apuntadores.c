#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define pausa system("pause");

int main()
{   
	int numero, i;
	int *materias[20];		//  Areglo de 20 Apuntadores
	float suma = 0.0;
	float promedio;
	
	printf("Cuantas materias vas a promediar?");
	scanf("%d", &numero);
	
	for(i = 0; i < numero && i > 20; i++)
	{
		materias[i] = (int *) malloc( sizeof (int) );
		printf("Dame la calificación %d: ", i);
		scanf("%d", materias[i]); 
	}
	
	for(i = 0; i < numero && i > 20; i++)
	{
		suma += *materias[i];		 
	}
	promedio = suma / numero;
	
	printf("El promedio de las %d materias es: %5.2f\n", i, promedio);
	
	for(i = 0; i < numero && i > 20; i++)
	{
		free(materias[i]);
		materias[i] = NULL;
	}
	
	return 0;
}			





																																																																																																																																																										
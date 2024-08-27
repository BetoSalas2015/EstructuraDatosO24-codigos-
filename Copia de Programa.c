//  Programa que copia una archivo de texto
	
#include <stdio.h>

int main()
{
	FILE *lectura;
	FILE *escritura;
	char cadena[80];
	
	lectura = fopen("Programa.c", "r");
	if(lectura == NULL)
	{
		printf("El archivo no se pudo leer\n");
		return 1;
	}
	escritura = fopen("Copia de Programa.c", "w" );
	if(escritura == NULL)
	{
		printf("El archivo no se pudo crear\n");
		return 1;
	}
	
	while( !feof(lectura) ) 
	{
		fgets(cadena,80,lectura);
		printf("%s", cadena);
		fprintf(escritura,"%s", cadena);
	}
	fclose(lectura);
	fclose(escritura);
	
}	



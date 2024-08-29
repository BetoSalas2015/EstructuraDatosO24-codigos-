//  Programa que copia una archivo de texto
	
#include <stdio.h>

int main()
{
	FILE *lectura;
	FILE *escritura;
	char cadena[80];
	
	char nombre[18] ;
	int  edad;
	float estatura;
 
	escritura = fopen("datos.dat", "r");
	if(escritura == NULL)
	{
		printf("El archivo no se pudo leer\n");
		return 1;
	}
	
	//fwrite(&nombre, 18, 1, escritura);
	//fwrite(&edad, 4, 1, escritura);
	//fwrite(&estatura, 8, 1, escritura);
	
	fread(&nombre, 18, 1, escritura);
	fread(&edad, 4, 1, escritura);
	fread(&estatura, 8, 1, escritura);
	printf(" %s - %d - %f\n",nombre, edad, estatura);
	//fclose(lectura);
	fclose(escritura);
	
}	


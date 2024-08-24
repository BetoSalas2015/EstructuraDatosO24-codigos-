//  Este es un comentario de línea
	
#include <stdio.h>

int main()
{
	FILE *archivo;
	
	archivo = fopen("archivo.txt", "w");
	if(archivo == NULL)
	{
		printf("El archivo no se pudo crear\n");
		exit(1);
	}
	
	//printf("Saludos Programas!!!!!");
	fprintf(archivo, "Saludos Programas otra vez!!!!!");
	
	fclose(archivo);
	
}	






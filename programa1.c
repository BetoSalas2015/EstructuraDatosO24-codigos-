#include <stdio.h>
#include <string.h>

int main()
{
	char cadena[50] = "";
	char cadena2[50] = "Programas!!!";
	char cadena3[50];

	printf("%s\n%s\n", cadena, cadena2);
	
	if ( strcmp(cadena2, cadena) )
		printf("Cadena es mas grande que cadena2");
	else
		printf("Cadena2  es mas grande que cadena");
}
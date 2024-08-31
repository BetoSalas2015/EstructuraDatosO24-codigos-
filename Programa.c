//  Programa que copia una archivo de texto
	
#include <stdio.h>
#include <string.h>

struct Persona
{
	char nombre[30];
	int edad; 
	float altura;
	char sexo;
};

typedef struct Persona persona;

int main()
{
	int costo = 60;
	persona miPersona;
	
	printf("Dame tu edad: ");
	scanf("%d", &miPersona.edad);
	printf("Dame la altura: ");
	scanf("%f", &miPersona.altura);
	printf("Dame el sexo: ");
	fflush(stdin);
	miPersona.sexo = getchar();  // o usar -> scanf("%c", &miPersona.sexo)
	printf("Dame tu nombre: ");
	fflush(stdin);
	gets(miPersona.nombre);
	printf("%s, Edad: %d, sexo: %c, Estatura: %.2f \n", miPersona.nombre, miPersona.edad, miPersona.sexo, miPersona.altura);
	
	return 0;
}	


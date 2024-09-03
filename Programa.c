//  Programa que copia una archivo de texto
	
#include <stdio.h>
#include <string.h>



struct Persona
{
	struct nombrePersona nombre;
	int edad; 
	float altura;
	char sexo;
};
struct nombrePersona 
{
	char nombre[15];
	char apellidos[15];
};
typedef struct Persona persona;

int main()
{
	int costo = 60;
	persona miPersona[10];
	int pos;
	
	printf("En que posición quieres guradar la info? ");
	scanf("%d", &pos);
	
	printf("Dame tu edad: ");
	scanf("%d", &miPersona[pos].edad);
	printf("Dame la altura: ");
	scanf("%f", &miPersona[pos].altura);
	printf("Dame el sexo: ");
	fflush(stdin);
	miPersona[pos].sexo = getchar();  // o usar -> scanf("%c", &miPersona.sexo)
	printf("Dame tu nombre: ");
	fflush(stdin);
	gets(miPersona[pos].nombre.nombre);
	printf("Dame tu apellido: ");
	fflush(stdin);
	gets(miPersona[pos].nombre.apellidos);
	printf("%s %s, Edad: %d, sexo: %c, Estatura: %.2f \n", miPersona[pos].nombre.nombre, miPersona[pos].nombre.apellidos, miPersona[pos].edad, miPersona[pos].sexo, miPersona[pos].altura);
	
	return 0;
}	


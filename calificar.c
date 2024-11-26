#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PAUSA system("pause")

void altaRegistro(int posicion);
void imprimeRegistro(int posicion);
int menu(void);

struct INE 
{
    char nombre[50];
    char apellidoPaterno[50];
    char apellidoMaterno[50];
    char sexo[50];
    char domicilio[50];
    char claveElector[50];
    char curp[50];
    char estado[50];
    char municipio[50];
    char seccion[50];
    char localidad[50];
    char emision[50];
    char vigencia[50];
} baseDatos[50];

void altaRegistro(int posicion) 
{
    printf("Introduce los datos del registro en la posicion %d:\n", posicion);
    printf("Nombre: "); 
    scanf("%s", baseDatos[posicion].nombre);
    printf("Apellido Paterno: "); 
    scanf("%s", baseDatos[posicion].apellidoPaterno);
    printf("Apellido Materno: "); 
    scanf("%s", baseDatos[posicion].apellidoMaterno);
    printf("Sexo: "); 
    scanf("%s", baseDatos[posicion].sexo);
    printf("Domicilio: "); 
    scanf("%s", baseDatos[posicion].domicilio);
    printf("Clave de Elector: "); 
    scanf("%s", baseDatos[posicion].claveElector);
    printf("CURP: "); 
    scanf("%s", baseDatos[posicion].curp);
    printf("Estado: "); 
    scanf("%s", baseDatos[posicion].estado);
    printf("Municipio: "); 
    scanf("%s", baseDatos[posicion].municipio);
    printf("SecciÃ³n: "); 
    scanf("%s", baseDatos[posicion].seccion);
    printf("Localidad: "); 
    scanf("%s", baseDatos[posicion].localidad);
    printf("EmisiÃ³n: "); 
    scanf("%s", baseDatos[posicion].emision);
    printf("Vigencia: "); 
    scanf("%s", baseDatos[posicion].vigencia);

    FILE *archivo = fopen("credenciales_ine.txt", "a");

    if (archivo == NULL) 
    {
        printf("No se pudo abrir el archivo para guardar los datos.\n");
        return;
    }
    fprintf(archivo, "Nombre: %s\nApellido Paterno: %s\nApellido Materno: %s\nSexo: %s\nDomicilio: %s\nClave de Elector: %s\nCURP: %s\nEstado: %s\nMunicipio: %s\nSecciÃ³n: %s\nLocalidad: %s\nEmisiÃ³n: %s\nVigencia: %s\n-------------------------\n", 
        baseDatos[posicion].nombre, baseDatos[posicion].apellidoPaterno, baseDatos[posicion].apellidoMaterno, 
        baseDatos[posicion].sexo, baseDatos[posicion].domicilio, baseDatos[posicion].claveElector, baseDatos[posicion].curp, 
        baseDatos[posicion].estado, baseDatos[posicion].municipio, baseDatos[posicion].seccion, 
        baseDatos[posicion].localidad, baseDatos[posicion].emision, baseDatos[posicion].vigencia);
    fclose(archivo);
}

void imprimeRegistro(int posicion) 
{
    printf("------------------------------------------------------------------------------\n");
    printf("|                       INSTITUTO NACIONAL ELECTORAL                         |\n");
    printf("|                          Credencial para Votar                             |\n");
    printf("|                                                                            |\n");
    printf("|  -------------  Nombre:                                                    |\n");
    printf("|  |           |  %-10.10s                                                 |\n", baseDatos[posicion].nombre);
    printf("|  |           |  %-10.10s                                                 |\n", baseDatos[posicion].apellidoPaterno);
    printf("|  |     F     |  %-10.10s                                                 |\n", baseDatos[posicion].apellidoMaterno);
    printf("|  |     O     |  Domicilio:      Sexo:                                      |\n");
    printf("|  |     T     |  %-10.10s      %-10.10s                                 |\n", baseDatos[posicion].domicilio, baseDatos[posicion].sexo);
    printf("|  |     O     |  Clave de Elector:         Curp:                            |\n");
    printf("|  |           |  %-20.20s      %-20.20s             |\n", baseDatos[posicion].claveElector, baseDatos[posicion].curp);
    printf("|  |           |  Estado:         Municipio:       Seccion:                  |\n");
    printf("|  -------------  %-10.10s      %-10.10s       %-5.5s                     |\n", baseDatos[posicion].estado, baseDatos[posicion].municipio, baseDatos[posicion].seccion);
    printf("|                 Localidad:      Emision:         Vigencia:                 |\n");
    printf("|  -------------  %-10.10s      %-5.5s            %-5.5s                     |\n", baseDatos[posicion].localidad, baseDatos[posicion].emision, baseDatos[posicion].vigencia);
    printf("|      Firma                                                                 |\n");
    printf("|                                                                            |\n");
    printf("------------------------------------------------------------------------------\n");
    PAUSA;
}

int menu(void) 
{
    int opcion;
    printf("\nMenu:\n1. Altas.\n5. Imprimir Registro.\n9. Salir.\nOpcion? ");
    scanf("%d", &opcion);
    return opcion;
}

int main() 
{
    int opcion, posicion;

    do {
        opcion = menu();
        if (opcion == 1 || opcion == 5) 
        {
            printf("Introduce la posicion: ");
            scanf("%d", &posicion);
            if (opcion == 1) 
                altaRegistro(posicion);
            else if (opcion == 5) 
                imprimeRegistro(posicion);
        }
    } while (opcion != 9);

    return 0;
}
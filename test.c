#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REGISTROS 100
#define pausa system("pause")


void altaRegistro(int posicion);
void imprimeRegistro(int posicion);
int menu(void);


typedef struct {
    char nombre[100];
    char apellidoP[50];
    char apellidoM[50];
    char curp[20];
    char direccion[200];
    char claveElector[20];
    char fechaNacimiento[15];
    char registro[20];
    char estado[30];
    char municipio[30];
    char seccion[10];
    char localidad[30];
    char fechaEmision[15];
    char fechaVigencia[15];
} Registro;


Registro registros[MAX_REGISTROS];

int main() {
    int opcion, posicion;

   
    for(int i = 0; i < MAX_REGISTROS; i++) {
        strcpy(registros[i].nombre, "");
        strcpy(registros[i].apellidoP, "");
        strcpy(registros[i].apellidoM, "");
        strcpy(registros[i].curp, "");
        strcpy(registros[i].direccion, "");
        strcpy(registros[i].claveElector, "");
        strcpy(registros[i].fechaNacimiento, "");
        strcpy(registros[i].registro, "");
        strcpy(registros[i].estado, "");
        strcpy(registros[i].municipio, "");
        strcpy(registros[i].seccion, "");
        strcpy(registros[i].localidad, "");
        strcpy(registros[i].fechaEmision, "");
        strcpy(registros[i].fechaVigencia, "");
    }

    
    do {
        opcion = menu();
        switch(opcion) {
            case 1:
                printf("Ingrese la posicion del registro (0 a %d): ", MAX_REGISTROS - 1);
                scanf("%d", &posicion);
                if (posicion >= 0 && posicion < MAX_REGISTROS) {
                    altaRegistro(posicion);
                } else {
                    printf("PosiciÃ³n no valida.\n");
                }
                break;
            case 5:
                printf("Ingrese la posicion del registro a imprimir (0 a %d): ", MAX_REGISTROS - 1);
                scanf("%d", &posicion);
                if (posicion >= 0 && posicion < MAX_REGISTROS) {
                    imprimeRegistro(posicion);
                } else {
                    printf("Posicion no valida.\n");
                }
                break;
            case 9:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida.\n");
        }
        pausa;
    } while(opcion != 9);


}


int menu(void) {
    int opcion;
    printf("Menu:\n");
    printf("1. Altas.\n");
    printf("5. Imprimir Registro.\n");
    printf("9. Salir.\n");
    printf("Opcion? ");
    scanf("%d", &opcion);
    return opcion;
}


void altaRegistro(int posicion) {
    printf("Capturando datos para la posicion %d:\n", posicion);

    printf("Nombre: ");
    scanf(" %[^\n]", registros[posicion].nombre);

    printf("Apellido Paterno: ");
    scanf(" %[^\n]", registros[posicion].apellidoP);

    printf("Apellido Materno: ");
    scanf(" %[^\n]", registros[posicion].apellidoM);

    printf("CURP: ");
    scanf(" %[^\n]", registros[posicion].curp);

    printf("Direccion: ");
    scanf(" %[^\n]", registros[posicion].direccion);

    printf("Clave de Elector: ");
    scanf(" %[^\n]", registros[posicion].claveElector);

    printf("Fecha de Nacimiento (dd/mm/aaaa): ");
    scanf(" %[^\n]", registros[posicion].fechaNacimiento);

    printf("Registro: ");
    scanf(" %[^\n]", registros[posicion].registro);

    printf("Estado: ");
    scanf(" %[^\n]", registros[posicion].estado);

    printf("Municipio: ");
    scanf(" %[^\n]", registros[posicion].municipio);

    printf("Seccion: ");
    scanf(" %[^\n]", registros[posicion].seccion);

    printf("Localidad: ");
    scanf(" %[^\n]", registros[posicion].localidad);

    printf("Fecha de Emision (dd/mm/aaaa): ");
    scanf(" %[^\n]", registros[posicion].fechaEmision);

    printf("Fecha de Vigencia (dd/mm/aaaa): ");
    scanf(" %[^\n]", registros[posicion].fechaVigencia);

    printf("Registro guardado con exito en la posicion %d.\n", posicion);
}


void imprimeRegistro(int posicion) {
    if (strcmp(registros[posicion].nombre, "") == 0) {
        printf("No hay datos en esta posicion.\n");
    } else {
        printf("========================================================================\n");
        printf("|                     INSTITUTO NACIONAL ELECTORAL                        \n");
        printf("|=======================================================================\n");
        printf("| NOMBRE: %-30s \n", registros[posicion].nombre);
        printf("| APELLIDO PATERNO: %-20s APELLIDO MATERNO: %-20s \n", registros[posicion].apellidoP, registros[posicion].apellidoM);
        printf("| CURP: %-20s \n", registros[posicion].curp);
        printf("| DIRECCION: %-50s \n", registros[posicion].direccion);
        printf("| FECHA DE NACIMIENTO: %-15s \n", registros[posicion].fechaNacimiento);
        printf("| CLAVE DE ELECTOR: %-20s \n", registros[posicion].claveElector);
        printf("| REGISTRO: %-20s \n", registros[posicion].registro);
        printf("| ESTADO: %-20s MUNICIPIO: %-20s \n", registros[posicion].estado, registros[posicion].municipio);
        printf("| SECCION: %-10s LOCALIDAD: %-20s \n", registros[posicion].seccion, registros[posicion].localidad);
        printf("| FECHA DE EMISION: %-15s FECHA DE VIGENCIA: %-15s \n", registros[posicion].fechaEmision, registros[posicion].fechaVigencia);
        printf("=========================================================================\n");
    }
    return ;
}

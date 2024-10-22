#include <stdio.h>
#include <string.h>

// Prototipos de funciones
void altaRegistro(int pos, struct INE credencial[]);
void imprimeRegistro(int pos, struct INE credencial[]);
int menu(int *pos);

// Estructura para almacenar los datos de la credencial
struct nombrePersona 
{
    char nombre[15];
    char apellidoPaterno[30];
    char apellidoMaterno[30];
};

struct INE
{
    struct nombrePersona nombre;
    char domicilio[30];
    char claveElector[20];
    char curp[19];
    char estado[15];
    char municipio[20];
    char seccion[10];
    char localidad[20];
    char fechaEmision[11];
    char vigencia[11];
};

int main()
{
    struct INE credencial[10];
    int opcion, pos;

    // Bucle que mantiene el menú activo hasta que el usuario elija salir
    while (1) {
        opcion = menu(&pos);
        
        if (opcion == 9) {
            printf("Saliendo...\n");
            break;  // Terminar el bucle y el programa
        }

        switch (opcion) {
            case 1:
                altaRegistro(pos, credencial);
                break;

            case 5:
                imprimeRegistro(pos, credencial);
                break;

            default:
                printf("Opción inválida, por favor ingresa una opción válida.\n");
        }
    }

    return 0;
}

// Función que solicita los datos y los guarda en la posición especificada
void altaRegistro(int pos, struct INE credencial[])
{
    printf("Nombre: ");
    scanf("%s", credencial[pos].nombre.nombre);

    printf("Apellido Paterno: ");
    scanf("%s", credencial[pos].nombre.apellidoPaterno);

    printf("Apellido Materno: ");
    scanf("%s", credencial[pos].nombre.apellidoMaterno);

    printf("Domicilio: ");
    scanf("%s", credencial[pos].domicilio);

    printf("Clave de elector: ");
    scanf("%s", credencial[pos].claveElector);

    printf("CURP: ");
    scanf("%s", credencial[pos].curp);

    printf("Estado: ");
    scanf("%s", credencial[pos].estado);

    printf("Municipio: ");
    scanf("%s", credencial[pos].municipio);

    printf("Sección: ");
    scanf("%s", credencial[pos].seccion);

    printf("Localidad: ");
    scanf("%s", credencial[pos].localidad);

    printf("Fecha de emisión: ");
    scanf("%s", credencial[pos].fechaEmision);

    printf("Vigencia: ");
    scanf("%s", credencial[pos].vigencia);
}

// Función que imprime los datos almacenados en la posición especificada
void imprimeRegistro(int pos, struct INE credencial[])
{
    printf("\nINE Credencial para Votar:\n");
    printf("Nombre: %s %s %s\n", credencial[pos].nombre.nombre, credencial[pos].nombre.apellidoPaterno, credencial[pos].nombre.apellidoMaterno);
    printf("Domicilio: %s\n", credencial[pos].domicilio);
    printf("Clave de Elector: %s\n", credencial[pos].claveElector);
    printf("CURP: %s\n", credencial[pos].curp);
    printf("Estado: %s\n", credencial[pos].estado);
    printf("Municipio: %s\n", credencial[pos].municipio);
    printf("Sección: %s\n", credencial[pos].seccion);
    printf("Localidad: %s\n", credencial[pos].localidad);
    printf("Fecha de emisión: %s\n", credencial[pos].fechaEmision);
    printf("Vigencia: %s\n", credencial[pos].vigencia);
}

// Función que muestra el menú y regresa la opción seleccionada
int menu(int *pos)
{
    int opcion;
    
    printf("\nMenu:\n");
    printf("1. Altas.\n");
    printf("5. Imprimir Registro.\n");
    printf("9. Salir.\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion);

    if (opcion == 1 || opcion == 5) {
        printf("¿En qué posición (0-9) quieres trabajar? ");
        scanf("%d", pos);
        
        // Verificamos que la posición sea válida (0-9)
        if (*pos < 0 || *pos >= 10) {
            printf("Posición inválida.\n");
            return -1;  // Retornar valor inválido si la posición es incorrecta
        }
    }

    return opcion;
}


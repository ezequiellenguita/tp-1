#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir = 's';
    int opcion = 0;
    EPersona lista[MAX_PERSONAS];
    inicializarArray(lista);
    while (seguir == 's')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            agregarPersona(lista);
            break;
        case 2:
            menuBorrarPersona(lista);
            break;
        case 3:
            imprimirListaOrdenada(lista);
            break;
        case 4:
            imprimirGraficoEdades(lista);
            break;
        case 5:
            seguir = 'n';
            break;
        }
    }

    return 0;
}

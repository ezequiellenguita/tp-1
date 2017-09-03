#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir = 's';
    int opcion = 0;

    float a = 0;
    float b = 0;

    while (seguir == 's')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n", a);
        printf("2- Ingresar 2do operando (B=%.2f)\n", b);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Ingrese el 1er operando: ");
            scanf("%f", &a);
            break;
        case 2:
            printf("Ingrese el 2do operando: ");
            scanf("%f", &b);
            break;
        case 3:
            sumar(a, b);
            break;
        case 4:
            restar(a, b);
            break;
        case 5:
            dividir(a, b);
            break;
        case 6:
            multiplicar(a, b);
            break;
        case 7:
            factorial(a);
            break;
        case 8:
            sumar(a, b);
            restar(a, b);
            dividir(a, b);
            multiplicar(a, b);
            factorial(a);
            break;
        case 9:
            seguir = 'n';
            break;
        }
    }
    return 0;
}
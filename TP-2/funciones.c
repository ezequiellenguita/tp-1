#include "funciones.h"
#include <stdio.h>

void inicializarArray(EPersona lista[])
{
    int i;
    for (i = 0; i < MAX_PERSONAS; i++)
    {
        lista[i].dni = 0;
        lista[i].estado = 0;
        lista[i].edad = 0;
        lista[i].nombre[50] = "";
    }
}

int obtenerEspacioLibre(EPersona lista[])
{
    int i;
    for (i = 0; i < MAX_PERSONAS; i++)
    {
        if (lista[i].estado == 0)
        {
            return i;
        }
    }
    return -1;
}

int buscarPorDni(EPersona lista[], int dni)
{
    int i;
    for (i = 0; i < MAX_PERSONAS; i++)
    {
        if (lista[i].estado == 1 && lista[i].dni == dni)
        {
            return i;
        }
    }
    return -1;
}

void mostrarPersona(EPersona persona)
{
    printf("Nombre: %s\nEdad: %d\nDNI: %d\n", persona.nombre, persona.edad, persona.dni);
}

void agregarPersona(EPersona lista[])
{
    int idxPersona = obtenerEspacioLibre(lista);
    if (idxPersona == -1)
    {
        printf("ERROR: No hay mas espacio disponible\n");
        return;
    }

    printf("Ingrese nombre:");

    scanf("%s", &lista[idxPersona].nombre);
    printf("Ingrese edad:");
    scanf("%d", &lista[idxPersona].edad);
    printf("Ingrese dni:");
    scanf("%d", &lista[idxPersona].dni);

    lista[idxPersona].estado = 1;
}

void eliminarPersona(EPersona lista[], int idx)
{
    if (idx >= MAX_PERSONAS)
    {
        return;
    }
    lista[idx].estado = 0;
    lista[idx].dni = 0;
    lista[idx].edad = 0;
    lista[idx].nombre[50] = "";
}

void menuBorrarPersona(EPersona lista[])
{
    int dni, idxPersona;

    printf("Ingrese DNI de la persona a eliminar:");
    scanf("%d", &dni);
    idxPersona = buscarPorDni(lista, dni);

    if (idxPersona == -1)
    {
        printf("El DNI no existe\n");
        return;
    }

    eliminarPersona(lista, idxPersona);
    printf("Borrado exitoso\n");
}

void imprimirListaOrdenada(EPersona lista[])
{
    int i, j;
    EPersona aux;

    for (i = 0; i < MAX_PERSONAS - 1; i++)
    {
        for (j = i + 1; j < MAX_PERSONAS; j++)
        {
            if (strcmp(lista[i].nombre, lista[j].nombre) > 0)
            {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }

    for (i = 0; i < MAX_PERSONAS; i++)
    {
        if (lista[i].estado)
        {
            mostrarPersona(lista[i]);
        }
    }
}

void imprimirGraficoEdades(EPersona lista[])
{
    int i, hasta18 = 0, de19a35 = 0, mayorDe35 = 0, flag = 0, mayor;

    //
    for (i = 0; i < MAX_PERSONAS; i++)
    {
        if (lista[i].estado)
        {
            if (lista[i].edad < 18)
            {
                hasta18++;
            }
            else if ((lista[i].edad > 18 && lista[i].edad < 35))
            {
                de19a35++;
            }
            else if (lista[i].edad > 35)
            {
                mayorDe35++;
            }
        }
    }
    //

    if (hasta18 >= de19a35 && hasta18 >= mayorDe35)
    {
        mayor = hasta18;
    }
    else
    {
        if (de19a35 >= hasta18 && de19a35 >= mayorDe35)
        {
            mayor = de19a35;
        }
        else
        {
            mayor = mayorDe35;
        }
    }

    for (i = mayor; i > 0; i--)
    {
        if (i < 10)
        {
            printf("%02d|", i);
        }
        else
            printf("%02d|", i);

        if (i <= hasta18)
        {
            printf("*");
        }
        if (i <= de19a35)
        {
            flag = 1;
            printf("\t*");
        }
        if (i <= mayorDe35)
        {
            if (flag == 0)
                printf("\t\t*");
            if (flag == 1)
                printf("\t*");
        }

        printf("\n");
    }
    printf("--+-----------------");
    printf("\n  |<18\t19-35\t>35");
    printf("\n   %d\t%d\t%d\n", hasta18, de19a35, mayorDe35);
}
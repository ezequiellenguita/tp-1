#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define MAX_PERSONAS 20
typedef struct
{

    char nombre[50];
    int edad;
    int estado;
    int dni;

} EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni);

/**
 *  Muestra el asistente para agregar una persona.
 * @param lista el array se pasa como parametro.
 */
void agregarPersona(EPersona lista[]);

/**
 * Imprime detalles de la persona en la pantalla
 * @param persona estructura de la persona
 */
void mostrarPersona(EPersona persona);
/**
 * Inicializa el array de personas
 * @param lista el array se pasa como parametro.
 */
void inicializarArray(EPersona lista[]);
/**
 * Muestra el menu para borrar una persona
 * @param lista el array se pasa como parametro.
 */
void menuBorrarPersona(EPersona lista[]);
/**
 * Elimina una persona
 * @param lista el array se pasa como parametro.
 * @param idx el indice de la persona a la cual eliminar
 */
void eliminarPersona(EPersona lista[], int idx);
/**
 * Muestra una lista ordenada de las personas
 * @param lista el array se pasa como parametro.
 */
void imprimirListaOrdenada(EPersona lista[]);
/**
 * Muestra un grafico de edados
 * @param lista el array se pasa como parametro.
 */
void imprimirGraficoEdades(EPersona lista[]);
#endif // FUNCIONES_H_INCLUDED

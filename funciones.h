#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>

/** @brief Realiza la suma de A y B
 *  y lo muestra en pantalla
 *
 *  @param a El primer operando.
 *  @param b El segundo operando
 *  @return Void.
 */
void sumar(float a, float b)
{
    float resultado = a + b;
    printf("El resultado es %.2f \n", resultado);
}

/** @brief Realiza la resta de A y B
 *  y lo muestra en pantalla
 *
 *  @param a El primer operando.
 *  @param b El segundo operando
 *  @return Void.
 */
void restar(float a, float b)
{
    float resultado = a - b;
    printf("El resultado es %.2f \n", resultado);
}
/** @brief Realiza la multiplicación de A y B
 *  y lo muestra en pantalla
 *
 *  @param a El primer operando.
 *  @param b El segundo operando
 *  @return Void.
 */
void multiplicar(float a, float b)
{
    float resultado = a * b;
    printf("El resultado es %.2f \n", resultado);
}
/** @brief Realiza la divicion de A y B
 *  y lo muestra en pantalla. Valida no realizar division por 0
 *
 *  @param a El primer operando.
 *  @param b El segundo operando
 *  @return Void.
 */
void dividir(float a, float b)
{
    if (b != 0)
    {
        float resultado = a / b;
        printf("El resultado es %.2f \n", resultado);
    }
    else
    {
        printf("Operacion no permitida: Divicion por zero \n");
    }
}
/** @brief Calcula el factorial de A
 *  y lo muestra en pantalla
 *
 *  @param a El numero sobre el cual calcular el factorial
 *  @return Void.
 */
void factorial(float a)
{
    int i;
    float factorial = 1;

    if (a < 0)
    {
        printf("Operacion no permitida: Factorial de un numero negativo no existe \n");
    }
    for (i = 1; i <= a; i++)
    {
        factorial = factorial * i;
    }
    printf("El factorial es %.2f \n", factorial);
}
#endif // FUNCIONES_H_INCLUDED
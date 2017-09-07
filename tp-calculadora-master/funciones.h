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
void sumar(float a, float b);

/** @brief Realiza la resta de A y B
 *  y lo muestra en pantalla
 *
 *  @param a El primer operando.
 *  @param b El segundo operando
 *  @return Void.
 */
void restar(float a, float b);

/** @brief Realiza la multiplicación de A y B
 *  y lo muestra en pantalla
 *
 *  @param a El primer operando.
 *  @param b El segundo operando
 *  @return Void.
 */
void multiplicar(float a, float b);

/** @brief Realiza la divicion de A y B
 *  y lo muestra en pantalla. Valida no realizar division por 0
 *
 *  @param a El primer operando.
 *  @param b El segundo operando
 *  @return Void.
 */
void dividir(float a, float b);

/** @brief Calcula el factorial de A
 *  y lo muestra en pantalla
 *
 *  @param a El numero sobre el cual calcular el factorial
 *  @return Void.
 */
void factorial(float a);

#endif // FUNCIONES_H_INCLUDED

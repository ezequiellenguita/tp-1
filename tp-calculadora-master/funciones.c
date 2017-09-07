
void sumar(float a, float b)
{
    float resultado = a + b;
    printf("El resultado es %.2f \n", resultado);
}
void restar(float a, float b)
{
    float resultado = a - b;
    printf("El resultado es %.2f \n", resultado);
}
void multiplicar(float a, float b)
{
    float resultado = a * b;
    printf("El resultado es %.2f \n", resultado);
}
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

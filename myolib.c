/* funciones matematicas */
/** \brief Suma dos valores enteros pasado por parametros
 *
 * \param valor1 es el primer valor entero.
 * \param valor2 es el segundo valor entero.
 * \return nos retorna un numero entero
 *
 */
int sumarvalores(int valor1, int valor2)
{
    return(valor1+valor2);
}

/** \brief Resta dos valores enteros pasado por parametros
 *
 * \param valor1 es el primer valor entero
 * \param valor2 es el segundo valor entero
 * \return nos retorna un numero entero
 *
 */
int restarvalores(int valor1, int valor2)
{
    return(valor1-valor2);
}


/** \brief Divide dos valores enteros pasado por parametros
 *
 * \param valor1 el primer flotante
 * \param valor2 es el segundo flotante
 * \return nos retorna un numero decimal
 *
 */
float divvalores(float valor1, float valor2)
{
    if (0 != valor2)
    {
        return (valor1/valor2);
    }
    else
    {
        return (0);
    }

}


/** \brief Multiplica dos valores enteros pasado por parametros
 *
 * \param valor1 el primer valor entero
 * \param valor2 es el segundo entero
 * \return nos retorna un numero entero
 *
 */
int multivalores(int valor1, int valor2)
{
    return (valor1*valor2);

}


/** \brief Factoriza un valor enteros pasado por parametros
 *
 * \param valor entero
 * \param
 * \return nos retorna un numero entero
 *
 */
int factorialvalores(int valor)
{
    int factorial=1;

    for(int i=1; i<=valor;i++)
    {
        factorial=factorial*i;
    }

     return (factorial);
}


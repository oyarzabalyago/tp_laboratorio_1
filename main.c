#include <stdio.h>
#include <stdlib.h>
#include "myolib.h"

int main()
{
    // declaro las variables
    int menu=0;
    int num1;
    int num2;
    int flag=0;



    // limpio la pantalla
    system("cls");
    printf("   CALCUALDORA\n\n");

    do
    {
        // muestro el menu
        printf("Elija una opcion:\n");
        printf("1 - Ingresar 1er operando \n");
        printf("2 - Ingresar 2do operando \n");
        printf("3 - Calcular todas las operaciones \n");
        printf("4 - Informar resultados \n");
        printf("5 - Salir \n\n");

        // capturo el valor del menu
        scanf("%d", &menu);
        while(menu <0 || menu >6)
        {
            system("cls");
            printf("Error al elegir opcion del menu\n\n");
            printf("Elija una opcion nuevamente:\n");
            printf("1 - Ingresar 1er operando \n");
            printf("2 - Ingresar 2do operando \n");
            printf("3 - Calcular todas las operaciones \n");
            printf("4 - Informar resultados \n");
            printf("5 - Salir \n\n");
            scanf("%d", &menu);
        }

        // lo mando al menu correspondiente
        switch(menu)
        {
            case 1:
                    // pido el primer valor por pantalla
                    printf("Ingrese un numero :");
                    printf("\n\n");

                    // obtengo el valor y lo seteo en la variable
                    scanf("%d", &num1);

                    // muestro por pantalla el numero ingresado
                    printf("El primer numero ingresado es: %d\n\n", num1);

                    // marco que pase por ese primer menu
                    flag=1;

                    break;
            case 2:
                    if(flag==1)
                    {
                        printf("Ingrese un segundo numero: ");
                        printf("\n\n");

                        // obtengo el valor y lo seteo en la variable
                        scanf("%d", &num2);


                        while(num2<0)
                        {
                            printf("Error, Reingrese un segundo numero:\n\n");

                            // obtengo el valor y lo seteo en la variable
                            scanf("%d", &num2);
                        }

                        printf("El segundo numero ingresado es: %d\n\n", num2);
                        printf("\n\n");

                        flag=2;
                    }
                    else
                    {
                        printf("Error, primero ingrese el valor de X (Opcion menu 1)\n\n\n");
                    }
                    break;

            case 3:
                    if(2==flag)
                    {
                        printf("Los Calculos se han realizado \n\n\n");
                        flag=3;
                    }
                    else
                    {
                        printf("Error, no ha ingresado todos los numeros \n\n\n");
                    }
                    break;

            case 4:

                    if(3==flag)
                    {
                        // muestro el resultados de las funciones en pantalla
                        printf("El resultado de %d+%d es: %d\n",num1,num2,sumarvalores(num1,num2));
                        printf("El resultado de %d-%d es: %d\n",num1,num2,restarvalores(num1,num2));
                        printf("El resultado de %d/%d es: %.2f\n",num1,num2,divvalores(num1,num2));
                        if(0!=num2)
                        {
                            printf("El resultado de %d*%d es: %d\n",num1,num2,multivalores(num1,num2));
                        }
                        else
                        {
                            printf("No es posible dividir por cero");
                        }
                        printf("El factorial de %d es: %d y El factorial de %d es: %d\n\n\n",num1,factorialvalores(num1),num2,factorialvalores(num2));

                        break;
                    }
                    else
                    {
                        printf("Error, primeramente debe ingresar los valores a calcular");
                    }

            case 5: break;

            default:    printf("Por favor ingrese un valor entre 1 y 5\n\n");

        }

    }while(menu!=5);

    printf("\n\n Gracias por usar la calculadora!\n\n");

    return 0;
}



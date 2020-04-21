/*
 * Ejercicio 1:
 * Escribir la funcion calcularMayor(). La funcion debe recibir dos
 * numeros int y devolver por referencia, el numero mayor.
 * La funcion debe retornar un 1 si encontro un mayor, o un 0
 * si ambos numeros son iguales.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

int calcularMayor (int *pResultado, int operador1, int operador2);

int main(void)
{
	setbuf (stdout,NULL);
	int resultado;
	int num1,num2;
	// Pedir dos numeros al usuario con utn_getNumber() y guardarlos
	// en num1 y num 2


	utn_getNumero (&num1,"\ningrese primer numero: \n","\nIncorrecto",-500,500,2);
	utn_getNumero (&num2,"\ningrese segundo numero: \n","\nIncorrecto",-500,500,2);

	// luego llamo a la funcion calcularMayor()

		if(calcularMayor(&resultado,num1, num2) == 1)
			{
				printf("\nel mayor es %d", resultado);
			}
		if(calcularMayor(&resultado,num1, num2) == 0)
			{
				printf("\nambos numeros son iguales");

			}

	return EXIT_SUCCESS;
}


int calcularMayor (int *pResultado, int operador1, int operador2)
{

int retorno=-1;

if(pResultado != NULL)
{

	if (operador1 < operador2)
	{
		retorno=1;
		*pResultado=operador2;
	}
	else
	{
		retorno=1;
		*pResultado=operador1;
	}
	if(operador1 == operador2)
	{
		retorno=0;
	}
}
	return retorno;
}

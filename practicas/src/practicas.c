/*
 ============================================================================
 Name        : practicas.c
 Author      : JUAN
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 * EJERCICIO 1:
Ingresar números hasta que el usuario lo decida. Los números tienen que estar
comprendidos entre -100 y 100. Determinar:
a. Cantidad de números positivos.
b. Cantidad de números negativos.
c. Promedio de números.
d. De los positivos el máximo.

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"


int main(void) {
	setbuf (stdout,NULL);

	char respuesta;
	int numero;
	int valoracion;
	int positivo;
	int contadorDePositivos=0;
	int contadorDeNegativos=0;
	int acumuladorDeNumeros=0;
	int sumador=0;
	float promedio;
	int i=0;
	int maximoDePositivos;

do{
	valoracion = utn_getNumero (&numero,"Ingrese numeros entre -100 y 100: \n","Fuera de rango. \n",-100,100, 2);
		if(valoracion == 0)
		{
			acumuladorDeNumeros=numero+acumuladorDeNumeros;

			positivo= numerosPositivos(numero);
			if (positivo == 0)
			{
				contadorDePositivos ++;
				if(i==0)
				{
					maximoDePositivos=numero;
					i=1;
				}
				if (maximoDePositivos<numero)
				{
					maximoDePositivos=numero;
				}
			}
			else{
				contadorDeNegativos ++;
			}
			sumador=sumador+1; //para el promedio
			printf("quiere seguir ingresando numeros? \n");
			fflush(stdin);
			scanf("%c",&respuesta);
	}
	}while (respuesta != 's');

	promedio= (float)acumuladorDeNumeros/sumador;

	printf("la cantidad de positivos es %d\n", contadorDePositivos);
	printf("la cantidad de negativos es %d\n", contadorDeNegativos);
	printf("el maximo de los positivos es %d\n", maximoDePositivos);
	printf("el promedio es %f\n",promedio);

	return EXIT_SUCCESS;
}



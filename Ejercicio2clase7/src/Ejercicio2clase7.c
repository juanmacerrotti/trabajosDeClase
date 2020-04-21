/*
 * Ejercicio 2:
 * crear un programa que permita registrar el valor de temperatura maxima de cada dia de un mes.
 * Definir un array de floats de 31 posiciones. Cada posicion corresponderá a un dia
 * del mes. Hacer un programa con un menu de dos opciones, 1.imprimir array y 2.cargar array
 * Al elegir la opcion 1, se imprimira el indice y el valor de cada posicion del array.
 * Al elegir la opcion 2 que le pida al usuario que ingrese un numero de dia (1 a 31)
 * y luego que ingrese un valor de temperatura. Almacenar el valor en el indice correspondiente
 * Ambas opciones deben volver al menu ppal.
 * Utilizar la funcion utn_getNumeroFloat() de la biblioteca utn.h
 */


#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
int cargarTemperatura (float *pArray, int longitud);
#define CANTIDADDEDIDAS 31

int main(void) {
	setbuf (stdout,NULL);

	float ArrayTemperaturas [CANTIDADDEDIDAS];
	int opcionesDelMenu;
	int respuesta;

	inicializarArrayFlotante(ArrayTemperaturas,CANTIDADDEDIDAS,-1000);

	do
	{

		respuesta= utn_getNumero(&opcionesDelMenu,"\n1.Imprimiar array.\n2. Cargar array.\n3. Salir", "Error opcion invalida. \n", 0, 3,2);
		if (respuesta == 0)
		{
			switch (opcionesDelMenu)
			{
			case 1:
				printArrayfloat (ArrayTemperaturas, CANTIDADDEDIDAS);
				break;
			case 2:
				cargarTemperatura (ArrayTemperaturas, CANTIDADDEDIDAS);
				break;
			}
		}
	}while(opcionesDelMenu != '3');
	return EXIT_SUCCESS;
}


int cargarTemperatura (float *pArray, int longitud)
{
	int retorno = -1;
	int dia;
	float temperatura;
	int respuesta;

	if (pArray != NULL && longitud >0)
	{
		retorno = 0;
		respuesta=utn_getNumero(&dia,"\nQue dia quiere modificar?\n","Dia invalido (rango de 1 a 31)\n",1,longitud,2);
		if (respuesta ==0)
		{
			respuesta = utn_getNumeroFlotante(&temperatura,"\nIngrese temperatura", "\nError no es una temperatura.",-50,70,2);
			if (respuesta ==0)
			{
				pArray[dia-1] = temperatura;
			}
		}
	}
	return retorno;
}

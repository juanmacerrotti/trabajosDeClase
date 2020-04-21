/*
 ============================================================================
 Name        : arrays.c
 Author      : JUAN
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_EMPLEADOS 9

int printArrayInt (int* pArray, int limite);
int ordenarArrayCrecienteInt (int* pArray, int limite);


int main(void) {

	int arrayEdades[CANTIDAD_EMPLEADOS] = {54,26,93,17,77,31,44,55,27};
	int respuesta;

	//SI QUIERO ESCRIBIR LA POSICION edades [0]=34
	printArrayInt(arrayEdades,CANTIDAD_EMPLEADOS);

	respuesta= ordenarArrayCrecienteInt(arrayEdades,CANTIDAD_EMPLEADOS);
	if(respuesta > 0)
	{
		printf("\n \niteraciones: %d\n \n", respuesta);
	}

	printArrayInt(arrayEdades,CANTIDAD_EMPLEADOS);

	respuesta= ordenarArrayCrecienteInt(arrayEdades,CANTIDAD_EMPLEADOS);
		if(respuesta > 0)
		{
			printf("\n \niteraciones: %d\n \n", respuesta);
		}

		printArrayInt(arrayEdades,CANTIDAD_EMPLEADOS);
	return EXIT_SUCCESS;
}

int printArrayInt (int* pArray, int limite){
	int retorno = -1;
	int i;

	if(pArray != NULL && limite > 0)
	{
		retorno=0;
		for (i=0;i<limite;i++)
		{
			printf("\n[DEBUG]  Indice %d - valor: %d", i, pArray[i]);
		}
	}

	return retorno;
}

int ordenarArrayCrecienteInt (int* pArray, int limite) //CANTIDAD DE INTERACIONES QUE DA EN FORMA DESCENDENTE
{
	int flagSWap;
	int i;
	int contador;
	int retorno= -1;
	int buffer;
	int limiteVariable;

	if(pArray != NULL && limite >= 0)
	{
		limiteVariable=limite-1;
		do
		{
			flagSWap=0;
			for(i=0;i<limiteVariable;i++)
			{
				if(pArray[i] < pArray[i+1])
				{
					flagSWap=1;
					buffer= pArray[i];
					pArray[i] = pArray[i+1];
					pArray[i+1] = buffer;
				}
				contador++;
			}
			retorno=contador;
			limiteVariable--;
		}while(flagSWap);
	}

	return retorno;
}



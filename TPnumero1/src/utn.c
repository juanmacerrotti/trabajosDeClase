/*
 * utn.c
 *
 *  Created on: 7 abr. 2020
 *      Author: Juan
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)




{
	int retorno = -1;
	int bufferInt;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			scanf("%d",&bufferInt);
			if(bufferInt >= minimo && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}

int utn_getCaracter(char* pResultado, char* mensaje,char* mensajeError, char minimo,char maximo,int reintentos)
{
	int retorno = -1;
	char buffer;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			fflush(stdin);
			scanf("%c",&buffer);
			if(buffer >= minimo && buffer <= maximo)
			{
				*pResultado = buffer;
				retorno = 0;
				break;
			}
			printf("%s",mensajeError);
			reintentos--;
		}while(reintentos>=0);

	}
	return retorno;
}

int sumarDosNumeros (int operador1, int operador2)  //FUNCION PARA SUMAR DOS NUMEROS
{
	int resultado;

	resultado=operador1+operador2;

	return resultado;
}

int restarDosNumeros (int operador1, int operador2)  //FUNCION PARA RESTAR DOS NUMEROS
{
	int resultado;

	resultado=operador1-operador2;

	return resultado;
}

int multiplicarDosNumeros (int operador1, int operador2) // FUNCION PARA MULTIPLICAR DOS NUMEROS
{
	int resultado;

	resultado=operador1*operador2;

	return resultado;
}

int divisionDeDosNumeros (int operador1, int operador2, float *direccionDelresultado)    //FUNCION DE DIVIDIR
{
	float resultado;
	int error;

	if (operador2 != 0)
	{
	resultado= (float) operador1/operador2;
	*direccionDelresultado=resultado;
	error=0;
	}
	else{
		error=1;
	}
	return error;

}

int sacarFactorial (int operador, float *direccionDelResultado)  //FUNCION PARA SACAR FACTORIALES
{

	int i;
	long int factorial=1;
	int error;

	if(operador >0)
	{
	for(i=1 ; i <= operador; i++)
			{
				factorial=factorial*i;
			}
	*direccionDelResultado=factorial;
	error=0;

	}
	else{
		error=1;
	}

	return error;
}

/*
 * utn.c
 *
 *  Created on: 7 abr. 2020
 *      Author: Juan
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


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
	int retorno=-1;

	if (operador2 != 0)
	{
	resultado= (float) operador1/operador2;
	*direccionDelresultado=resultado;
	retorno=0;
	}

	return retorno;

}

int sacarFactorial (int operador, float *direccionDelResultado)  //FUNCION PARA SACAR FACTORIALES
{

	int i;
	long int factorial=1;
	int retorno=-1;

	if(operador >0)
	{
	for(i=1 ; i <= operador; i++)
			{
				factorial=factorial*i;
			}
	*direccionDelResultado=factorial;
	retorno=0;

	}
	return retorno;
}

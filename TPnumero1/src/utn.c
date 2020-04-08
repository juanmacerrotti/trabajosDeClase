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
	int resultado;
	int error;

	if (operador2 != 0)
	{
	resultado=operador1/operador2;
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
	int factorial=1;
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


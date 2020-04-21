/*
 * utn.c
 *
 *  Created on: 7 abr. 2020
 *      Author: Juan
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int esNumerica(char* cadena);
static int getInt(int* pResultado);
static int myGets(char* cadena, int longitud);


int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int buffer;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			if(getInt(&buffer) == 0 && buffer >= minimo && buffer <= maximo)
			{
				*pResultado = buffer;
				retorno = 0;
				break;
			}
			reintentos--;
			printf("%s",mensajeError);
		}while(reintentos >= 0);
	}
	return retorno;
}

float utn_getNumeroFlotante (float *pResultado, char *mensaje, char *mensajeError, float minimo, float maximo, int reintentos)
{
	float bufferFloat; //interactuamos con el usuario
	int retorno=-1;


		if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo<=maximo && reintentos>=0)
		{
			do
			{
				printf("%s",mensaje);
				scanf("%f",&bufferFloat);
					if (bufferFloat >= minimo && bufferFloat <=maximo)
					{
					*pResultado=bufferFloat;
					retorno=0;
					break;
					}
					else
					{
					printf("%s",mensajeError);
					reintentos--;
					}
			}
			while (reintentos >=0);

		}

	return retorno;
}

int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError,int minimo, int maximo, int reintentos)

{
int retorno=-1;
char buffer; //interactuamos con el usuario



	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo<=maximo && reintentos>=0)
	{
		do
		{
			printf("%s",mensaje);
			fflush(stdin);
			scanf("%c",&buffer);
				if (buffer >= minimo && buffer <=maximo)
				{
					*pResultado=buffer;
					retorno=0;
					break;
				}
				else
				{
					printf("%s",mensajeError);
					reintentos--;
				}
		}
		while (reintentos >=0);

	}

return retorno;
}

int utn_getSumarDosNumeros (int operador1, int operador2)  //FUNCION PARA SUMAR DOS NUMEROS
{
	int resultado;

	resultado=operador1+operador2;

	return resultado;
}

int utn_getRestarDosNumeros (int operador1, int operador2)  //FUNCION PARA RESTAR DOS NUMEROS
{
	int resultado;

	resultado=operador1-operador2;

	return resultado;
}

int utn_getMultiplicarDosNumeros (int operador1, int operador2) // FUNCION PARA MULTIPLICAR DOS NUMEROS
{
	int resultado;

	resultado=operador1*operador2;

	return resultado;
}

int utn_getDivisionDeDosNumeros (int operador1, int operador2, float *direccionDelResultado)    //FUNCION DE DIVIDIR
{
	float resultado;
	int retorno=-1;

	if (direccionDelResultado != NULL && operador2 != 0)
	{
	resultado= (float) operador1/operador2;
	*direccionDelResultado=resultado;
	retorno=0;
	}

	return retorno;

}

int utn_getSacarFactorial (int operador, float *direccionDelResultado)  //FUNCION PARA SACAR FACTORIALES
{

	int i;
	long int factorial=1;
	int retorno=-1;

	if(direccionDelResultado != NULL && operador >0)
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

int numerosPositivos (int operador)
{
	int retorno=-1;

	if(operador>0)
	{
		retorno=0;
	}
	return retorno;
}

int numerosNegativos (int operador)
{
	int retorno=-1;

		if(operador<=0)
		{
			retorno=0;
		}
		return retorno;
}
int printArrayInt (int* pArray, int limite){
	int retorno = -1;
	int i;

	if(pArray != NULL && limite >= 0)
	{
		retorno=0;
		for (i=0;i<limite;i++)
		{
			printf("\n[DEBUG]  Indice %d - valor: %d", i, pArray[i]);
		}
	}

	return retorno;
}

int ordenarArrayInt (int* pArray, int limite) //CANTIDAD DE INTERACIONES QUE DA EN FORMA DESCENDENTE
{
	int flagSWap;
	int i;
	int contador;
	int retorno= -1;
	int buffer;

	if(pArray != NULL && limite >= 0)
	{
		do
		{
			flagSWap=0;
			for(i=0;i<limite-1;i++)
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
		}while(flagSWap);
	}

	return retorno;
}



/**
 * \brief
 * \param pResultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * \return Retorna 0 (EXITO) si se obtiene un numero entero y -1 (ERROR) si no
 *
 */
static int getInt(int* pResultado)
{
    int retorno=-1;
    char buffer[4096];

    if(myGets(buffer,sizeof(buffer))==0 && esNumerica(buffer))
    {
    	retorno = 0;
    	*pResultado = atoi(buffer);
    }
    return retorno;
}


/**
 * \brief 	Lee de stdin hasta que encuentra un '\n' o hasta que haya copiado en cadena
 * 			un máximo de 'longitud - 1' caracteres.
 * \param pResultado Puntero al espacio de memoria donde se copiara la cadena obtenida
 * \param longitud Define el tamaño de cadena
 * \return Retorna 0 (EXITO) si se obtiene una cadena y -1 (ERROR) si no
 *
 */
static int myGets(char* cadena, int longitud)
{
	fflush(stdin);
	fgets(cadena,longitud,stdin);

	cadena[strlen(cadena)-1] = '\0';

	return 0;
}


/**
 * \brief Verifica si la cadena ingresada es numerica
 * \param cadena Cadena de caracteres a ser analizada
 * \return Retorna 1 (vardadero) si la cadena es numerica y 0 (falso) si no lo es
 *
 */
static int esNumerica(char* cadena)
{
	int retorno = 1;
	int i=0;

	if(cadena[0] == '-')
	{
		i = 1;
	}

	for( ; cadena[i] != '\0' ; i++)
	{
		if(cadena[i] > '9' || cadena[i] < '0')
		{
			retorno =  0;
			break;
		}
	}
	return retorno;
}

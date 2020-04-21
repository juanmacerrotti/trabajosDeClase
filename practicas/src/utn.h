/*
 * utn.h
 *
 *  Created on: 7 abr. 2020
 *      Author: Juan
 */

#ifndef UTN_H_
#define UTN_H_

int utn_getNumero (int* pResultado, char*mensaje, char *mensajeError,int minimo, int maximo, int reintentos);
float utn_getNumeroFlotante (float *pResultado, char *mensaje, char *mensajeError, float minimo, float maximo, int reintentos);
int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError,int minimo, int maximo, int reintentos);
int utn_getSumarDosNumeros (int operador1, int operador2);
int utn_getRestarDosNumeros (int operador1, int operador2);
int utn_getMultiplicarDosNumeros (int operador1, int operador2);
int utn_getDivisionDeDosNumeros (int operador1, int operador2, float *direccionDelResultado);
int utn_getSacarFactorial (int operador, float *direccionDelResultado);
int numerosPositivos (int operador);
int numerosNegativos (int operador);
int ordenarArrayInt (int* pArray, int limite);
int printArrayInt (int* pArray, int limite);
static int esNumerica (char* cadena);
static int myGets(char* cadena, int longitud);
static int getInt(int* pResultado);

#endif /* UTN_H_ */

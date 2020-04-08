/*
 * utn.h
 *
 *  Created on: 7 abr. 2020
 *      Author: Juan
 */

#ifndef UTN_H_
#define UTN_H_

int dividir (int operador1, int operador2 , float *pResultado);
int utn_getNumero (int* pResultado, char*mensaje, char *mensajeError,int minimo, int maximo, int reintentos);
int utn_getNumeroFlotante (float *pResultado, char *mensaje, char *mensajeError, float minimo, float maximo, int reintentos);
int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError,int minimo, int maximo, int reintentos);

#endif /* UTN_H_ */

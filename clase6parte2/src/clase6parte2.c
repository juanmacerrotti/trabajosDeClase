/*
 ============================================================================
 Name        : clase6parte2.c
 Author      : JUAN
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	setbuf (stdout,NULL);
	char nombre [11]="juan"; //ultimo caracter \0 termina
	char auxiliar [3];

	/*strcpy(nombre, "juan"); //nombre="juan"
	strcpy(auxiliar,nombre); //funcion INSEGURA*/

	strbcpy(auxiliar,nombre,sizeof(auxiliar)); //copiar un array entero en otro
	strnleng(auxiliar, sizeof(auxiliar)); //da el tamaño usado del array.
	strncat(nombre," lala",sizeof(nombre)); //concatenar arrays/palabras
	sbprintf(auxiliar, sizeof(auxiliar,"mi size of es %d"), 545); //guardo en auxiliar, con un maximo de size, el texto ese y llamo a las variables despues de la coma



	return EXIT_SUCCESS;
}


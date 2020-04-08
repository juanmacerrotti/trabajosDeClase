/*
 ============================================================================
 Name        : CLASEBIBLIOTECAS.c
 Author      : JUAN
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {
	setbuf (stdout,NULL);

	int edad;
	int respuesta;
	int peso;
	char letra;
	float altura;

	respuesta =utn_getNumero (&edad,"Edad? \n","Error la edad debe ser desde 0 a 199\n", 0,199,2);
	if (respuesta ==0)
	{
		printf("la edad es %d \n", edad);
	}
	else{
		printf("ERROR\n");
	}

	respuesta =utn_getNumero (&peso,"peso? \n","Error la edad debe ser desde 0 a 500\n", 0,500,3);
		if (respuesta ==0)
		{
			printf("el peso es %d \n", peso);
		}
		else{
			printf("ERROR\n");
		}

	respuesta =utn_getNumeroFlotante (&altura,"ingreso numero con coma? \n","Error la edad debe ser desde 0mm a 2 m\n", 0 , 2 ,3);
		if (respuesta ==0)
		{
			printf("la altura es %f\n", altura);
		}
		else{
			printf("ERROR\n");
		}

		respuesta =utn_getCaracter (&letra,"Edad? \n","Error la respuesta debe ser A o J", 'A','J',2);
			if (respuesta ==0)
			{
				printf("el sexo es  %c \n", letra);
			}
			else{
				printf("ERROR\n");
			}
return EXIT_SUCCESS;
}



/*
 ============================================================================
 Name        : tpnumero1.c
 Author      : juan
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

	int A;
	int B;

	int suma;
	int resta;
	float division;
	int multiplicacion;
	long int factorialA;
	long int factorialB;
	int valoracionDeLaDivision;
	float resultadoDeLaDivision;
	int valoracionDeFactorialA;
	int valoracionDeFactorialB;
	float resultadoDefactorialA;
	float resultadoDefactorialB;
	char operacion;



	printf("ingrese primer numero:");
	scanf("%d",&A);
	printf("ingrese segundo numero:");
	scanf("%d",&B);

	printf("Que operacion desea realizar?\na) calcular suma.\nb) calcular resta. \nc) calcular multiplicacion. \nd) calcular division \ne) calcular factorial.\n");
	fflush(stdin);
	scanf("%c",&operacion);


	printf("\nA=%d",A);
	printf("\nB=%d  \n",B);

	switch (operacion)
	{
		case 'a':
			suma= sumarDosNumeros(A,B);
			printf("\nel resultado de A+B es %d",suma);
			break;

		case 'b':
			resta= restarDosNumeros(A,B);
			printf("\nel resultado de A-B es %d",resta);
			break;

		case 'c':
			multiplicacion= multiplicarDosNumeros (A,B);
			printf("\nel resultado de A*B es %d",multiplicacion);
			break;

		case 'd':
			valoracionDeLaDivision=divisionDeDosNumeros(A,B,&resultadoDeLaDivision);
			if (valoracionDeLaDivision ==1)
					{
								printf("\nno se puede dividir por 0");
					}else
					{
								division=resultadoDeLaDivision;
								printf("\nel resultado de A/B es %.2f",division);
					}
			break;

		case 'e':
			valoracionDeFactorialA = sacarFactorial(A,&resultadoDefactorialA);
			valoracionDeFactorialB = sacarFactorial(B,&resultadoDefactorialB);
			if(valoracionDeFactorialA ==1  && valoracionDeFactorialB ==1){
						printf("\nno se puede calcular el factorial de un numero negativo ni de 0");
					}
					if(valoracionDeFactorialA == 0 && valoracionDeFactorialB==1)
					{
						factorialA=resultadoDefactorialA;
						printf("\nel factorial de A es %ld, no se puede calcular el factorial de B.",factorialA);
					}
					if(valoracionDeFactorialB == 0 && valoracionDeFactorialA==1)
							{
								factorialB=resultadoDefactorialB;
								printf("\nel factorial de A es %ld, no se puede calcular el factorial de B.",factorialB);
							}
					if(valoracionDeFactorialA == 0 && valoracionDeFactorialB == 0)
					{
						factorialA=resultadoDefactorialA;
						factorialB=resultadoDefactorialB;
						printf("\nel factorial de A es %ld y el factorial de B es %ld",factorialA,factorialB);
					}
					break;
		default:
			printf("Ese comando no es correcto");
	}
	return EXIT_SUCCESS;
}




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
	int factorialA;
	int factorialB;
	int valoracionDeLaDivision;
	float resultadoDeLaDivision;
	int valoracionDeFactorialA;
	int valoracionDeFactorialB;
	float resultadoDefactorialA;
	float resultadoDefactorialB;



	printf("ingrese primer numero:");
	fflush(stdin);
	scanf("%d",&A);

	printf("ingrese segundo numero:");
	fflush(stdin);
	scanf("%d",&B);

	suma= sumarDosNumeros(A,B);			//SE REALIZAN LAS OPERACIONES

	resta= restarDosNumeros(A,B);

	valoracionDeLaDivision=divisionDeDosNumeros(A,B,&resultadoDeLaDivision);

	multiplicacion= multiplicarDosNumeros (A,B);

	valoracionDeFactorialA = sacarFactorial(A,&resultadoDefactorialA);

	valoracionDeFactorialB = sacarFactorial(B,&resultadoDefactorialB);

	//se imprimen los valores
		printf("\nA=%d",A);
		printf("\nB=%d \n",B);
		printf("\nel resultado de A+B es %d",suma);
		printf("\nel resultado de A-B es %d",resta);
		printf("\nel resultado de A*B es %d",multiplicacion);
	//se verifican los valores conflictivos
		if (valoracionDeLaDivision ==1)
		{
					printf("\nno se puede dividir por 0");
		}else
		{
					division=resultadoDeLaDivision;
					printf("\nel resultado de A/B es %.2f",division);
		}


		if(valoracionDeFactorialA ==1  && valoracionDeFactorialB ==1){
			printf("\nno se puede calcular el factorial de un numero negativo ni de 0");
		}
		if(valoracionDeFactorialA == 0 && valoracionDeFactorialB==1)
		{
			factorialA=resultadoDefactorialA;
			printf("\nel factorial de A es %d, no se puede calcular el factorial de B",factorialA);
		}
		if(valoracionDeFactorialB == 0 && valoracionDeFactorialA==1)
				{
					factorialB=resultadoDefactorialB;
					printf("el factorial de A es %d, no se puede calcular el factorial de B",factorialB);
				}
		if(valoracionDeFactorialA == 0 && valoracionDeFactorialB == 0)
		{
			factorialA=resultadoDefactorialA;
			factorialB=resultadoDefactorialB;
			printf("\nel factorial de A es %d y el factorial de B es %d",factorialA,factorialB);
		}

	return EXIT_SUCCESS;
}




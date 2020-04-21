/*
 ============================================================================
 Name: tpnumero1.c
 Author: Juan manuel Cerrotti
 Division:	1H

 ACLARACIONES:

 Dejo aca una aclaracion que al menos yo tome de la consiga:

 1- Al pedir solo bibliotecar las operaciones matematicas no use una biblioteca para pedir los numeros, ya que tampoco
 dicho sea de paso, me parecio necesario al pedir solo dos operadores y no aclarar nada sobre reintentos en caso de error.

 2. Use el long int para intentar darle mas margen a los factoriales con numeros altos ya que no entraban dentro de una variable de tipo int.

 3. Decidi usar el do while para que puedan probarlo sin necesidad de tener que estar pausando y dandole arranque para probar los distintos operadores y casos especiales (division por 0, factoriales negativos, etc).

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int main(void) {
	setbuf (stdout,NULL);

	int A;
	int B;

	 //las variables con el nombre de "valoracionDe" evaluan si puede realizarse la operacion matematica y las variables "resultadoDe" son las encargadas de guardar el resultado en caso de ser posible realizar la operacion.
	int suma;
	int resta;
	float division;
	int multiplicacion;
	long int factorialA;   //use long int para poder abarcar resultados mas grandes de factoriales.
	long int factorialB;
	int valoracionDeLaDivision;
	float resultadoDeLaDivision;
	int valoracionDeFactorialA;
	int valoracionDeFactorialB;
	float resultadoDefactorialA;
	float resultadoDefactorialB;
	char operacion;  //se encarga de almacenar que tipo de operacion matematica quiere hacer el usuario.
	char pregunta; //variable que almacena la respuesta en caso de querer salir.


do{
	printf("ingrese primer numero: ");
	scanf("%d",&A);
	printf("ingrese segundo numero: ");
	scanf("%d",&B);

	printf("\nQue operacion desea realizar?\na) calcular suma.\nb) calcular resta. \nc) calcular multiplicacion. \nd) calcular division \ne) calcular factorial.\n");     //menu de opciones donde se indica operacion a realizar
	fflush(stdin);
	scanf("%c",&operacion);


	printf("\nA=%d",A);
	printf("\nB=%d \n",B);

	switch (operacion)    //se evaluan los distintos casos de la operacion.
	{
		case 'a': //suma
			suma= sumarDosNumeros(A,B);
			printf("\nel resultado de A+B es %d",suma);
		break;

		case 'b':  //resta
			resta= restarDosNumeros(A,B);
			printf("\nel resultado de A-B es %d",resta);
		break;

		case 'c': //multiplicacion
			multiplicacion= multiplicarDosNumeros (A,B);
			printf("\nel resultado de A*B es %d",multiplicacion);
		break;

		case 'd':  //division
		valoracionDeLaDivision=divisionDeDosNumeros(A,B,&resultadoDeLaDivision);
		//se evalua que no este dividiendo por 0
			if (valoracionDeLaDivision ==1)
			{
				printf("\nno se puede dividir por 0");
			}else
			{
				division=resultadoDeLaDivision;
				printf("\nel resultado de A/B es %.2f",division);
			}
		break;

		case 'e':  //factoriales
			valoracionDeFactorialA = sacarFactorial(A,&resultadoDefactorialA);
			valoracionDeFactorialB = sacarFactorial(B,&resultadoDefactorialB);

			//se evaluan los factoriales menores o iguales a 0
			if(valoracionDeFactorialA ==1  && valoracionDeFactorialB ==1)
			{
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
		default:  //en caso de no poner un operador correcto, lo indica.
			printf("Ese comando no es correcto.");
	}

		printf("\nPresione una letra cualquiera para continuar o 's' para salir \n");
		fflush(stdin);
		scanf("%c", &pregunta);
}while (pregunta != 's' || pregunta != 'S');


return EXIT_SUCCESS;
}




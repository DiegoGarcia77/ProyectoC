#include <stdio.h>
#include "archivo2.h"
#include "archivo1.c"
#include <stdlib.h>

void menu()
{

	printf("MENU");
	printf("1-SUMAR\n");
	printf("2-RESTAR\n");
	printf("3-MULTIPLICAR\n");
	printf("4-DIVIDIR\n");
	printf("Introduce una opcion: ");

}

int main(void)
{
	int opcion;
	scanf("%d",&opcion);

	menu();

	switch(opcion)
	{
		case 1:
		{
			int num1,num2;

			printf("Introduce un numero: ");
			scanf("%d",&num1);
			printf("Introduce otro numero: ");
			scanf("%d",&num2);

			int resultado=sumar(num1,num2);

			printf("El resultado es%d: ",resultado);
			break;
		}

		case 2:
		{
			int num1,num2;

			printf("Introduce un numero: ");
			scanf("%d",&num1);
			printf("Introduce otro numero: ");
			scanf("%d",&num2);

			int resultado=restar(num1,num2);

			printf("El resultado es%d: ",resultado);
			break;
		}

		case 3:
		{
			int num1,num2;

			printf("Introduce un numero: ");
			scanf("%d",&num1);
			printf("Introduce otro numero: ");
			scanf("%d",&num2);

			int resultado=multiplicar(num1,num2);

			printf("El resultado es%d: ",resultado);
			break;
		}

		case 4:
		{
			int num1,num2;

			printf("Introduce un numero: ");
			scanf("%d",&num1);
			printf("Introduce otro numero: ");
			scanf("%d",&num2);

			double resultado=dividir(num1,num2);

			printf("El resultado es%lf: ",resultado);
			break;
		}

		case 0:
		{
			exit(-1);
		}
	}

}
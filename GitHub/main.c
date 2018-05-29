#include <stdio.h>
#include <archivo2.h>

function menu()
{

	printf("MENU");
	printf("1-SUMAR\n");
	printf("2-RESTAR\n");
	printf("3-MULTIPLICAR\n");
	printf("4-DIVIDIR\n");
	printf("Introduce una opcion: ");

}

void main(void)
{
	double opcion;
	scanf("%lf",&opcion);
	menu();

	switch(opcion)
	{
		case 1:
		{
			sumar();
			break;
		}

		case 2:
		{
			restar();
			break;
		}

		case 3:
		{
			multiplicar();
		}

		case 4:
		{
			dividir();
		}

		case 0:
		{
			exit(-1);
		}
	}

}
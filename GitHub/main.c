#include <stdio.h>

function menu()
{
	printf("MENU");
	printf("1-SUMAR\n");
	printf("2-RESTAR\n");
	printf("3-MULTIPLICAR\n");
	printf("4-DIVIDIR\n");
}

void main(void)
{
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
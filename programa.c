#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define t 5
#define p printf



main()
{
	int i,n;
	float arreglo[5];
	float prom,suma;
	char opc,resp;
	do{
			p("Elige lo que quieres hacer:\na)registros de numeros\nb)mostrar el arreglo\nc)crear personajes\n");
		fflush(stdin);
		scanf("%c",&opc);
		
		switch(opc)
		{
			case 'a': case 'A':
				printf("introduce 5 numeros: \n");
				for(i=1;i<=5;i++)
				{
					printf("Introduce el numero  [%i]",i);
					scanf("%f",&arreglo[i]);
					suma+=arreglo[i];
				}

				printf("\n");

				for(i=1;i<=5;i++)
					printf(" %.f ",arreglo[i]);
	
					printf("\n\n");	
					printf (" la suma es = %.2f",suma);
					printf("\n\n");	
					prom=suma/5;
					printf("el promedio de los numeros es: %.2f",prom);
			break;
			
			
		}
		fflush(stdin);
		printf("\nDeseas volver a correr el programa?\n");
		scanf("%c",&resp);
		system("cls");
	}while(resp=='s'||resp=='S');
				
				
}


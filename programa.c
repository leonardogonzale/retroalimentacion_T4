#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define t 5
#define p printf

void mostrar(int n, char arreglo[]);

struct
	{
		char nombre[50],tipo[50];
		float fuerza,salud;
	}informacion[t];

main()
{
	int i,n;
	char arreglo[20];
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
			
			case 'b': case 'B':
                printf("Escribe una cadena de 20 caracteres:  ");
                fflush(stdin);
                fgets(arreglo  , sizeof(arreglo), stdin);
                printf("n: ");
                scanf("%i", &n);
                mostrar(n, arreglo);
             break;

			 case 'c': case 'C':
			for(i=0; i<t; i++)
				{
					p("Ingrese el nombre del personaje:  ");
					fflush(stdin);
					gets(informacion[i].nombre);
					p("Ingrese el tipo de clase del personaje:  ");
					fflush(stdin);
					gets(informacion[i].tipo);
					p("Ingrese la fuerza del personaje (en numero):  ");
					scanf("%f",&informacion[i].fuerza);
					p("Ingrese la salud del personaje (total en numeros):  ");
					scanf("%f",&informacion[i].salud);
					p("\n");
				}
				for(i=0;i<t;i++)
				{
					p("\nNombre:  %s",informacion[i].nombre);
					p("\nTipo de clase:  %s",informacion[i].tipo);
					p("\nFuerza:  %.2f",informacion[i].salud);
					p("\nSalud:  %.2f",informacion[i].fuerza);
					p("\n");	
				}
				break;
				default: printf("Opcion invalida\n");
		}
		fflush(stdin);
		printf("\nDeseas volver a correr el programa?\n");
		scanf("%c",&resp);
		system("cls");
	}while(resp=='s'||resp=='S');
				
				
}

void mostrar(int n, char arreglo[])
{ 
	
		for(size_t i = 0 ;i < n; i++)
		{
		
			printf("%s\n",arreglo);	
		}
		
}
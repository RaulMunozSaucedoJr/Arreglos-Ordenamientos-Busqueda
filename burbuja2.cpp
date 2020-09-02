
#include <stdio.h>
#define TAM 6

int main()
{

int array[]={12,10,5,6,1,3};	 //Declaracion e Inicializacion de un array
int temp=0; 			 //Variable temporal
int i,j,numero;			 //variables corredoras del ciclo

printf("La lista DESORDENADA es: \n");

for (i=0;i<numero;i++)
   printf("%3d",array[i]);	//impresion de la lista con espacio de 3 lineas (%3d)

for (i=1;i<numero;i++)
{
	for (j=0;j<numero-1;j++)
	{
		if (array[j] > array[j+1])	 //condicion
		{
			temp = array[j];	 //temp guarda momentaneamente el valor de lista[j]
			array[j]=array[j+1];  //Asigno al la posicion lista[j], lo que hay en lista[j+1]
			array[j+1]=temp;	//obtendra un nuevo valor por parte de temp.
		}
	}

}

printf("\nLos valores ORDENADOS de lista son: \n");
for(i=0;i<TAM;i++)
    printf("%3d",array[i]);

return 0;
}

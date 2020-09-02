//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main()
{ //Abre main

//Declaramos nuestras variables tipo entero. Y declaramos nuestro arreglo y el tamaño de este.
int n, array[10], i, d, t, numero;
	
	//Imprime mensaje en pantalla sobre cuantos elementos deseamos ordenar
    printf("¿Cuantos elementos deseas ordenar?\n");
    //Lee la cantidad de elementos a ordenar por el usuario
    scanf("%d", &numero);
	//Imprime mensaje en pantalla indicando al usuario que introduzca los elementos a ordenar
    printf("Introduce los %d numeros\n", numero);
	
	//Compara el primer elemento de nuestro arreglo con los demas, si este ve que es menor a los demas lo pone en el primer bloque o posicion.
    for (i=0; i<numero; i++)
	{ //Abre for 1
		//Lee el elemento comparado del arreglo
        scanf("%d", &array[i]);
    } //Cierra for 1
	
	//Si el primer elemento de nuestro arreglo es menor que los siguientes se queda en su lugar
    for (i=1; i<=numero-1; i++)
	{ //Abre for 2
        d=i;
		//Comparacion de elementos, comparando cual es el menor de todos y se empieza a ordenar
        while(d>0 && array[d]<array[d-1])
		{ //Abre while
            t= array[d];
            array[d]=array[d-1];
            array[d-1]=t;
            d--;
        } //Cierra while
    } //Cierra for 2
	//Imprime mensaje de que nuestro arreglo esta ordenado
    printf("Arreglo ordenado:\n");

    for (i=0; i<=numero-1; i++) 
	{ //Abre for 3
        printf("%d\n", array[i]);
    } //Cierra for 3

    return 0;
} //Ciera main

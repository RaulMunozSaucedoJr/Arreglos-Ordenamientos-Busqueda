//Bibliotecas
#include <stdio.h>
#include<stdlib.h>


int main()
{ //Abre main
	
	//Declaramos nuestro arreglo y su tamaño.Declaramos la variable posicion y la variable swap = cambiar-mover
    int array[6], numero, i, d, posicion, swap;
	
	//Imprime mensaje en pantalla sobre cuantos elementos deseamos ordenar
    printf("\t\n¿Cuantos elementos deseas ordenar?\n");
    scanf("%d", &numero);
	//Imprime mensaje en pantalla indicandonos que introduscamos los elementos
    printf("Introduce los numeros\n", numero);
    
    //Compara el primer elemento de nuestro arreglo con los demas, si este ve que es menor a los demas lo pone en el primer bloque o posicion.
    for(i=0; i<numero; i++)
        scanf("%d", &array[i]);
	
	//Compara al segundo elemento del arreglo con los demas.
    for(i=0; i<(numero-1); i++)
		{ //Abre for 1
		//Posicion actual
        posicion=i;
        //Compara posiciones de nuestros elementos.
        for(d=i+1; d<numero; d++)
		{ //Abre for 2
            if(array[posicion]>array[d])
                posicion=d;
        } //Cierra for 2
        //Caambia posicion de elementos segun su tamaño.
        if(posicion!=i)
		{ //Abre if
            swap=array[i];
            array[i]=array[posicion];
            array[posicion]=swap;
        } //Cierra if
    } //Cierra for 2
    
	//Imprime mensaje en pantalla que nuestra lista - Arreglo esta ordenado
    printf("Arreglo Ordenado:\n");

    for (i=0; i<numero; i++)
        printf("%d\n", array[i]);

    return 0;
} //Cierra main

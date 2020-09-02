//Bibliotecas
#include<stdio.h>
#include<stdlib.h>

// Funcion para combinar los arreglos temporales L y R 
// Contar elementos del arreglo temporal L
// Contar elementos del arreglo temporal R 
void Merge(int *Arreglo,int *L,int contarizquierda,int *R,int contarderecha)
{ //Abre void Merge
	int i,j,k;

	// Variable i para marcar el indice del subarbol - sub arreglo fusinado del arreglo temporal L
	// Variable j para marcar el indice del subarbol - sub arreglo fusinado del arreglo temporal R
	// Variable k para marcar el indice del subarbol - sub arreglo fusionado de arreglo L y R
	i = 0; j = 0; k =0;

	while(i<contarizquierda && j< contarderecha)
	{ //Abre while 1
		if(L[i]  < R[j]) Arreglo[k++] = L[i++];
		else Arreglo[k++] = R[j++];
	} //Cierra while 1
	while(i < contarizquierda) Arreglo[k++] = L[i++];
	while(j < contarderecha) Arreglo[k++] = R[j++];
} //Cierra void Merge

// Funcion recursiva para ordenar una matriz - arreglo de numeros enteros. 

void MergeSort(int *Arreglo,int n) 
{ //Abre funcion recursiva de MergeSort
	int medio,i, *L, *R;
	if(n < 2) return; //Condicion base //Si el arreglo - matriz tiene menos de dos elementos, no hacer mada.

	medio = n/2;  //Encontrar el indice medio

	//Crear subarreglos izquierdo y derecho L y R
	//Los elementos medios (desde el indice 0 hasta medidados de -1 deben ser parte del subarreglo izquierdo)
	//Los elementos mediados hasta n-1 seran parte del subarreglo derecho
	L = (int*)malloc(medio*sizeof(int)); 
	R = (int*)malloc((n- medio)*sizeof(int)); 
	
	for(i = 0;i<medio;i++) L[i] = Arreglo[i]; //Creamos el subarreglo izquierdo
	for(i = medio;i<n;i++) R[i-medio] = Arreglo[i]; //Creamos el subarreglo derecho

	MergeSort(L,medio);  //Clasificamos el subarreglo izquierdo
	MergeSort(R,n-medio);  //Clasificamos el subarreglo derecho
	Merge(Arreglo,L,medio,R,n-medio); //Fusinamos el subarreglo L y R en el arreglo A como lista - arreglo ordenado 
        free(L); //Cuando una zona de memoria reservada con malloc ya no se necesita, puede ser liberada mediante la función free
        free(R); //Cuando una zona de memoria reservada con malloc ya no se necesita, puede ser liberada mediante la función free
} //Cierra funcion recursiva de MergeSort

int main() 
{ //Abre main
	//Codigo para probar la funcion recursiva de MergeSort
	
	//Declaramos neustro arreglo de enteros
	int Arreglo[] = {6,2,3,1,9,10,15,13,12,17,99,73,-87,-60,0}; 
	int i,numeroelementos;

	// Encontramos el numero de elementos en nuestro arreglo lo dividimos por el tamaño del entero en bytes
	//Se pasa siempre por referencia a traves de punteros. Asi que le funcion sizeof dara el tamaño del puntero y no del arreglo completo.
	
	numeroelementos = sizeof(Arreglo)/sizeof(Arreglo[0]); 

	//Se llama a la ordenacion de mezcla para ordenar el arreglo
	MergeSort(Arreglo,numeroelementos);

	//Se imprimen todos los elementos de nuestro arreglo - matriz una vez que ya se encuentra ordenados.
	for(i = 0;i < numeroelementos;i++) printf("\n%d\n ",Arreglo[i]);
	return 0;
} //Cierra main

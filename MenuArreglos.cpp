//Alumnos: Munoz Saucedo Raul Jasiel Uriel & Porta Perez Andres David

//Materia: Estructura de Datos

//Programa: Menu de arreglos

//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Funciones utilizadas en este programa
//system("cls"); SIRVE PARA LIMPIAR NUESTRA PANTALLA
void Tamano(char *a, int n)
{
	printf("\t\n\nEl arreglo contiene: %d",strlen(a));
}

void ExtraerI(char *a,int n, int i)
{//Abre void
		//Imprime en pantalla el elementos i-esimo a extraer
		printf("\n El elemento a extraer es: %c", a[i-1]);
		int j;
		for(j=i; j<=n; j++)
		{//Abre for extraer
		a[j-1]=a[j];
	}//Cierra for extraer
}//Cierra void
//Se declara la funcion inicializar
void inicializar()
	{ //Abre void inicializar
	//Imprime mensaje en pantalla que el arreglo se inicializo
	printf("\nEl arreglo se inicializo en 0\n",162);
	} //Cierra void inicializar


//Se declara la funcion llenarArreglo
void LlenarArreglo(char cadena[],int tamano){//Abre llenarArreglo
	for(int i=0;i<tamano;i++)
	{ //Abre for void LlenarArreglo
	printf("\nIngresa el elemento del %c indice: %d \n",161,i);
	scanf("%s",&cadena[i]);
	} //Cierra for void LlenarArreglo
	//Imprime en pantalla la cantidad de elementos que contiene nuestro arreglo
	printf("\nEl arreglo tiene los elementos: %s ",cadena);
	} //Cierra LlenarArreglo

//Se declara funcion mostrar
void Mostrar(int tamano)
	{//Abre void mostrar 
	//Imprime tamano de nuestro arreglo
	printf("\nEl arreglo tiene %s elementos\n",tamano);	
	} //Cierra void mostrar

//Funcion main - principal

void menu2(void);
void selectionS (void);
void InsertionS (void);













main()
{//Abre main
	int opcion;
	int tamano=10;
	char cadena[tamano];
	int i;
	char nuevo;
	int buscar;
	
	do{//Abre do

//Se muestra en pantalla nuestro menu con nuestras opciones

	printf("\t\t\tMen%c \n ",163);
	printf("\n 1 Inicializar el arreglo en cero o null \n");
	printf("\n 2 Ingresar un caracter o un nucmero \n",160,163);
	printf("\n 3 Ingresar una cadena \n");
	printf("\n 4 Consultar la cantidad de elementos almacenados \n");
	printf("\n 5 Verificar si el arreglo est%c vac%co \n",160,161);
	printf("\n 6 Verificar si el arreglo est%c lleno  \n",160);
	printf("\n 7 Consultar el i-esimo elemento \n");
	printf("\n 8 Cambiar el i -esimo elemento \n");
	printf("\n 9 Extraer el i -esimo elemento \n");
	printf("\n 10 Ordenamiento \n ");
	printf("\n 11 Salir\n");
		scanf("%d",&opcion);
		switch(opcion){//Abre switch
	
	//Caso 1 inicializa el arreglo
case 1:
	//Muestra en pantalla mensaje de que nuestro arreglo se inicializo
	printf("\nEl arreglo se inicializo\n");
		break;

	//Caso 2 ingresamos el caracter a nuestro arreglo
case 2:
		for(i=0;i<1;i++){ //Abre for case 2
	//Imprime mensaje de ingresar caracter o numero
	printf("\nIngresa el caracter o numero\n");
		scanf("%s",&cadena[i]);
	//Muestra en pantalla el elementos agregado a nuestro arreglo
	printf("\nEl arreglo tiene el elemento %s \n",cadena);
	}//Cierra for case 2
		break;

	//Caso 3 llenar arreglo
case 3:
		LlenarArreglo(cadena,tamano);
		break;


	//Case 4 mostrar tamano de arreglo
case 4:
	Tamano(cadena,tamano);
		break;


 	//Case 5 indica si el arreglo esta vacio
case 5:
			if(tamano==0){ //Abre if
	//Muestra en pantalla que el arreglo esta vacio
		printf("\nEl arreglo est%c vacio\n",160,161);
	} //Cierra if
		break;
		
		
	//Case 6 indica si el arreglo esta lleno
case 6:
			if(tamano>=10)
	//Muestra en pantalla que el arreglo esta lleno
		printf("\nEl arreglo esta lleno\n");
		break;


case 7:
	//buscar el i esimo elemento
		printf("\nIngrese la pocision que deseas buscar\n");
		scanf("%d",&i);
			if(i>=0 && i<tamano){
		printf("\nEn el indice %d hay un %c \n",i,cadena[i]);
    }
			else
    	printf("\nNo existe ese indice\n");
		break;


//Modificamos la posicion i-esima
case 8:
		printf("\nIngrese la pocision que quieras modificar\n");
		scanf("%d",&i);
			if(i>=0 && i<tamano){
		printf("\nEn el indice %d hay un %c",i,cadena[i]);
		printf("\nIngrese el elemento nuevo \n");
		scanf("%s",&nuevo);
		cadena[i] = nuevo;
			for(i=0;i<tamano;i++){
		printf("\nEn el indice %d hay un  %c \n",i,cadena[i]);	
	}
		printf("\nLos elementos del arrglo son : %s \n",cadena);
}
    	else
    	printf("\nNo exciste ese indice \n");
		break;

case 9: 
ExtraerI(cadena,10, 4);
break;
//Case 11 Salimos del programa

case 10:
	menu2();

case 11:
		//Funcion para limpiar nuestra pantalla
		system("cls");

						}//Cierra switch	
	}		while(opcion !=11);
			system("PAUSE");
}//Cierra main


void menu2 (void){
	int opc2;
		//do{//Abre do

//Se muestra en pantalla nuestro menu con nuestras opciones
do{

	system("cls");
	printf("\t\t\tMenu de Ordenamiento \n ",163);
	printf("\n 1 Ordenar el arrego por metodo de Burbuja\n");
	printf("\n 2 Ordenar el arrego por metodo de Selection-Sort \n");
	printf("\n 3 Ordenar el arrego por metodo de Insertion-Sort \n");
	printf("\n 4 Ordenar el arrego por metodo de Cocktail-Sort \n");
	printf("\n 5 Salir\n");
		scanf("%d",&opc2);
		 switch(opc2){
               case 1:
                  //burbuja();
               break;
               case 2:
                  selectionS();
               break;
               case 3:
                 InsertionS();
               break;
               case 4:
                  //Cocktail();
                break;
                }
			}	while(opc2 !=5); 
}
void selectionS (void){

	int array[6], numero, d, i,posicion, swap;
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

    system("pause");
}
void InsertionS (void){
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
system("pause");
 }


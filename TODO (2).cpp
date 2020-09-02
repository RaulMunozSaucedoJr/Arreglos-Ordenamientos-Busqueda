//Alumnos: Muñoz Saucedo Raul Jasiel Uriel & Porta Perez Andres David

//Materia: Estructura de Datos

//Programa: Menu de arreglos

//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

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
void menu3(void);
void Mburbuja (void);
void selectionS (void);
void InsertionS (void);
int cocquel(void);
//void MBurbuja (void);
void Bbinaria (void);
void MLineal(void);

main()
{//Abre main
	int opcion;
	int tamano=20;
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
	printf("\n 11 Metodos de Busqueda\n");
	printf("\n 12 Salir\n");
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
break;
case 11:
	menu3();
break;

case 12:
		//Funcion para limpiar nuestra pantalla
		system("cls");

						}//Cierra switch	
	}		while(opcion !=12);
			system("PAUSE");
}//Cierra main


void menu2 (void){
	int opc2,arreglo,n;
		//do{//Abre do

//Se muestra en pantalla nuestro menu con nuestras opciones
do{

	system("cls");
	printf("\t\t\tMenu de Ordenamiento \n ",163);
	printf("\n 1 Ordenar el arrego por metodo de Burbuja\n");
	printf("\n 2 Ordenar el arrego por metodo de Selection-Sort \n");
	printf("\n 3 Ordenar el arrego por metodo de Insertion-Sort \n");
	printf("\n 4 Ordenar el arrego por metodo de Cocktail-Sort \n");
	printf("\n 5 ordenado  Aleatorio \n");
	printf("\n 6 Salir\n");
		scanf("%d",&opc2);
		 switch(opc2){
               case 1:
                  Mburbuja();
               break;
               case 2:
                  selectionS();
               break;
               case 3:
                 InsertionS();
               break;
               case 4:
                cocquel();
                break;
               case 5:
                //Oalea();
                break;
                }
			}	while(opc2 !=6); 
}

//SELECTION SORT
void selectionS (void){
    int array[20], numero, d, i,posicion, swap;
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

//INSERTION SORT
void InsertionS (void){
int n, array[20], i, d, t, numero;
	
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

//COCKTAIL
int cocquel (void){
    int MAX=10;
    int dato[MAX];
    int i=0, j=0, n=0, c=0;
 
    printf("Dimension del Arreglo: ");
    scanf(" %d",&MAX);
 
	for(i=0;i<MAX;i++)
	{
		printf("Ingrese el Elemento %d : \n ",i+1);
        scanf(" %d",&dato[i]);
        
	}
    
    
    
    
   /* printf("\n Los numeros a ordenar son: \n");
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &dato[i]);
    }*/
    n = MAX;    
    do
    {
        /*
          * El paso hacia la derecha desplazará el elemento más grande al final
         */
        for (i = 0;  i < n - 1; i++)
        {
            if (dato[i] > dato[i + 1])
            {
                dato[i] = dato[i] + dato[i + 1];
                dato[i + 1] = dato[i] - dato[i + 1];
                dato[i] = dato[i] - dato[i + 1];
 
            }
 
        }
        n = n - 1;
        /* 
          * El pase hacia la izquierda cambiará el elemento más pequeño al principio
          */
        for (i= MAX - 1, c++; i >= c; i--)
        {
            if(dato[i] < dato[i - 1])
            {
                dato[i] = dato[i] + dato[i - 1];
                dato[i - 1] = dato[i] - dato[i - 1];
                dato[i] = dato[i] - dato[i - 1];
            }
        }
        //c = c + 1;
 
    } while (n != 0 && c != 0);
    printf("Los elementos ordenados son:\n ");
    for (i = 0; i < MAX; i++)
    {
        printf("%d\t", dato[i]);
    }
    system("pause");
}

//BURBUJA
void Mburbuja (void){
int i,j,aux,cn,n[100];
 

	printf("Dimension del Arreglo: ");
    scanf(" %d",&cn);
 
	for(i=0;i<cn;i++)
	{
		printf("Ingrese el Elemento %d : \n ",i+1);
        scanf(" %d",&n[i]);
        
	}
 
	for(i=1; i<cn; i++)
	{
		for(j=0; j<cn-i; j++)
		{
			if(n[j]>n[j+1])
			{
			    aux    = n[j+1];
				n[j+1] = n[j];
				n[j]   = aux;
			}
		}
	}
   puts("Los Elementos ordenados: ");
	for(i=0;i<cn;i++)
	{
		printf("\n%d",n[i]);
	}
	puts("\n");
	system("pause");
}



//MENU DE METODOS DE BUSQUEDA 

void menu3 (void){
	int opc3;
do{
	system("cls");
	printf("\t\t\tMenu de Busquedas \n ",163);
	printf("\n 1 Busqueda Lineal\n");
	printf("\n 2 Busqueda Binaria \n");
	printf("\n 3 Salir \n");
	
		scanf("%d", &opc3);
		switch(opc3){
			case 1:
				MLineal();
				break;
			case 2:
				Bbinaria();
				break;
		
				}
              }  while(opc3 !=3);
			
        }
   
	
	
//Busqueda Lineal
void MLineal(void)
{
//Declaramos nuestro vector, su tamano y los elementos que conforman este.
char vector[52]={'a','b','c','d','e','f','g', 'h', 'i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G', 'H', 'I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

//Declaramos las funcion busca para buscar en que posicion se encuentran los elementos de nuestro vector.
char busca; 
	int i; 

//Inicia programa


//Imprime en pantalla mensaje de INGRESA UNA LETRA Y - O CARACTER A BUSCAR
	printf("Ingresa una letra a buscar:\n"); 
		//Lee lo que hayamos ingresado por teclado
		scanf(" %c", &busca);
		
	for(i = 0; i<52; i++)
		{ 
		if (vector[i]==busca) printf("\nSe encontro coincidencia en el lugar: %d\n", i + 1); 
		
				} 
			 system("pause");
		}
    
    

//BUSQUEDA BINARIA
//BIBLIOTECAS

void Bbinaria (void)
{
	  //Declaramos nuestro vector con tamano 12
	  printf("\n\nMETODO DE ORDENAMIENTO BINARIO\n\n");
      int vector[10],i,j,aux,izq,der,cen,valor,cn=0;
      
      
      printf("Dimension del Arreglo: ");
    scanf(" %d",&cn);
 
      
      for(i=0;i<cn;i++){
      					//Se le pide al usuario que ingrece los numeros
                        printf("Introduce numeros al azar: \n");
                        scanf("%d",&vector[i]);
                        
                        }
      for(i=0;i<cn;i++){
                        for(j=0;j<(cn-i);j++){
                                          if(vector[j]>vector[j+1]){
                                                                   aux=vector[j];
                                                                   vector[j]=vector[j+1];
                                                                   vector[j+1]=aux;
                                                                   }
                                          
                        
                                          }
                        }
      printf("\nEl vector ordenado de menor a mayor queda asi: ");                  
      for(i=0;i<cn;i++)
      printf(" %d ",vector[i]);
      
      printf("\nNumero que queremos buscar: ");
      scanf("%d",&valor);
      
      izq=0;
      der=cn;
      cen=(cn+1)/2;
      while(vector[cen] != valor && izq<der){
                                               if (vector[cen]>valor){
                                                                      der=cen-1;
                                                                      }
                                               else izq=cen+1;
                                               
                                               cen=(izq+der)/2;
                                               }
      if(vector[cen]==valor)
      printf("\nEncontrado en la posicion %d\n",cen+1);
      else printf("\nNo encontrado\n");
      
      getch();
       //printf("\nESTE PROGRAMA SE AUTODESTRUIRA EN 3...2...1....");
       system("pause");
}

//BUSQUEDA ALEATORIA


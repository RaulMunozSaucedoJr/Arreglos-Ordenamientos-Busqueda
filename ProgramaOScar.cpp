#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*Alumno: Oscar Ramirez Abreu
Matricula: 13-011-0704
Programa de implementacion para ordenacion y busqueda de una lista 
*/
struct Nodo_{
   long dato;
   struct Nodo_* sig;
};

typedef struct Nodo_ Nodo;

struct _Lista{
   Nodo *inicio;
   int numElementos;
};

typedef struct _Lista Lista;

Nodo* creaNodo(long);

Lista creaLista();
Nodo* iesimo(Lista, int);
Lista agregar(Lista, long);
Lista insertar(Lista, long, int);
Lista eliminar(Lista, int);
void imprimir(Lista, int, int);
Lista destruyeLista(Lista);
void bubble(Lista, int );
void QUICK(Lista , int );
void Selec(Lista ,int );
void Shell(Lista , int );
void busquedaLineal(Lista , int );
void BusquedaBinaria(Lista , int, int, int);
int main(){
   Lista l;
   clock_t ini,fin;
   int dato=0;
  // long cad[80];
   long gen;
   //printf("ingrese la cantidad de elementos que tendra la lista0:\n");
   long hora=time(NULL);
   //printf("ingrese la cantidad de elementos que tendra la lista1:\n");
   int i,n,opcion,ot;
   l= creaLista();
   //printf("ingrese la cantidad de elementos que tendra la lista2:\n");
   srand(hora);
   printf("\tPrograma de ordenacion y busqueda de una lista\t\n");
   printf("Ingrese la cantidad de elementos que tendra la lista:\n");
   scanf("%d",&n);
   //se generara la lista
   for(i=0; i < n; i++){
      //printf("Inserta la cadena: ");
      //gets(cad);
      gen=rand()%(n*10);
	  l=agregar(l, gen);
  //printf("El tamaño de la lista es: %d\n\n", l.numElementos);
   }
   printf("La lista es: \n");
   imprimir(l, 0, l.numElementos);
   //do{
		printf("\tElige una opcion para el metodo de ordenamiento\n\t o busqueda simple\n\tMenu\n");
		printf("     1.-Burbuja\n");
		printf("     2.-Shell\n");
		printf("     3.-Seleccion\n");
		printf("     4.-QS\n");
		printf("     5.-Busqueda Lineal\n");
		printf("     6.-Salir\n");
		scanf("%d",&opcion);
		system("CLS");
		switch(opcion){
			case 1:
				ini=clock();//inicializa el relog
				bubble(l,l.numElementos);
				printf("La lista es ordenada: \n");
				imprimir(l, 0, l.numElementos);
				fin=clock();
				printf("El Tiempo es: %d\n",(fin - ini)/CLK_TCK);
				break;
			case 2:
				ini=clock();//inicializa el relog
			    Shell(l,l.numElementos);
				printf("La lista es ordenada: \n");
				imprimir(l, 0, l.numElementos);
				fin=clock();
				printf("El Tiempo es: %d\n",(fin - ini)/CLK_TCK);
				break;
			case 3:
			    ini=clock();//inicializa el relog
				Selec(l,l.numElementos);
				printf("La lista es ordenada: \n");
				imprimir(l, 0, l.numElementos);
				fin=clock();
				printf("El Tiempo es: %d\n",(fin - ini)/CLK_TCK);
			    break;
			case 4:
				ini=clock();//inicializa el relog
				QUICK(l,l.numElementos);
				printf("La lista es ordenada: \n");
				imprimir(l, 0, l.numElementos);
				fin=clock();
				printf("El Tiempo es: %d\n",(fin - ini)/CLK_TCK);
			    break;
			case 5:
				printf("Ingrese el valor a buscar:\n");
		        scanf("%d",&dato);
				ini=clock();//inicializa el relog
				busquedaLineal(l, dato);
				//imprimir(l, 0, l.numElementos);
				fin=clock();
				printf("El Tiempo es en busqueda: %d\n",(fin - ini)/CLK_TCK);
				return 0;
				break;
			case 6:
				break;
			    default:
				printf("Opcion no valida\n");
				break;
		}
		
//	}while(opcion!=5);
	   
        printf("\tAhora seleccione metodo de busqueda\n ");
        printf("\t1.-Busqueda binaria\n");
		printf("\t2.Busqueda lineal\n");
		scanf("%d",&ot);
		printf("Ingrese el valor a buscar:\n");
		dato=0;
		scanf("%d",&dato);
		switch(ot){
			case 1:
				ini=clock();//inicializa el relog
				BusquedaBinaria(l , dato, 0,l.numElementos);
				//imprimir(l, 0, l.numElementos);
				fin=clock();
				printf("El Tiempo en busqueda es: %d\n",(fin - ini)/CLK_TCK);
				break;
			case 2:
				ini=clock();//inicializa el relog
				busquedaLineal(l, dato);
				//imprimir(l, 0, l.numElementos);
				fin=clock();
				printf("El Tiempo es en busqueda: %d\n",(fin - ini)/CLK_TCK);
				break;
			case 3:
				break;
			    default:
				printf("Opcion no valida\n");
				break;
		
}
   //printf("Ahora insertaremos una linea en la posicion 1: ");
   //gets(cad);
  // l= insertar(l, gen, 1);
//   agregar(l,300);
    
 //  printf("\nAhora borraremos la linea 0\n");
  // l= eliminar(l, 0);
   //imprimir(l, 0, l.numElementos);
   //l= destruyeLista(l);
   //system("pause");*/
}

Nodo* creaNodo(long d){
   Nodo *nuevo;
   nuevo= (Nodo*)malloc(sizeof(Nodo));
   nuevo->dato=d;
   nuevo->sig=0;
   return nuevo;
}

Lista creaLista(){
   Lista n;
   n.inicio= 0;
   n.numElementos= 0;
   return n;
}
/* Regresa el i-ésimo elemento de una lista empezando en 0 */
Nodo* iesimo(Lista l, int i){
   int j;
	Nodo* tmp;
	if(i < 0 || i >= l.numElementos)
	   return 0;
	for(j=0, tmp= l.inicio; j < i; j++, tmp= tmp->sig);
	return tmp;
}

/* Agrega un Nodo al final de la lista */
Lista agregar(Lista l, long d){
   Nodo* ultimo;
   if(!(l.inicio))
      l.inicio= creaNodo(d);
   else{
      ultimo= iesimo(l, l.numElementos - 1);
      ultimo->sig= creaNodo(d);
   }
   l.numElementos++;
   return l;
}

/* Inserta un Nodo en la i-ésima posición de la lista incluyendo 0 */
Lista insertar(Lista l, long d, int i){
	Nodo* tmp;
	Nodo *nuevo;
	if((!l.inicio && i) || i > l.numElementos)
	   return l;
	if(!l.inicio || i == l.numElementos)
	   return agregar(l, d);
	if(!i){
      tmp= l.inicio;
		l.inicio= creaNodo(d);
		l.inicio->sig= tmp;
   }else{
      tmp= iesimo(l, i-1);
      nuevo= creaNodo(d);
      nuevo->sig= tmp->sig;
      tmp->sig= nuevo;
   }
   l.numElementos++;
   return l;
}

/* Elimina el i-ésimo elemento de una lista empezando en 0 */
Lista eliminar(Lista l, int i){
   Nodo* tmp;
   Nodo* act;
   if(!l.inicio  || i >= l.numElementos || i < 0)
      return l;
   if(!i){
      act= l.inicio;
      l.inicio= l.inicio->sig;
   }else{
      tmp= iesimo(l, i - 1);
      act= tmp->sig;
      tmp->sig= act->sig;
   }
   free(act);
   l.numElementos--;
   return l;
}

/* Imprime la lista de i a f, iniciando en 0 */
void imprimir(Lista l, int i, int f){
	Nodo* tmp;
	int j;
	tmp= iesimo(l, i);
    for(j= i; tmp && j <= f; j++, tmp= tmp->sig)
       printf("%ld\n", tmp->dato);//s
}

Lista destruyeLista(Lista l){
   Nodo *tmp;
   if(!l.inicio)
      
   for(tmp= l.inicio->sig; tmp; ){
      free(l.inicio);
      l.inicio= tmp;
      tmp= tmp->sig;
   }
   return creaLista();
}
//busqueda lineal
void busquedaLineal(Lista l, int dato){
	Nodo *p;
	int i,y=0,x=0;
	p=l.inicio;
	for(i=0;i<l.numElementos;i++,p=p->sig){
			if(dato==p->dato){
	        y=1;
	        }
    }if(y==1)
    printf("el valor %d se encuentra en la lista\n",dato);
     else
    printf("el valor %d NO se encuentra en la lista\n",dato);
}
	
void BusquedaBinaria(Lista l, int dato, int ini, int fin){
     Nodo *p;
     int centro; 
     centro=(ini+fin)/2;
     p=iesimo(l,centro);
     if(p->dato==dato)
     printf("El elemento %d esta en la lista \n",dato);
     if(ini-fin==-1){
     printf("El elemento %d No se econtro en la lista\n",dato);
     return ;
     }
     if(p->dato<dato)
      return BusquedaBinaria(l,dato, centro,fin);
     if(p->dato>dato)
      return BusquedaBinaria(l,dato, ini, centro);
     }

//ordenación por burbuja
void bubble(Lista l, int count){
	Nodo *x,*y;
	long i,j,t;
	for(i=count-1;i>0;i--)
	for(x=l.inicio,y=x->sig,j=0;j<i;j++,y=y->sig,x=x->sig) {
		if(x->dato > y->dato) {
		t=x->dato;
		x->dato=y->dato;
		y->dato=t;
		}
	}
}
/*
//ordenacion por QS
void QS(Lista l, int primero, int ultimo){
	Nodo *x,*y;
	int i,j,t,pivote;
	x=iesimo(l,primero);
	y=iesimo(l,ultimo);
	pivote=(x->dato+y->dato)/2;
	do{
		while(x->dato>pivote)
		i++;
		x=x->sig;
		while(y->dato>pivote)
		j--;
		y=iesimo(l,j);
		if(i<=j){
			t = x->dato;
		    x->dato= y->dato;
		    y->dato = t;
			i++;
			j--;
			x=x->sig;
			y=iesimo(l,j);
		}
	}while(i<j);
	if(j>primero)
	QS(l,primero,j);
	if(i<ultimo)
	QS(l,i,ultimo);
}
*/
//Ordenacion por selección
void Selec(Lista l,int n){ 
     Nodo *x,*y;//y sera el dato menor
     long i,j,t;
     x=l.inicio;
     for(i=0;i<n-1;i++){              
      for(j=i,y=iesimo(l,i),x=iesimo(l,i);j<n,x!=0;j++,x=x->sig)
       if(x->dato<y->dato){
       t=y->dato;
       y->dato=x->dato;
       x->dato=t;
       }
      }
     }
//Ordenacion por shell
void Shell(Lista l, int n){
     Nodo *x,*y;
     int i, j, k, intervalo;
     long t;//temporal
     intervalo=n/2;
     while(intervalo>0){
     	for(i=intervalo;i<n;i++){
     		j=i-intervalo;
     		x=iesimo(l,j);//mover al nodo 
     		while(j>=0&&x!=0){
     			k=j+intervalo;
     			y=iesimo(l,k);
     			if(x->dato<=y->dato){
     				j=0;
     				x=iesimo(l,j);
     				}else{
     					t=x->dato;
     					x->dato=y->dato;
     					y->dato=t;
     			}
     			j=j-intervalo;
				x=iesimo(l,j);
			}
        }
     intervalo=intervalo/2;
    }
}
//Ordenacion por QS
void QS(Lista l,int primero,int ultimo){
     Nodo *p,*q,*mitad;
     int i,j,m;
     long t,piv,aux;
     i=primero;
     j=ultimo;
     m=(i+j)/2;
     mitad=iesimo(l,m);
     piv=mitad->dato;
     p=iesimo(l,i);
     q=iesimo(l,j);
     do{
     	while(p->dato<piv && i<=ultimo){
     		i=i+1;
     		p=iesimo(l,i);
     	}
     	while(q->dato>piv && j>=primero){
     		j=j-1;
     		q=iesimo(l,j);
     	}
     	if(i<=j){
     		t=p->dato;
     		p->dato=q->dato;
            q->dato=t;
            i=i+1;
            p=iesimo(l,i);
            j=j-1;
            q=iesimo(l,j);
        }
    }while(i<=j);
     if(j>primero)
     QS(l,primero,j);
     if(i<ultimo)
     QS(l,i,ultimo);
}
void QUICK(Lista l, int n){
     QS(l,0,n-1);
     }


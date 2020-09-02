//bIBLIOTECAS
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
	  //Declaramos nuestro vector con tamano 12
	  printf("\n\nMETODO DE ORDENAMIENTO BINARIO\n\n");
      int vector[12],i,j,aux,izq,der,cen,valor;
      
      for(i=0;i<11;i++){
      					//Se le pide al usuario que ingrece los numeros
                        printf("Introduce doce numeros al azar: \n");
                        scanf("%d",&vector[i]);
                        }
      for(i=0;i<11;i++){
                        for(j=0;j<(10-i);j++){
                                          if(vector[j]>vector[j+1]){
                                                                   aux=vector[j];
                                                                   vector[j]=vector[j+1];
                                                                   vector[j+1]=aux;
                                                                   }
                                          
                        
                                          }
                        }
      printf("\nEl vector ordenado de menor a mayor queda asi: ");                  
      for(i=0;i<11;i++)
      printf(" %d ",vector[i]);
      
      printf("\nNumero que queremos buscar: ");
      scanf("%d",&valor);
      
      izq=0;
      der=11;
      cen=(11+1)/2;
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
       printf("\nESTE PROGRAMA SE AUTODESTRUIRA EN 3...2...1....");
}

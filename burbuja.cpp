#include<stdio.h> 
int main () 
{ 
int aux,i,j,k; 
int n=10,A[n]; 

for (i=0; i<n; i++) 
{ 
printf("dame el dato %dn \n ",i+1); 
scanf("%d",&A); 
} 
for (i=0;i<n;i++) 
{ 
for (j=0;j<n-i;j++) 
{ 
if (A[j]>=A[j+1]) 
{ 
aux=A[j]; 
A[j]=A[j+1]; 
A[j+1]=aux; 
} 

} 

} 
for (k=0;k<n;k++) 
{ 
printf(" %d",A[k]); 
} 



return 0; 
} 

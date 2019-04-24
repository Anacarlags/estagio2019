#include <stdlib.h>
#include <stdio.h>
int main()
{
int x[8]={5, 3, 2, 4, 7, 1, 0, 6,};
int i, j, temp;

//ordenando o vetor

for (i=0;i<8; i++)
for(j=i+1;j<8;j++)
{
if (x[i]>x[j])
{
temp=x[i];
x[i]=x[j];
x[j]=temp;
}
}


/* Impressão do Vetor Ordenado */
printf("Vetor em ordem crescente: \n");
for(i=0;i<8;i++)
printf(" %d",x[i]); 

system("pause");
return 0;
}
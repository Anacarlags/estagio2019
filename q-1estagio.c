#include <stdio.h>

int main(int argc, char** argv)
{
	float custo_fabricacao;
	float custoFabrica = 10.000;
	float custoDistribuidor = custoFabrica * 0.28f;
    float custoImpostos     = custoFabrica * 0.45f;
	
   custo_fabricacao = custoFabrica + custoDistribuidor + custoImpostos;
   
   printf("O custo de fabricacao eh:%.3f\n", custo_fabricacao);	
	
	
	
	return 0;
}
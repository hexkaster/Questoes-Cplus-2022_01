#include<stdio.h>
#include<stdlib.h>

int main(){
		int nrFilhos, qtd=0, qtdAbaixoCem = 0;
		float percentual, salario, salarioMedio = 0, mediaFilho = 0, maiorSalario = 0;
	
	printf("Informe o salario.....:");
	scanf("%f", &salario);
	
	while(salario > 0){
		printf("Informe o numero de filhos.....:");
		scanf("%d", &nrFilhos);
	
	salarioMedio += salario;
	mediaFilho += nrFilhos;
	qtd++;
	
	if(salario < 100){
		qtdAbaixoCem++;
	}
	if(salario > maiorSalario){
		maiorSalario = salario;	
	}
	printf("Informe o salario....:");
	scanf("%f", &salario);
	}
	salarioMedio = salarioMedio /qtd;
	mediaFilho = mediaFilho / qtd;
	percentual = ((float)qtdAbaixoCem/qtd)*100;
	
	printf("Salario medio R$ %.2f\n", salarioMedio);
	printf("Quantidade media de filhos %.2f\n", mediaFilho);
	printf("maiorSalario R$ %.2f\n", maiorSalario);
	printf("Percentual de salarios abaixo de R$ 100 -- %.2f\n", percentual);
	
	
}

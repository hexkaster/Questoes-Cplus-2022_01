#include<stdio.h>
#include<stdlib.h>

int main()
{
	float saldoconta, valoraplicado, valorrendimento, saldoaplicacao;
	
	printf("Digite o saldo da conta: ");
	scanf("%f", &saldoconta);
	
	printf("Digite o valor aplicado: ");
	scanf("%f", &valoraplicado);
	
	valorrendimento = valoraplicado*1.05;
	saldoaplicacao = saldoconta-valoraplicado+valorrendimento; //se o valor aplicado for retirado do saldo, manter o "-valoraplicado". Se for um valor a parte do saldo, remover esta parte do codigo
	
	printf("Rendimento do valor aplicado: %.2f\n\n", valorrendimento);
	
	printf("Saldo da aplicacao: %.2f\n", saldoaplicacao);

	
}

#include<iostream>
#include <locale.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float potencia1, hora1, custoh1, custod1, custom1, p2, h2, ch2, cd2, cm2;
	char str[30], str2[20];
	
	cout << "A CEMIG estabelece que um aparelho de 1000 watts de potencia ligado \n por uma hora custa 0,642 reais para o estabelecimento.\n\n";
	cout << "Insira o nome dos aparelhos: ";
	cin.get(str, 30);
	cout << "Insira a potência do aparelho número um: ";
	cin >> potencia1;
	cout << "Insira o tempo de utilização em horas do aparelho número um: ";
	cin >> hora1;
	
	custoh1 = 0.000642*potencia1;
	custod1 = 0.000642*potencia1*hora1;
	custom1 = 0.000642*potencia1*hora1*30;
	
	printf("O custo do aparelho número um por hora é: %.2f R$\n", custoh1);
	printf("O custo diário do aparelho número um é: %.2f R$\n", custod1);
	printf("O custo mensal do aparelho número um é: %.2f R$\n\n\n", custom1);
	
	
	cout << "Insira a potência do aparelho número dois: ";
	cin >> p2;
	cout << "Insira o tempo de utilização em horas do aparelho número dois: ";
	cin >> h2;

	ch2 = 0.000642*p2;
	cd2 = 0.000642*p2*h2;
	cm2 = 0.000642*p2*h2*30;
	
	printf("O custo do aparelho número dois por hora é: %.2f R$\n", ch2);
	printf("O custo diário do aparelho número dois é: %.2f R$\n", cd2);
	printf("O custo mensal do aparelho número dois é: %.2f R$\n\n\n", cm2);
	
}


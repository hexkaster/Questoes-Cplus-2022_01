#include <stdio.h>


int main()
{
	int ano;
	float chico, ze;
	
	chico = 1.50;
	ze = 1.10;
	ano = 0;
	
	while (ze <= chico){
	chico += 0.02;
	ze += 0.03;
	ano++;
	
 printf("Chico: %.2f\tZe: %.2f\tAno: %d\n", chico, ze, ano);
    }
    printf("Sao necessarios %d anos!\n\n", ano);
}

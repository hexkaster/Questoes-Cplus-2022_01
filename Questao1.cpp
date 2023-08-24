#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char cod;
	cod='c';
	
	do{
	printf("Pressione qualquer tecla para continuar, ou tecla f para finalizar.\n");
	cod = getchar();
	}while(cod != 'f');
	return 0;
}


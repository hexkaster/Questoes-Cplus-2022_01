#include<iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float qtdFitas=1, valorAluguel, fatAnual, multasmes, qtdRep;
	
	cout << "Insira a quantidade de fitas possuídas: ";
	cin >> qtdFitas;
	cout << "Insira o valor de aluguel: ";
	cin >> valorAluguel;
	
	fatAnual=(qtdFitas/3)*valorAluguel*12;
	multasmes=(qtdFitas/30)*valorAluguel*0.1;
	qtdRep=qtdFitas-qtdFitas*0.02+qtdFitas*0.1;
	
	cout << "Faturamento anual da locadora: " << fatAnual;
	cout << "\n Ganho mensal por multas: " << multasmes;
	cout << "\n quantidade de fitas após a reposição, por ano: " << qtdRep;
	
	
	
}

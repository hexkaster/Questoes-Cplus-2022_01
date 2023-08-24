//7-Faça um programa onde o usuário digite um número qualquer e a partir deste número monte uma tabuada de 0 a 10
#include <iostream>

using namespace std;
int main()
{
    int j;
    cout << "Escreva um numero:";
    cin >> j;
    cout << "\n";
    
    for(int i=1; i <= 10; i++)
		{
    	cout << "\t" << j << "*" << i << "=" << (i*j) << endl;
		}
}

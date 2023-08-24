#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int i=0, chr=0;
    printf("\nEscreva o nome: ");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
        }
        else
            chr++;
        i++;
    }
    printf("\nNumero de letras: %d", chr);
    return 0;
}

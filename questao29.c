#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char produto[30];
    char preco[10];

    printf("Nome do produto: ");
    scanf("%s",produto);
    printf("Preco do produto: ");
    scanf("%s",preco);
    
    strcat(produto,": R$");
    strcat(produto,preco);

    printf("%s\n",produto);

    return 0;
}



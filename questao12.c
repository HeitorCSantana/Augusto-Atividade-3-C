#include <stdio.h>
#include <string.h>
int main()
{
     char nome[20],sobrenome[20];
     
     printf("Digite seu nome e sobrenome: ");
     
     scanf("%s %s",nome,sobrenome);
     
     printf("Olá, %s %s",sobrenome,nome);
     
     return 0;

}

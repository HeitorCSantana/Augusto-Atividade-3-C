#include <stdio.h>
#include <string.h>
int main()
{
    char nome[20];
    char sobrenome[20];
    char nome_sobrenome [41];
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	printf("Digite seu sobrenome: ");
	scanf("%s",&sobrenome);
	sprintf(nome_sobrenome,"%s %s", nome, sobrenome);
	printf("Olá, %s\n",nome_sobrenome);
	
	return 0;
}


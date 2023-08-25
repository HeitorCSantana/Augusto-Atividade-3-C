#include <stdio.h>
int main()
{

	int ano, idade;
	printf("Digite o seu ano de nascimento :");
	scanf("%i",&ano);
	idade = (2023 - ano);
	printf("Você tem/vai fazer %i anos esse ano (2023).",idade);
	return 0;
	
}


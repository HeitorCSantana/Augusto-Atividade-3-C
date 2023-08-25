#include <stdio.h>
#include <string.h>

int main(){
	
	char ano[5],boas_vindas[43] = "Bem-vindo ao nosso programa, nascido em ";

	printf("Ano de nascimento: ");
	scanf("%s",ano);

	strcat(boas_vindas,ano);
	
	printf("%s",boas_vindas);

	return 0;
}


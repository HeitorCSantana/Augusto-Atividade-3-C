#include <stdio.h>
#include <string.h>

int main(){
	
	char cidade[40],estado[40];

	printf("Cidade: ");
	scanf("%s",&cidade);
	printf("Estado: ");
	scanf("%s",&estado);

	strcat(cidade, ", ");
	strcat(cidade,estado);

	printf("Você mora em %s.\n", cidade);
	
	return 0;
}


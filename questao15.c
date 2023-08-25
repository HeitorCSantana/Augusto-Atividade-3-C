#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;

	printf("Digite um numero inteiro: ");
	scanf("%i",&num);

	if(num > 0){
		printf("%i e positivo.",num);
	}
	else if(num == 0){
		printf("voce digitou zero (0).");
	}
	else{
		printf("%i e negativo.",num);
	}
	return 0;
}

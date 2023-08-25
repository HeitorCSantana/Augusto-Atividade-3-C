#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	
	printf("Digite um numero inteiro: ");
	scanf("%i",&num);

	if (num % 2 == 0){
		printf("%i = par\n",num); 
		}
	else {
		printf("%i = impar\n",num);
		}

	return 0;
	
}

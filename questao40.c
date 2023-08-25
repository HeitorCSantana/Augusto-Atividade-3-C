#include <stdio.h>

int main(){

	int n1,n2,n3,resultado;

	printf("n1:");
	scanf("%i",&n1);
	printf("n2:");
        scanf("%i",&n2);
	printf("n3:");
        scanf("%i",&n3);

	resultado = (n1 + n2) * n3;

	printf("(%i + %i) * %i = %i\n",n1,n2,n3,resultado); 

	return 0;
}

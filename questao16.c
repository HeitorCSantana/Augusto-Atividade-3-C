#include <stdio.h>

int main()
{
	int x,y;

	printf("Digite o primeiro numero: ");
	scanf("%d",&x);
	printf("Digite o segundo numero: ");
	scanf("%d",&y);
	if (x >= y){
		printf("maior = %d",x);
	   }
	else if (y >= x){
		printf("maior = %d",y);
	   }

	return 0;
}

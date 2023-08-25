#include <stdio.h>
#include <math.h>

int main(){
	int C;
	float F;
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%d",&C);
	F = ( C * 9 ) /5 + 32;
	printf("%f Fahrenheit.",F); 
	
	return 0;
}

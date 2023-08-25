#include <stdio.h>

int main()
{
        float  altura,peso,imc;

	printf("Digite a sua altura em metros: ");
	scanf("%f",&altura);
	printf("Digite o peso em kg: ");
	scanf("%f",&peso);

	imc = peso/(altura*altura);
	
	printf("imc = %f",imc);

        return 0;
}


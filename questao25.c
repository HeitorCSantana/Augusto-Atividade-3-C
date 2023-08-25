#include <stdio.h>

int main() {
    
    int dia,mes,ano;
    
    printf("Digite sua data de nascimento[dd/mm/aaaa]: ");
    scanf("%i/%i/%i",&dia,&mes,&ano);
    
    printf("Dia: %i\n",dia);
    printf("Mes: %i\n",mes);
    printf("Ano: %i\n",ano);
    
    return 0;
}


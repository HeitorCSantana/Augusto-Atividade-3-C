#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int tamanho;

    printf("Digite uma string: ");

    fgets(string, sizeof(string), stdin);
    
    tamanho = strlen(string) - 1;
    
    printf("Numero de caracteres: %d\n", tamanho );

    return 0;
}


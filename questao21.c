#include <stdio.h>
#include <string.h>

int main() {
    
    char str[100];
    
    printf("Digite o nome da sua cidade: ");
    scanf("%c",str);
    
    if (str[0] == 'S' || str[0] == 's'){
        printf("O nome da sua cidade começa com a letra S");
    }
    else{
        printf("Sua cidade não começa com a letra S");
    }
    return 0;
}


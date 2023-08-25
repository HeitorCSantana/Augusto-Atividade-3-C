#include <stdio.h>

int main() {
    char string[1000];
    int cont = 0;

    
    printf(": ");
    scanf("%99s",&string);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= '0' && string[i] <= '9') {
            cont++;
        }
    }

    
    printf("Numero de digitos na string: %d", cont);

    return 0;
}

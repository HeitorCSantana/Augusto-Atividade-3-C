#include <stdio.h>
#include <string.h>

int main() {

    int x,y,area;
    
    printf("Digite o comprimento do retângulo: ");
    scanf("%d",&x);
    printf("Digite a altura do retângulo: ");
    scanf("%d",&y);
    
    area = x * y;
    
    printf("A = %d",area);
    
    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    int estado_civil;
    printf("Estados Civis: \nSolteiro/a [1]\nCasado/a [2]\nSeparado/a [3]\nDivorciado/a [4]\nViúvo/a [5]\n");
    printf("Digite o seu estado civil: ");
    scanf("%d",&estado_civil);
    
    if(estado_civil == 1){
        printf("Você é Solteiro/a.");
    }
    else if(estado_civil == 2){
        printf("Você é Casado/a.");
    }
    else if(estado_civil == 3){
        printf("Você é Separado/a.");
    }
    else if(estado_civil == 4){
        printf("Você é Divorciado/a.");
    }
    else if(estado_civil == 5){
        printf("Você é Viúvo/a.");
    }
    
    return 0;
}


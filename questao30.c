#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num, dobro;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);
    
    dobro = num*2;
    
    char str[] = "dobro = ", dobro_str[20];
    
    sprintf(dobro_str,"%d",dobro);
    strcat(str,dobro_str);
    
    printf("%s",str);

    return 0;
}


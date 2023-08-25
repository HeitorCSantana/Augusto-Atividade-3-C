#include <stdio.h>
#include <math.h>

int main() {
    int resto;
    float x,y;
    
    printf("x = ");
    scanf("%f",&x);
    printf("y = ");
    scanf("%f",&y);
    
    resto = fmodf(x,y);
    
    printf("resto de x/y = %d",resto);
    
    return 0;
}


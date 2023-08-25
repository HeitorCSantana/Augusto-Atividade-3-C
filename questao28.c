#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char str[1000],n_str[100];
    int n;

    printf("string: ");
    scanf("%s",str);
    printf("num: ");
    scanf("%d",&n);

    sprintf(n_str," %d",n);
    strcat(str,n_str);

    printf("%s\n",str);

    return 0;
}


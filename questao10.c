#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
    {
     char string[100];
     int cont = 0;
     
     printf("Digite uma sequencia de numeros separados por espacos: ");
     fgets (string, sizeof(string), stdin);
     
     char* token = strtok(string, " ");
     
     while (token != NULL)
        {
         int numero = atoi(token);
         
         if (numero != 0 || strcmp(token, "0") == 0)
            {
             cont++;
            }
         
         token = strtok(NULL, " ");
        } 
     printf("Numero de números na sequencia: %d\n",cont);
     
     return 0;
    }



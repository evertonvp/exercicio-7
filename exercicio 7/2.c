#include <stdio.h>

int main (){
    
    int com ,fim =0;
    

    printf("Informe um numero: ");
    scanf("%d", &com);

    while (com >= fim) {
        printf ("\n %d",com); 
        com--;
    }
    
    return 0;
}

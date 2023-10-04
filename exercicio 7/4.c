#include <stdio.h>

int main () {

    int fim, fimMultiplo;

    printf ("Digite um numero para ser listado os multiplos de 3: ");
    scanf  ("%d", &fim);

    fimMultiplo = fim * 3 * 3 * 3 * 3 * 3;

    while (fimMultiplo >= fim) {
        printf  ("\n Os 5 multiplos sao: %d",fim);
        fim *= 3;
    }


}
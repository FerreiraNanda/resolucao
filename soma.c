#include <stdio.h>

//o valor final é 77. Também é possível chegar ao resultado escrevendo um código equivalente

int main() {
    int indice = 12, soma = 0, k = 1;

    while (k < indice) {
        k = k + 1;
        soma =  soma + k;
    }

    printf("Soma = %d\n", soma);
    
    return 0;
}
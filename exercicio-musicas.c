#include <stdio.h>

int main() {

    int reproducoes[] = {120, 150, 80, 200, 300, 250};
    int tamanho = 6;

    int maiorSoma = 0;

    for(int i = 0; i < tamanho - 1; i++) {

        int soma = reproducoes[i] + reproducoes[i + 1];

        if(soma > maiorSoma) {

            maiorSoma = soma;

        }
    }

    printf("Maior soma consecutiva: %d\n", maiorSoma);

    return 0;
}
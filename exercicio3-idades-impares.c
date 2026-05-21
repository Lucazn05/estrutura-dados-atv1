#include <stdio.h>

int main() {

    int idades[] = {18, 21, 30, 25, 17, 40, 33};

    int tamanho = 7;

    for(int i = 0; i < tamanho; i++) {

        if(idades[i] % 2 != 0) {

            printf("%d ", idades[i]);

        }
    }

    return 0;
}
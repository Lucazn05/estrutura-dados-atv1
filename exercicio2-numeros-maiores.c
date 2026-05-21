#include <stdio.h>

int main() {

    int numeros[10] = {1, 7, 3, 9, 5, 8, 2, 6, 4, 10};

    for(int i = 0; i < 10; i++) {

        if(numeros[i] > 5) {

            printf("%d ", numeros[i]);

        }
    }

    return 0;
}
#include <stdio.h>

int main() {

    char sobrenome[] = "caparroz";

    for(int i = 0; sobrenome[i] != '\0'; i += 2) {

        printf("%c", sobrenome[i]);

    }

    return 0;
}
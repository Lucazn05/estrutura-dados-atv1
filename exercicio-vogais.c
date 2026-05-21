#include <stdio.h>

int main() {

    char texto[50];

    int vogais = 0;
    int consoantes = 0;

    printf("Digite um texto: ");
    fgets(texto, 50, stdin);

    for(int i = 0; texto[i] != '\0'; i++) {

        if(texto[i] >= 'a' && texto[i] <= 'z') {

            if(texto[i] == 'a' ||
               texto[i] == 'e' ||
               texto[i] == 'i' ||
               texto[i] == 'o' ||
               texto[i] == 'u') {

                vogais++;

            }
            else {

                consoantes++;

            }
        }
    }

    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);

    return 0;
}
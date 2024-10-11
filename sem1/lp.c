#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[100]; // Declara um array de caracteres para armazenar o nome

    printf("Digite seu nome: ");
    scanf("%s", nome); // Usa %s para ler a string

    // Compara a string usando strcmp
    if (strcmp(nome, "pipi") == 0) {
        printf("Bom dia, %s!\n", nome); // Saúda o usuário
    } else {
        printf("Você não é o pipi.\n"); // Mensagem se não for pipi
    }

    return 0;
}


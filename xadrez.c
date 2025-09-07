#include <stdio.h>

int main() {
    
    // Implementação de Movimentação do Bispo
    int movimento_bispo = 5;
    int contador_bispo = 0;

    while (contador_bispo < movimento_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    
    // Implementação de Movimentação da Torre
    int movimento_torre = 5;

    for (int i = 0; i < movimento_torre; i++) {
        printf("Direita\n");
    }
    
    // Implementação de Movimentação da Rainha
    int movimento_rainha = 8;
    int contador_rainha = 0;

    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < movimento_rainha);
    

    // Implementação de Movimentação do Cavalo
    int passos_verticais = 2;
    int passos_horizontais = 1;
    int i = 0;

    do {
        printf("\nEsquerda\n");
        for (int j = 0; j < passos_verticais; j++) {
            printf("Baixo\n");
        }
        i++;
    } while (i < passos_horizontais);
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

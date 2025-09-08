#include <stdio.h>

// --- Funções Recursivas ---
// Declaração da função da torre
    void moverTorre (int casasRestantes) {
        // Caso base: Se não há mais casas para mover, a função para
        if (casasRestantes <= 0) {
            return;
        }
        printf("Direita\n");
        moverTorre (casasRestantes - 1); // Passo recursivo
    }

// Declaração da função da Rainha
    void moverRainha (int casasRestantes) {
        if (casasRestantes <= 0) {
            return;
        }
        printf("Esquerda\n");
        moverRainha (casasRestantes - 1);
    }

// Declaração da função do Bispo
    void moverBispo (int casasRestantes) {
        if (casasRestantes <= 0) {
            return;
        }
        printf("Cima, Direita\n");
        moverBispo (casasRestantes - 1);
    }

int main() {
    
    // Movimento da Torre
    printf("--- Movimento da Torre (Recursivo) ---\n");
    moverTorre(5); // Chama a função recursiva atribuindo 5 ao valor de casas a mover

    // Movimento da Bispo
    printf("--- Movimento da Bispo (Recursivo) ---\n");
    moverBispo(5); // Chama a função recursiva atribuindo 5 ao valor de casas a mover

    // Movimento da Rainha
    printf("--- Movimento da Rainha (Recursivo) ---\n");
    moverRainha(8); // Chama a função recursiva atribuindo 8 ao valor de casas a mover

    // Movimento do Cavalo com Loops aninhados
    printf("--- Movimento do Cavalo (Loops Aninhados) ---\n");
    int passosParaCima = 2;
    int passosParaDireita = 1;

    // Loop externo "do while" controla o movimento para cima
    int i = 0;
    do {
        printf("Cima\n");

        // Loop interno "for" controla o movimento para direita
        for (int j = 0; j < passosParaDireita; j++) {
            printf("Direita\n");
        }
        i++;
    } while (i < passosParaCima);

    // Movimento do Bispo com Loops Aninhados
    printf("--- Movimento do Bispo com Loops Aninhados ---\n");
    int passoDiagonal = 5;

    for (int k = 0; k < passoDiagonal; k++) {
        printf("Cima\n");

        for (int l = 0; l < 1; l++) {
            printf("Direita\n");
        }
    }
    
    return 0;
}

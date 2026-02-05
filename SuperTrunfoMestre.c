#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int turistas;
} Carta;

void mostrarCarta(Carta c) {
    printf("\n--- %s ---\n", c.nome);
    printf("1) Populacao: %d\n", c.populacao);
    printf("2) Area: %.2f\n", c.area);
    printf("3) PIB: %.2f\n", c.pib);
    printf("4) Turistas: %d\n\n", c.turistas);
}

int compararAtributos(Carta jogador, Carta oponente, int a1, int a2) {
    float totalJ = 0, totalO = 0;
    
    switch(a1) {
        case 1: totalJ += jogador.populacao; totalO += oponente.populacao; break;
        case 2: totalJ += jogador.area; totalO += oponente.area; break;
        case 3: totalJ += jogador.pib; totalO += oponente.pib; break;
        case 4: totalJ += jogador.turistas; totalO += oponente.turistas; break;
    }

    switch(a2) {
        case 1: totalJ += jogador.populacao; totalO += oponente.populacao; break;
        case 2: totalJ += jogador.area; totalO += oponente.area; break;
        case 3: totalJ += jogador.pib; totalO += oponente.pib; break;
        case 4: totalJ += jogador.turistas; totalO += oponente.turistas; break;
    }

    if (totalJ > totalO) return 1;
    if (totalJ < totalO) return -1;
    return 0;
}

int main() {
    Carta baralho[6] = {
        {"Brasil", 214000000, 8516.0, 1444.7, 63000000},
        {"Canada", 38000000, 9984.7, 1736.4, 22000000},
        {"Japao", 125800000, 377.9, 5082.3, 32000000},
        {"Alemanha", 83020000, 357.4, 4130.0, 39000000},
        {"India", 1380000000, 3287.3, 2660.0, 12000000},
        {"China", 1412000000, 9596.9, 17800.0, 65000000}
    };

    printf("=== Super Trunfo Versao Mestre ===\n");

    Carta jogador = baralho[0];
    Carta oponente = baralho[1];

    printf("\nSua carta:\n");
    mostrarCarta(jogador);

    printf("Carta do oponente:\n");
    mostrarCarta(oponente);

    int escolha1, escolha2;
    printf("Escolha dois atributos para comparar (ex: 1 3): ");
    scanf("%d %d", &escolha1, &escolha2);

    int resultado = compararAtributos(jogador, oponente, escolha1, escolha2);

    if (resultado == 1)
        printf("\nVoce venceu essa comparacao!\n");
    else if (resultado == -1)
        printf("\nO oponente venceu.\n");
    else
        printf("\nEmpate! Ninguem pontua.\n");

    printf("\nObrigado por jogar!\n");

    return 0;
}

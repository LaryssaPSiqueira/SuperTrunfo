#include <stdio.h>

void main() {
    // Atributos das cartas (simplificado para exemplo)
    int populacao1 = 500000, populacao2 = 300000;
    float area1 = 1200.5, area2 = 950.3;
    float pib1 = 25.7, pib2 = 30.2;
    int pontos1 = 15, pontos2 = 20;

    int opcao;

    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            if (populacao1 > populacao2)
                printf("Carta 1 venceu (População maior)\n");
            else if (populacao2 > populacao1)
                printf("Carta 2 venceu (População maior)\n");
            else
                printf("Empate na população!\n");
            break;

        case 2:
            if (area1 > area2)
                printf("Carta 1 venceu (Área maior)\n");
            else if (area2 > area1)
                printf("Carta 2 venceu (Área maior)\n");
            else
                printf("Empate na área!\n");
            break;

        case 3:
            if (pib1 > pib2)
                printf("Carta 1 venceu (PIB maior)\n");
            else if (pib2 > pib1)
                printf("Carta 2 venceu (PIB maior)\n");
            else
                printf("Empate no PIB!\n");
            break;

        case 4:
            if (pontos1 > pontos2)
                printf("Carta 1 venceu (Mais pontos turísticos)\n");
            else if (pontos2 > pontos1)
                printf("Carta 2 venceu (Mais pontos turísticos)\n");
            else
                printf("Empate nos pontos turísticos!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}

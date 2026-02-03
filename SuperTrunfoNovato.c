#include <stdio.h> // Standard input-output library
#include <string.h> // String manipulation library

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.

int main()
{
    // Variaveis da carta 1
    char estado1[3], codigo1[5], nome1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1;

    // Variaveis da carta 2
    char estado2[3], codigo2[5], nome2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2;

    printf("======= Cadastro da carta 1 ========\n");

    printf("Estado: (ex:MG):");
    scanf("%s", estado1);

    printf("Código da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;

    printf("\n======= Cadastro da carta 2 =======\n");

    printf("Estado: (ex:SP):");
    scanf("%s", estado2);

    printf("Código da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;

    // Exibição
    printf("========== DADOS DAS CARTAS ==========");
    printf("\n --- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);

    printf("\n --- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);

    // Comparação
    printf("========== RESULTADO DA COMPARAÇÃO ==========");

    if (populacao1 > populacao2)
    {
        printf("Vencedora: Carta 1 (%s) - maior população.\n", nome1);
    }
    else if (populacao2 > populacao1)
    {
        printf("Vencedora: Carta 2 (%s) - maior população.\n", nome2);
    }
    else
    {
        printf("Empate na população.\n");
    }

    printf("\nComparação por densidade populacional (menor vence):\n");

    if (densidade1 < densidade2)
    {
        printf("Vencedora: Carta 1 (%s) - menor densidade.\n", nome1);
    }
    else if (densidade2 < densidade1)
    {
        printf("Vencedora: Carta 2 (%s) - menor densidade.\n", nome2);
    }
    else
    {
        printf("Empate na densidade populacional.\n");
    }

    return 0;
}

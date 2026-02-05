#include <stdio.h>

int main()
{
    char estado1[3], codigo1[5], nome1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1;

    char estado2[3], codigo2[5], nome2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2;

    printf("======= Cadastro da carta 1 ========\n");

    printf("Estado: ");
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

    densidade1 = (float)populacao1 / area1;

    printf("\n======= Cadastro da carta 2 ========\n");

    printf("Estado: ");
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

    densidade2 = (float)populacao2 / area2;

    printf("\n========== DADOS DAS CARTAS ==========\n");

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);

    printf("\n========== RESULTADO DA COMPARAÇÃO ==========\n");

    if (populacao1 > populacao2)
        printf("Vencedora: Carta 1 (%s) - maior população.\n", nome1);
    else if (populacao2 > populacao1)
        printf("Vencedora: Carta 2 (%s) - maior população.\n", nome2);
    else
        printf("Empate na população.\n");

    printf("\nComparação por densidade populacional (menor vence):\n");

    if (densidade1 < densidade2)
        printf("Vencedora: Carta 1 (%s) - menor densidade.\n", nome1);
    else if (densidade2 < densidade1)
        printf("Vencedora: Carta 2 (%s) - menor densidade.\n", nome2);
    else
        printf("Empate na densidade populacional.\n");

    return 0;
}

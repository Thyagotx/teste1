#include <stdio.h>

void criarCarta(
    int numero,
    char *estado,
    char codigo[],
    char nome[],
    unsigned long *habitantes,
    float *area,
    float *pib,
    int *pontos,
    float *densidade,
    float *pibPerCapita,
    float *superPoder)
{
    printf("Digite a letra que representará seu Estado (Carta %d): \n", numero);
    scanf(" %c", estado);

    printf("Digite a letra+código: \n");
    scanf("%2s", codigo);

    printf("Cidade: \n");
    scanf("%19s", nome);

    printf("Digite o tamanho da população: \n");
    scanf("%lu", habitantes);

    printf("Digite a Área em Km²: \n");
    scanf("%f", area);

    printf("Digite o PIB: \n");
    scanf("%f", pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", pontos);

    if (*area > 0)
    {
        *densidade = *habitantes / *area;
    }
    else
    {
        *densidade = 0;
        printf("Área deve ser maior que zero para calcular a densidade populacional.\n");
    }

    if (*habitantes > 0)
    {
        *pibPerCapita = *pib / *habitantes;
    }
    else
    {
        *pibPerCapita = 0;
    }

    float inversoDensidade = (*densidade > 0) ? (1.0 / *densidade) : 0;
    *superPoder = *habitantes + *area + *pib + *pontos + *pibPerCapita + inversoDensidade;

    // Exibição dos dados
    printf("\nCarta %d\n", numero);
    printf("Estado: %c\n", *estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %lu\n", *habitantes);
    printf("Área: %.2f Km²\n", *area);
    printf("PIB: %.2f\n", *pib);
    printf("Pontos Turísticos: %d\n", *pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", *densidade);
    printf("PIB per capita: %.2f\n", *pibPerCapita);
    printf("Super Poder: %.2f\n", *superPoder);
    printf("-------------------------\n");
}

// Função para comparar valores e exibir resultado
void comparar(char *nome, float valor1, float valor2, int menorVence)
{
    int resultado;
    if (menorVence)
    {
        resultado = (valor1 < valor2) ? 1 : 0;
    }
    else
    {
        resultado = (valor1 > valor2) ? 1 : 0;
    }
    printf("%s: %d\n", nome, resultado);
}

int main()
{
    // Carta 1
    char estado1, codigo1[3], nome1[20];
    unsigned long habitantes1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;
    int pontos1;

    // Carta 2
    char estado2, codigo2[3], nome2[20];
    unsigned long habitantes2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;
    int pontos2;

    // Criar cartas
    criarCarta(1, &estado1, codigo1, nome1, &habitantes1, &area1, &pib1, &pontos1, &densidade1, &pibPerCapita1, &superPoder1);
    criarCarta(2, &estado2, codigo2, nome2, &habitantes2, &area2, &pib2, &pontos2, &densidade2, &pibPerCapita2, &superPoder2);

    // Comparações
    printf("\n--- Comparações ---\n");
    comparar("População", (float)habitantes1, (float)habitantes2, 0);
    comparar("Área", area1, area2, 0);
    comparar("PIB", pib1, pib2, 0);
    comparar("Pontos Turísticos", (float)pontos1, (float)pontos2, 0);
    comparar("PIB per capita", pibPerCapita1, pibPerCapita2, 0);
    comparar("Densidade Populacional", densidade1, densidade2, 1); // menor vence
    comparar("Super Poder", superPoder1, superPoder2, 0);

    return 0;
}

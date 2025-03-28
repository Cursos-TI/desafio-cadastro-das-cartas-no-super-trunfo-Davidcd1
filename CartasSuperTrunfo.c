#include <stdio.h>

// Desafio Super Trunfo - Países Nível Mestre
// Tema 1 - Cadastro das Cartas
int main() {
    
    // Variáveis da carta 1
    char estado1[30], cidade1[50], codigo1[4];
    double pop1, area1, pib1, dpop1, ppc1, poder1;
    int npt1;

    // Variáveis da carta 2
    char estado2[30], cidade2[50], codigo2[4];
    double pop2, area2, pib2, dpop2, ppc2, poder2;
    int npt2;

    // Cadastro das Cartas:
    // Pedindo as informações da carta 1 ao usuário
    printf("\nCarta 1\nEstado: ");
    scanf(" %s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %s", cidade1);

    printf("Populacao: ");
    scanf("%lf", &pop1);

    printf("Area: ");
    scanf("%lf", &area1);

    printf("PIB: ");
    scanf("%lf", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &npt1);
    
    // Pedindo as informações da carta 2 ao usuário
    printf("\nCarta 2\nEstado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%3s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%lf", &pop2);

    printf("Area: ");
    scanf("%lf", &area2);

    printf("PIB: ");
    scanf("%lf", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &npt2);

    // Calculando os valores "Densidade Populacional", "PIB per Capta" e "Poder" das duas cartas
    dpop1 = pop1 / area1;
    dpop2 = dpop2 / area2;

    ppc1 = pib1 / pop1;
    ppc2 = pib2 / pop2;


    poder1 = (pop1+area1+pib1+npt1+ppc1) - dpop1;
    poder2 = (pop2+area2+pib2+npt2+ppc2) - dpop2;

    int resultado;

    // Exibição dos Dados das Cartas:
    // Compara os atributos das cartas e imprime o vencedor
    printf("\n\nComparacao de Cartas:\n");

    resultado = pop1 > pop2;
    resultado = (resultado == 0) + 1;
    printf("Populacao: Carta %d venceu (%d)\n", resultado, (pop1 > pop2));
    
    resultado = area1 > area2;
    resultado = (resultado == 0) + 1;
    printf("Area: Carta %d venceu (%d)\n", resultado, (area1 > area2));
    
    resultado = pib1 > pib2;
    resultado = (resultado == 0) + 1;
    printf("PIB: Carta %d venceu (%d)\n", resultado, (pib1 > pib2));
    
    resultado = npt1 > npt2;
    resultado = (resultado == 0) + 1;
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", resultado, (npt1 > npt2));

    resultado = dpop1 < dpop2;
    resultado = (resultado == 0) + 1;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado, (dpop1 < dpop2));

    resultado = ppc1 > ppc2;
    resultado = (resultado == 0) + 1;
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado, (ppc1 > ppc2));

    resultado = poder1 > poder2;
    resultado = (resultado == 0) + 1;
    printf("Super Poder: Carta %d venceu (%d)\n\n", resultado, (poder1 > poder2));

    return 0;
}

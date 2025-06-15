#include <stdio.h>

// Programa: Comparação de Cartas - Super Trunfo
int main() {
// Declaração das variáveis para a carta 1
char estado1[3], codigo1[4], nomeCidade1[50];
unsigned long int populacao1;
float area1, pib1;
int pontosTuristicos1;
float densidadePopulacional1, pibPerCapita1;

// Declaração das variáveis para a carta 2
char estado2[3], codigo2[4], nomeCidade2[50];
unsigned long int populacao2;
float area2, pib2;
int pontosTuristicos2;
float densidadePopulacional2, pibPerCapita2;

// Entrada de dados da primeira carta
printf("=== Cadastro da Carta 1 ===\n");
printf("Estado (sigla, ex: SP): ");
scanf("%s", estado1);
printf("Código da carta (ex: A01): ");
scanf("%s", codigo1);
printf("Nome da cidade: ");
getchar(); // Limpa o buffer
scanf("%[^\n]", nomeCidade1);
printf("População: ");
scanf("%lu", &populacao1);
printf("Área (km²): ");
scanf("%f", &area1);
printf("PIB (em bilhões de reais): ");
scanf("%f", &pib1);
printf("Número de pontos turísticos: ");
scanf("%d", &pontosTuristicos1);

// Cálculos da carta 1
densidadePopulacional1 = populacao1 / area1;
pibPerCapita1 = (pib1 * 1000000000) / populacao1;

// Entrada de dados da segunda carta
printf("\n=== Cadastro da Carta 2 ===\n");
printf("Estado (sigla, ex: RJ): ");
scanf("%s", estado2);
printf("Código da carta (ex: B02): ");
scanf("%s", codigo2);
printf("Nome da cidade: ");
getchar(); // Limpa o buffer
scanf("%[^\n]", nomeCidade2);
printf("População: ");
scanf("%lu", &populacao2);
printf("Área (km²): ");
scanf("%f", &area2);
printf("PIB (em bilhões de reais): ");
scanf("%f", &pib2);
printf("Número de pontos turísticos: ");
scanf("%d", &pontosTuristicos2);

// Cálculos da carta 2
densidadePopulacional2 = populacao2 / area2;
pibPerCapita2 = (pib2 * 1000000000) / populacao2;

// Escolha do atributo para comparação
// AQUI você pode trocar por "area1", "pib1", "densidadePopulacional1", etc.
printf("\n=== Comparação de Cartas (Atributo: População) ===\n");
printf("Carta 1 - %s (%s): %lu habitantes\n", nomeCidade1, estado1, populacao1);
printf("Carta 2 - %s (%s): %lu habitantes\n", nomeCidade2, estado2, populacao2);

// Comparação usando if e if-else
if (populacao1 > populacao2) {
printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
} else if (populacao2 > populacao1) {
printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
} else {
printf("Resultado: Empate!\n");
}

return 0;
}
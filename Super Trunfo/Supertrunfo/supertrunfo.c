#include <stdio.h>

int main(){

    // Variáveis da Carta 1
    char estado1[50];
    char codigo1[50];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Coleta os dados da Carta 1
    printf("Insira os dados da carta 1\n");

    printf("Estado: \n");
    scanf("%s", &estado1);

    printf("Código: \n");
    scanf("%s", &codigo1);

    printf("Cidade: \n");
    scanf("%s", &cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos1);

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %f R$\n", pib1);
    printf("Pontos Turísticos: %d \n", pontosturisticos1);

    // Variáveis da Carta 2
    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Coleta os dados da Carta 2
    printf("Insira os dados da carta 2 \n");

    printf("Estado: \n");
    scanf("%s", &estado2);

    printf("Código: \n");
    scanf("%s", &codigo2);

    printf("Cidade: \n");
    scanf("%s", &cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos2 );
    
    // Exibe os dados das cartas
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %f R$\n", pib1);
    printf("Pontos Turísticos: %d \n", pontosturisticos1);
    
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %f R$\n", pib2);
    printf("Pontos Turísticos: %d \n", pontosturisticos2);

   return 0;

}
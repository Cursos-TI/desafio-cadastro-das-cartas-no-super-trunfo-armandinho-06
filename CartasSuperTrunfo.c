#include <stdio.h>

int main() {
    char estado1[3], estado2[3];  // Para sigla do estado (ex: "A", "B")
    char codigo_da_carta1[10], codigo_da_carta2[10];  // Suposição: um código pode ter até 9 caracteres
    char nome_da_cidade1[50], nome_da_cidade2[50];  // Nome de cidade (espaços não são aceitos com scanf)
    int populacao1, populacao2; // int usado para números
    float area1, area2; // float usado para números decimais
    float pib1, pib2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;

    // dados da primeira carta
    printf("Informe o estado da primeira carta: \n");
    scanf("%s", estado1);

    printf("Informe o código da primeira carta: \n");
    scanf("%s", codigo_da_carta1);

    printf("Informe o nome da cidade da primeira carta: \n");
    scanf("%s", nome_da_cidade1);  

    printf("Informe a população da primeira cidade: \n");
    scanf("%d", &populacao1);

    printf("Informe a área da primeira cidade: \n");
    scanf("%f", &area1);

    printf("Informe o PIB da primeira cidade: \n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos da primeira cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos1);

    // dados da segunda carta
    printf("Informe o estado da segunda carta: \n");
    scanf("%s", estado2);

    printf("Informe o código da segunda carta: \n");
    scanf("%s", codigo_da_carta2);

    printf("Informe o nome da cidade da segunda carta: \n");
    scanf("%s", nome_da_cidade2);  

    printf("Informe a população da segunda cidade: \n");
    scanf("%d", &populacao2);

    printf("Informe a área da segunda cidade: \n");
    scanf("%f", &area2);

    printf("Informe o PIB da segunda cidade: \n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos da segunda cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf("\n===== Carta 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo_da_carta1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); // 2f usado para mostrar as duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d \n", numero_de_pontos_turisticos1);

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d \n", numero_de_pontos_turisticos2);

    return 0;
}

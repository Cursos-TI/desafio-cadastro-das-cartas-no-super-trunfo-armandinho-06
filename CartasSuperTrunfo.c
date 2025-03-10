#include <stdio.h>

int main() {
    char estado1[3], estado2[3];  // Para sigla do estado (ex: "A", "B")
    char codigo_da_carta1[10], codigo_da_carta2[10];  // Suposição: um código pode ter até 9 caracteres
    char nome_da_cidade1[50], nome_da_cidade2[50];  // Nome de cidade (espaços não são aceitos com scanf)
    unsigned long int populacao1, populacao2; // int usado para números
    float area1, area2; // float usado para números decimais
    float pib1, pib2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    float densidade_populacional1, pib_per_capita1;
    float densidade_populacional2,pib_per_capita2;


    // dados da primeira carta
    printf("Informe o estado da primeira carta: \n");
    scanf("%s", estado1);

    printf("Informe o código da primeira carta: \n");
    scanf("%s", codigo_da_carta1);

    printf("Informe o nome da cidade da primeira carta: \n");
    scanf("%s", nome_da_cidade1);  

    printf("Informe a população da primeira cidade: \n");
    scanf("%lu", &populacao1);

    printf("Informe a área da primeira cidade: \n");
    scanf("%f", &area1);

    printf("Informe o PIB da primeira cidade: \n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos da primeira cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos1);
    
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / (float)populacao1;  // PIB ajustado para reais

    float superpoder1 = (float)populacao1 + area1 + pib1 + numero_de_pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1); // ajustando um int para float

    

    // dados da segunda carta
    printf("Informe o estado da segunda carta: \n");
    scanf("%s", estado2);

    printf("Informe o código da segunda carta: \n");
    scanf("%s", codigo_da_carta2);

    printf("Informe o nome da cidade da segunda carta: \n");
    scanf("%s", nome_da_cidade2);  

    printf("Informe a população da segunda cidade: \n");
    scanf("%lu", &populacao2);

    printf("Informe a área da segunda cidade: \n");
    scanf("%f", &area2);

    printf("Informe o PIB da segunda cidade: \n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos da segunda cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / (float)populacao2;  // PIB ajustado para reais

    float superpoder2 = (float)populacao2 + area2 + pib2 + numero_de_pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    int vitoria_populacao = (populacao1 > populacao2) * 1 + (populacao2 > populacao1) * 2; // sempre retorna carta 1 ou carta 2 venceu
    int vitoria_area = (area1 > area2) * 1 + (area2 > area1) * 2;
    int vitoria_pib = (pib1 > pib2) * 1 + (pib2 > pib1) * 2;
    int vitoria_pontos_turisticos = (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) * 1 + (numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1) * 2;
    int vitoria_pib_per_capita = (pib_per_capita1 > pib_per_capita2) * 1 + (pib_per_capita2 > pib_per_capita1) * 2;
    int vitoria_superpoder = (superpoder1 > superpoder2) * 1 + (superpoder2 > superpoder1) * 2;

    // Regra especial: menor densidade vence
    int vitoria_densidade = (densidade_populacional1 < densidade_populacional2) * 1 + (densidade_populacional2 < densidade_populacional1) * 2; // inverte o sinal para carta menor vencer


    
    printf("\n===== Comparação de Cartas =====\n");
    printf("População: Carta %d venceu (%d)\n", vitoria_populacao, vitoria_populacao == 1);
    printf("Área: Carta %d venceu (%d)\n", vitoria_area, vitoria_area == 1);
    printf("PIB: Carta %d venceu (%d)\n", vitoria_pib, vitoria_pib == 1);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", vitoria_pontos_turisticos, vitoria_pontos_turisticos == 1);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vitoria_densidade, vitoria_densidade == 1);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vitoria_pib_per_capita, vitoria_pib_per_capita == 1);
    printf("Super Poder: Carta %d venceu (%d)\n", vitoria_superpoder, vitoria_superpoder == 1);


    


    return 0;
}
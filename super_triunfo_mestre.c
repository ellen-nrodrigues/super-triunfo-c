#include <stdio.h>

int main() {
     
    // Váriáveis que serão usadas, serão diferenciadas como 1 e 2,
    // 1 para a primeira carta, e 2 para a segunda carta.

    char estado1, estado2, codigo1[4], codigo2[4], nome_cidade1[30], nome_cidade2[30];
    int pontos_turisticos1, pontos_turisticos2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;

    //Variáveis adcionadas
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;

    //Adicionando mais uma variável
    float superpoder1, superpoder2;

    //Preenchendo a carta 1
 

    printf("------CADASTRO DE CARTAS SUPER TRIUNFO------\n");
    printf("CARTA 1\n");

    printf("Digite uma letra para representar o Estado (de A a H):\n");
    scanf(" %c", &estado1);

    printf("Digite um número, para representar o código da carta (de 01 a 04)\n");
    scanf("%s", codigo1);

    printf("Digite nome de uma cidade:\n");
    scanf("%s", nome_cidade1);

    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em km²:\n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turísticos:\n");
    scanf("%i", &pontos_turisticos1);

    //Cálculo da densidade populacional e PIB per capita da Carta 1

    densidade1 = (float) populacao1 / area1;
    pib_per_capita1 = (float)(pib1 * 1000000) / populacao1;

    //Cáuculo do Super Poder da Carta 1

    superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);


    printf("\nCARTA 2\n");

    printf("Digite uma letra para representar o Estado (de A á H):\n");
    scanf(" %c", & estado2);

    printf("Digite um número, para representar o código da carta (de 01 a 04)\n");
    scanf("%s", codigo2);

    printf("Digite nome de uma cidade:\n");
    scanf("%s", nome_cidade2);

    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2); 

    printf("Digite o numero de pontos turísticos:\n");
    scanf("%i", &pontos_turisticos2);

    //Cálculo da densidade populacional e PIB per capita da Carta 2

    densidade2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) (pib2 * 1000000) / populacao2;

    //Cáuculo do Super Poder da Carta 2

    superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    printf("---INFORMAÇÕES CADASTRADAS---\n");
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.3f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Números de pontos Turísticos: %i\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.3f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Números de pontos Turísticos: %i\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    // Comparação dos atributos e exibição do vencedor
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %lu venceu\n", (populacao1 > populacao2));
    printf("Área: Carta %d venceu\n", (area1 > area2));
    printf("PIB: Carta %d venceu\n", (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d venceu\n", (pontos_turisticos1 > pontos_turisticos2));
    printf("Densidade Populacional: Carta %d venceu\n", (densidade1 < densidade2) ? 1 : 2); // Menor vence
    printf("PIB per Capita: Carta %d venceu\n", (pib_per_capita1 > pib_per_capita2));

     //Comparação do Super Poder
     printf("Super Poder: Carta %d venceu\n", (superpoder1 > superpoder2));

return 0;
 
}  
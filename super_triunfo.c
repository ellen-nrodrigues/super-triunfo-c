#include <stdio.h>

int main() {
     
    // Váriáveis que serão usadas, serão diferenciadas como 1 e 2,
    // 1 para a primeira carta, e 2 para a segunda carta.

    char estado1, estado2, codigo1[4], codigo2[4], nome_cidade1[30], nome_cidade2[30];
    int pontos_turisticos1, pontos_turisticos2, populacao1, populacao2;
    float area1, area2, pib1, pib2;

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
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²:\n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turísticos:\n");
    scanf("%i", &pontos_turisticos1);

  

    printf("\nCARTA 2\n");

    printf("Digite uma letra para representar o Estado (de A á H):\n");
    scanf(" %c", & estado2);

    printf("Digite um número, para representar o código da carta (de 01 a 04)\n");
    scanf("%s", codigo2);

    printf("Digite nome de uma cidade:\n");
    scanf("%s", nome_cidade2);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2); 

    printf("Digite o numero de pontos turísticos:\n");
    scanf("%i", &pontos_turisticos2);

    printf("---INFORMAÇÕES CADASTRADAS---\n");
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Números de pontos Turísticos: %i\n", pontos_turisticos1);

    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Números de pontos Turísticos: %i\n", pontos_turisticos2);

    return 0;

}

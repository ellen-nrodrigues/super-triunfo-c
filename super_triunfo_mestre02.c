#include <stdio.h>
 
 int main() {
     // Declaração de variáveis
     char estado1, estado2, codigo1[4], codigo2[4], nome_cidade1[30], nome_cidade2[30];
     int pontos_turisticos1, pontos_turisticos2, populacao1, populacao2, opcao1, opcao2;
     float area1, area2, pib1, pib2;
     float densidade1, densidade2, pib_per_capita1, pib_per_capita2;
     float soma1 = 0, soma2 = 0;
 
     // Cadastro da carta 1
     printf("------CADASTRO DE CARTAS SUPER TRIUNFO------\n");
     printf("CARTA 1\n");
 
     printf("Digite uma letra para representar o Estado (de A a H):\n");
     scanf(" %c", &estado1);
 
     printf("Digite um número para representar o código da carta (de 01 a 04):\n");
     scanf("%s", codigo1);
 
     printf("Digite o nome de uma cidade:\n");
     scanf("%s", nome_cidade1);
 
     printf("Digite a população da cidade:\n");
     scanf("%d", &populacao1);
 
     printf("Digite a área da cidade em km²:\n");
     scanf("%f", &area1);
 
     printf("Digite o PIB da cidade:\n");
     scanf("%f", &pib1);
 
     printf("Digite o número de pontos turísticos:\n");
     scanf("%d", &pontos_turisticos1);
 
     // Cadastro da carta 2
     printf("\nCARTA 2\n");
 
     printf("Digite uma letra para representar o Estado (de A a H):\n");
     scanf(" %c", &estado2);
 
     printf("Digite um número para representar o código da carta (de 01 a 04):\n");
     scanf("%s", codigo2);
 
     printf("Digite o nome de uma cidade:\n");
     scanf("%s", nome_cidade2);
 
     printf("Digite a população da cidade:\n");
     scanf("%d", &populacao2);
 
     printf("Digite a área da cidade em km²:\n");
     scanf("%f", &area2);
 
     printf("Digite o PIB da cidade:\n");
     scanf("%f", &pib2);
 
     printf("Digite o número de pontos turísticos:\n");
     scanf("%d", &pontos_turisticos2);
 
     // Cálculo da densidade populacional e PIB per capita
     densidade1 = populacao1 / area1;
     densidade2 = populacao2 / area2;
 
     pib_per_capita1 = pib1 / (float)populacao1;
     pib_per_capita2 = pib2 / (float)populacao2;
 
     // Exibir informações cadastradas
     printf("\n--- INFORMAÇÕES CADASTRADAS ---\n");
 
     printf("\nCARTA 1:\n");
     printf("Estado: %c\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Nome da Cidade: %s\n", nome_cidade1);
     printf("População: %d\n", populacao1);
     printf("Área: %.3f km²\n", area1);
     printf("PIB: %.2f\n", pib1);
     printf("Números de pontos Turísticos: %d\n", pontos_turisticos1);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
     printf("PIB per Capita: %.2f\n", pib_per_capita1);
 
     printf("\nCARTA 2:\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", nome_cidade2);
     printf("População: %d\n", populacao2);
     printf("Área: %.3f km²\n", area2);
     printf("PIB: %.2f\n", pib2);
     printf("Números de pontos Turísticos: %d\n", pontos_turisticos2);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
     printf("PIB per Capita: %.2f\n", pib_per_capita2);
 
     // Menu para o jogador escolher o atributo
     printf("\n###MENU###\n");
     printf("1. População\n");
     printf("2. Área\n");
     printf("3. Pib Per Cápita\n");
     printf("4. Pontos Turísticos\n");
     printf("5. Densidade Demográfica\n");
     printf("Escolha o primeiro atributo:");
     scanf("%d", &opcao1);

     printf("Escolha o segundo atributo:");
     scanf("%d", &opcao2);

      if (opcao2 == opcao1)
      {
         printf("Você já escolheu essa opção. Recomece o jogo!\n");
         return 0;
      }
      

     switch (opcao1)
     {
     case 1: 
        printf("\n###COMPARAÇÃO DAS CARTAS###\n");
        printf("Atributo escolhido --População--\n");
        printf("Carta 1 - %s: %d\n", nome_cidade1, populacao1);
        printf("Carta 2 - %s: %d\n", nome_cidade2, populacao2);
            if (populacao1>populacao2) {
               soma1 += populacao1;
        } else {
               soma2 += populacao2;
        }
        break;
     case 2: 
        printf("Atributo escolhido ---Área---\n");
        printf("Carta 1 - %s: %.2f km²\n", nome_cidade1, area1);
        printf("Carta 2 - %s: %.2f km²\n", nome_cidade2, area2);
            if (area1>area2) {
               soma1 += area1;
         } else {
               soma2+=area2;
     }
        break;
     case 3: 
        printf("Atributo escolhido ---PIB---\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade1, pib1);
        printf("Carta 2 - %s: %.2f\n", nome_cidade2, pib2);
        if (pib1>pib2) {
            soma1+=pib1;
         } else {
           soma2+=pib2; 
     }
        break;
     case 4:
        printf("Atributo escolhido --Pontos Turistícos--\n");
        printf("Carta 1 - %s: %d\n", nome_cidade1, pontos_turisticos1);
        printf("Carta 2 - %s: %d\n", nome_cidade2, pontos_turisticos2);
        if (pontos_turisticos1>pontos_turisticos2) {
            soma1+=pontos_turisticos1;
     } else {
            soma2+=pontos_turisticos2;
     }
        break;
     case 5:
        printf("Atributo escolhido --Densidade Demográfica--\n");
        printf("Carta 1 - %s: %.2f hab/km²\n", nome_cidade1, densidade1);
        printf("Carta 2 - %s: %.2f hab/km²\n", nome_cidade2, densidade2);
        if (densidade1<densidade2) {
            soma1+=densidade1;
     } else {
        soma2+=densidade2;
     }
        break;
     default:
        printf("Opçao Inválida");
        break;
     }

     switch (opcao2)
     {
     case 1: 
        printf("Atributo escolhido --População--\n");
        printf("Carta 1 - %s: %d\n", nome_cidade1, populacao1);
        printf("Carta 2 - %s: %d\n", nome_cidade2, populacao2);
            if (populacao1>populacao2) {
               soma1 += populacao1;
        } else {
               soma2 += populacao2;
        }
        break;
     case 2: 
        printf("Atributo escolhido ---Área---\n");
        printf("Carta 1 - %s: %.2f km²\n", nome_cidade1, area1);
        printf("Carta 2 - %s: %.2f km²\n", nome_cidade2, area2);
            if (area1>area2) {
               soma1 += area1;
         } else {
               soma2+=area2;
     }
        break;
     case 3: 
        printf("Atributo escolhido ---PIB---\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade1, pib1);
        printf("Carta 2 - %s: %.2f\n", nome_cidade2, pib2);
        if (pib1>pib2) {
            soma1+=pib1;
         } else {
           soma2+=pib2; 
     }
        break;
     case 4:
        printf("Atributo escolhido --Pontos Turistícos--\n");
        printf("Carta 1 - %s: %d\n", nome_cidade1, pontos_turisticos1);
        printf("Carta 2 - %s: %d\n", nome_cidade2, pontos_turisticos2);
        if (pontos_turisticos1>pontos_turisticos2) {
            soma1+=pontos_turisticos1;
     } else {
            soma2+=pontos_turisticos2;
     }
        break;
     case 5:
        printf("Atributo escolhido --Densidade Demográfica--\n");
        printf("Carta 1 - %s: %.2f hab/km²\n", nome_cidade1, densidade1);
        printf("Carta 2 - %s: %.2f hab/km²\n", nome_cidade2, densidade2);
        if (densidade1<densidade2) {
            soma1+=densidade1;
     } else {
        soma2+=densidade2;
     }
        break;
     default:
        printf("Opçao Inválida");
        break;
     }

     //Resultado final
     printf("\n---RESULTADO FINAL---\n");
     if (soma1 > soma2)
     {
      printf("Carta 1 venceu! Soma Total: %.2f \n", soma1);
     } else if (soma1 < soma2) {
      printf("Carta 2 venceu! Soma Total: %.2f \n", soma2);
     } else {
      printf("EMPATE! Soma Total: %.2f\n", soma1);
     }
     
     return 0;
 }
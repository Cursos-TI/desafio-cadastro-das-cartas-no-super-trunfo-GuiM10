#include <stdio.h> 

int main() {
    // Super Trunfo

    char estado, estado2;

    char codigo[20], codigo2[20];

    char cidade[30], cidade2[30];

    unsigned long int populacao, populacao2;

    float area, area2;

    float PIB, PIB2;

    int pontosTuristicos, pontosTuristicos2;

    float DensidadePopulacional, DensidadePopulacional2;

    float PIBperCapita, PIBperCapita2;

    float SuperPoder, SuperPoder2;

    // Carta 1
    printf("Digite a letra do estado(A-H): \n");
    scanf(" %c", &estado);  // Usando &estado para pegar o endereço

    printf("Codigo(letra do estado seguinte de um numero de 01a04):\n");
    scanf("%s", codigo);

    printf("Nome da cidade:\n");
    scanf("%s", cidade);

    printf("Quantidade da População:\n");
    scanf("%lu", &populacao);

    printf("Digite a área(em km2):\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos);

    DensidadePopulacional = (populacao / area);
    PIBperCapita = (PIB / populacao);

    float quocienteDensidade = (float) area / populacao;

    SuperPoder = (float) populacao + area + PIB + pontosTuristicos + PIBperCapita + quocienteDensidade;
    printf("O super poder da carta1 é: %f\n", SuperPoder);

    // Informações Carta 2
    printf("Digite a letra do estado2(A-H): \n");
    scanf(" %c", &estado2);  // Usando &estado2 para pegar o endereço

    printf("Codigo2(letra do estado seguinte de um numero de 01a04):\n");
    scanf("%s", codigo2);


    printf("Nome da cidade2:\n");
    scanf("%s", cidade2);

    printf("Quantidade da população2 é:\n");
    scanf("%lu", &populacao2);  // Usando &populacao2

    printf("Digite a área2(em km2):\n");
    scanf("%f", &area2);

    printf("Digite o PIB2:\n");
    scanf("%f", &PIB2);

    printf("Quantidade de pontos turísticos2:\n");
    scanf("%d", &pontosTuristicos2);

    DensidadePopulacional2 = (populacao2 / area2);
    PIBperCapita2 = (PIB2 / populacao2);

    float quocienteDensidade2 = (float) area2 / populacao2;

    SuperPoder2 = populacao2 + area2 + PIB2 + pontosTuristicos2 + PIBperCapita2 + quocienteDensidade2;


    // Exibindo as informações
    printf("\nCarta 1!\n");

    printf("Estado:%c\n", estado);

    printf("Codigo:%s\n", codigo);

    printf("Cidade:%s\n", cidade);

    printf("População:%lu\n", populacao);

    printf("Área:%.2f\n", area);  // Usando %.2f para exibir com 2 casas decimais

    printf("PIB:%.2f\n", PIB);  // Usando %.2f para exibir com 2 casas decimais

    printf("Pontos Turísticos:%d\n", pontosTuristicos);

    printf("Densidade Populacional:%.2f\n", DensidadePopulacional);

    printf("PIB per Capita:%.2f\n", PIBperCapita);

    printf("Super Poder: %f\n", SuperPoder);


    //Exibindo as informações carta 2
    printf("\nCarta 2!\n");

    printf("Estado:%c\n", estado2);

    printf("Codigo:%s\n", codigo2);

    printf("Cidade:%s\n", cidade2);

    printf("População: %lu\n", populacao2);  // Usando populacao2 corretamente

    printf("Área: %.2f\n", area2);  // Usando %.2f para exibir com 2 casas decimais

    printf("PIB:%.2f\n", PIB2);  // Usando %.2f para exibir com 2 casas decimais

    printf("Pontos Turísticos:%d\n", pontosTuristicos2);

    printf("Densidade Populacional:%.2f\n", DensidadePopulacional2);

    printf("PIB per Capita:%.2f\n", PIBperCapita2);

    printf("O super poder da carta2 é: %f\n", SuperPoder2);


    printf("População 1 > População 2:  %d\n", populacao > populacao2);
    printf("Área 1 > Área 2: %d\n", area > area2);
    printf("PIB 1 > PIB 2: %d\n", PIB > PIB2);
    printf("Pontos turísticos 1 > Pontos turísticos 2: %d\n", pontosTuristicos > pontosTuristicos2);
    printf("Densidade Populacional 1 < Densidade Populacional 2: %d\n", DensidadePopulacional < DensidadePopulacional2);
    printf("PIB per Capita 1 > PIB per Capita 2: %d\n", PIBperCapita > PIBperCapita2);
    printf("Super Poder da Carta 1 > Super Poder da Carta 2: %d\n", SuperPoder > SuperPoder2);

    printf("Comparação das Cartas\n");

   if (populacao > populacao2) {
    printf("Carta 1 venceu!(tem a populacao maior)\n");
    } else {
    printf("Carta 2 venceu!(tem a populacao maior)\n");
   }

   if (area > area2) {
    printf("Carta 1 venceu!(tem a area maior)\n");
   } else {
    printf("Carta 2 venceu!(tem a area maior)\n");
   }

   if (PIB > PIB2) {
    printf("Carta 1 venceu!(Tem o PIB maior)\n");
   } else {
    printf("Carta 2 venceu!(Tem o PIB maior)\n");
   }

   if (pontosTuristicos > pontosTuristicos2) {
    printf("Carta 1 venceu!(tem mais pontos turisticos)\n");
   } else {
    printf("Carta 2 venceu!(tem mais pontos turisticos)\n");
   }

   if (DensidadePopulacional < DensidadePopulacional2) {
    printf("Carta 1 venceu!(tem a Densidade populacional menor)\n");
   } else {
    printf("Carta 2 venceu!(tem a Densidade populacional menor)\n");
   }

   if (PIBperCapita > PIBperCapita2) {
    printf("Carta 1 venceu!(tem o PIB per Capita maior)\n");
   } else {
    printf("Carta 2 venceu!(tem o PIB per Capita maior)\n");
   }

   if (SuperPoder > SuperPoder2) {
    printf("Carta 1 venceu!(tem o Super Poder maior)\n");
   } else {
    printf("Carta 2 venceu!(tem o Super Poder maior)\n");
   }

    return 0;

    }
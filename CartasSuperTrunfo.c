#include <stdio.h> 

int main() {
    // Super Trunfo

    char estado, estado2;

    char codigo[20], codigo2[20];

    char cidade[30], cidade2[30];

    int populacao, populacao2;

    float area, area2;

    float PIB, PIB2;

    int pontosTuristicos, pontosTuristicos2;

    float DensidadePopulacional, DensidadePopulacional2;

    float PIBperCapita, PIBperCapita2;

    // Carta 1
    printf("Digite a letra do estado(A-H): \n");
    scanf(" %c", &estado);  // Usando &estado para pegar o endereço

    printf("Codigo(letra do estado seguinte de um numero de 01a04):\n");
    scanf("%s", codigo);

    printf("Nome da cidade:\n");
    scanf("%s", cidade);

    printf("Quantidade da População:\n");
    scanf("%d", &populacao);

    printf("Digite a área(em km2):\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos);

    DensidadePopulacional = (populacao / area);
    PIBperCapita = (PIB / populacao);

    // Informações Carta 2
    printf("Digite a letra do estado2(A-H): \n");
    scanf(" %c", &estado2);  // Usando &estado2 para pegar o endereço

    printf("Codigo2(letra do estado seguinte de um numero de 01a04):\n");
    scanf("%s", codigo2);


    printf("Nome da cidade2:\n");
    scanf("%s", cidade2);

    printf("Quantidade da população2 é:\n");
    scanf("%d", &populacao2);  // Usando &populacao2

    printf("Digite a área2(em km2):\n");
    scanf("%f", &area2);

    printf("Digite o PIB2:\n");
    scanf("%f", &PIB2);

    printf("Quantidade de pontos turísticos2:\n");
    scanf("%d", &pontosTuristicos2);

    DensidadePopulacional2 = (populacao2 / area2);
    PIBperCapita2 = (PIB2 / populacao2);

    // Exibindo as informações
    printf("\nCarta 1!\n");

    printf("Estado:%c\n", estado);

    printf("Codigo:%s\n", codigo);

    printf("Cidade:%s\n", cidade);

    printf("População:%d\n", populacao);

    printf("Área:%.2f\n", area);  // Usando %.2f para exibir com 2 casas decimais

    printf("PIB:%.2f\n", PIB);  // Usando %.2f para exibir com 2 casas decimais

    printf("Pontos Turísticos:%d\n", pontosTuristicos);

    printf("Densidade Populacional:%.2f\n", DensidadePopulacional);

    printf("PIB per Capita:%.2f\n", PIBperCapita);


    printf("\nCarta 2!\n");

    printf("Estado:%c\n", estado2);

    printf("Codigo:%s\n", codigo2);

    printf("Cidade:%s\n", cidade2);

    printf("População: %d\n", populacao2);  // Usando populacao2 corretamente

    printf("Área: %.2f\n", area2);  // Usando %.2f para exibir com 2 casas decimais

    printf("PIB:%.2f\n", PIB2);  // Usando %.2f para exibir com 2 casas decimais

    printf("Pontos Turísticos:%d\n", pontosTuristicos2);

    printf("Densidade Populacional:%.2f\n", DensidadePopulacional2);

    printf("PIB per Capita:%.2f\n", PIBperCapita2);



    return 0;

    }
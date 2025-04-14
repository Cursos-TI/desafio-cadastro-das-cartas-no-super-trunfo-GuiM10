#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    
    int atributo, atributo2;
    
    float somaAtributos, somaAtributos2;
    
    float opcaoescolhida, opcaoescolhida2;

    float carta, carta2;
    

    //float PIBperCapita, PIBperCapita2;

    //float SuperPoder, SuperPoder2;
    
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
    //PIBperCapita = (PIB / populacao);

    //float quocienteDensidade = (float) area / populacao;

    //SuperPoder = (float) populacao + area + PIB + pontosTuristicos + PIBperCapita + quocienteDensidade;
    //printf("O super poder da carta1 é: %f\n", SuperPoder);

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
    //PIBperCapita2 = (PIB2 / populacao2);

    //float quocienteDensidade2 = (float) area2 / populacao2;

    //SuperPoder2 = populacao2 + area2 + PIB2 + pontosTuristicos2 + PIBperCapita2 + quocienteDensidade2;


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

    //printf("PIB per Capita:%.2f\n", PIBperCapita);

    //printf("Super Poder: %f\n", SuperPoder);


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

    //printf("PIB per Capita:%.2f\n", PIBperCapita2);

    //printf("O super poder da carta2 é: %f\n", SuperPoder2);
    
    printf("Escolha o primeiro atributo para comparar: \n");
    
    printf("Vence a carta que tiver o atributo maior na comparação, com excessão da Densidade populacional, onde quem tiver a menor, vence!\n");
    
     printf("O nome das duas cidades que estao sendo comparadas são: %s e %s\n", cidade, cidade2);
    
    //printf("%s\n", cidades0)
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Numero de pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &atributo);

    switch (atributo)
    {
    case 1:
    printf("Comparando o atributo população das cartas: \n");
    printf("A população da carta 1 é: %lu \n", populacao);
    printf("A população da carta 2 é: %lu \n", populacao2);

    if (populacao > populacao2)
    {
    printf("Carta 1 venceu, tem mais população!\n");

    } else if (populacao < populacao2)
    {
    printf("Carta 2 venceu, tem uma população maior!\n");

    } else {
    printf("As cartas empataram no atributo População!\n");
    }
    break;

    case 2:
    printf("Comparando o atributo área das cartas: \n");
    printf("A Area da carta 1 é: %.2f \n", area);
    printf("A Area da carta 2 é: %.2f \n", area2);

    if (area > area2)
    {
    printf("Carta 1 venceu, tem a área maior!\n");

    } else if (area < area2)
    {
    printf("Carta 2 venceu, tem a área maior!\n");

    } else {
    printf("As cartas empataram no atributo área!\n");
    }
    break;

    case 3:
    printf("Comparando o atributo PIB das cartas: \n");
    printf("O PIB da carta 1 é: %.2f \n", PIB);
    printf("O PIB da carta 2 é: %.2f \n", PIB2);

    if (PIB > PIB2)
    {
    printf("Carta 1 venceu, tem o PIB maior!\n");

    } else if (PIB < PIB2)
    {
    printf("Carta 2 venceu, tem o PIB maior!\n");

    } else {
    printf("As cartas empataram no atributo PIB!\n");
    }
    break;

    case 4:
    printf("Comparando o atributo de pontos turísticos: \n");
    printf("A quantidade de pontos turísticos da carta 1 é: %d \n", pontosTuristicos);
    printf("A quantidade de pontos turísticos da carta 2 é: %d \n", pontosTuristicos2);

    if (pontosTuristicos > pontosTuristicos2)
    {
    printf("Carta 1 venceu, tem mais pontos turisticos!\n");

    } else if (pontosTuristicos < pontosTuristicos2)
    {
    printf("Carta 2 venceu, tem mais pontos turisticos!\n");

    } else {
    printf("As cartas empataram na quantidade de pontos turísticos!\n");
    }
    break;

    case 5:
    printf("Comparando o atributo densidade populacional das cartas:\n");
    printf("A densidade populacional da carta 1 é: %.2f \n", DensidadePopulacional);
    printf("A densidade populacional da carta 2 é: %.2f \n", DensidadePopulacional2);

    if (DensidadePopulacional < DensidadePopulacional2)
    {
    printf("Carta 1 venceu, tem uma densidade populacional menor!\n");

    } else if (DensidadePopulacional2 < DensidadePopulacional)
    {
    printf("Carta 2 venceu, tem uma densidade populacional menor!\n");

    } else {
    printf("As cartas empataram na densidade populacional!\n");
    }
    break;
    
    default:
    printf("Essa opção é invalida");
    break;
    }
    
    if (opcaoescolhida != 1){
    printf("O primeiro atributo a ser comparado foi: %d\n", atributo);
    }

    if (opcaoescolhida != 1){
    printf("Não pode mais selecionar esse atributo: %d\n", atributo);
    }
    
    
    //printf("Essa opção não pode ser mais ser escolhida por que ja foi selecionada antes: %d\n", atributo);
    
    printf("Nome das duas cidades que estão sendo comparadas: %s e %s\n", cidade, cidade2);
    
    printf("1. População \n");
    
    printf("2. Área \n");
    
    printf("3. PIB \n");
    
    printf("4. Numero de pontos Turisticos\n");
    
    printf("5. Densidade Populacional\n");
    
    scanf("%d", &atributo2);
    
    
    switch (atributo2)
    {
    case 1:
    printf("Comparando o atributo população: \n");
    printf("A população da carta 1 é: %lu \n", populacao);
    printf("A população da carta 2 é: %lu \n", populacao2);
    
     if (populacao > populacao2)
    {
    printf("Carta 1 venceu, tem mais população!\n");

    } else if (populacao < populacao2)
    {
    printf("Carta 2 venceu, tem uma população maior!\n");

    } else {
    printf("As cartas empataram no atributo População!\n");
    }
    break;

    case 2:
    printf("Comparando o atributo área das cartas:\n");
    printf("A Area da carta 1 é: %.2f \n", area);
    printf("A Area da carta 2 é: %.2f \n", area2);

    if (area > area2)
    {
    printf("Carta 1 venceu, tem a área maior!\n");

    } else if (area < area2)
    {
    printf("Carta 2 venceu, tem a área maior!\n");

    } else {
    printf("As cartas empataram no atributo área!\n");
    }
    break;

    case 3:
    printf("Comparando o atributo PIB das cartas:\n");
    printf("O PIB da carta 1 é: %.2f \n", PIB);
    printf("O PIB da carta 2 é: %.2f \n", PIB2);

    if (PIB > PIB2)
    {
    printf("Carta 1 venceu, tem o PIB maior!\n");

    } else if (PIB < PIB2)
    {
    printf("Carta 2 venceu, tem o PIB maior!\n");

    } else {
    printf("As cartas empataram no atributo PIB!\n");
    }
    break;

    case 4:
    printf("Comparando o atributo de pontos turísticos:\n");
    printf("A quantidade de pontos turísticos da carta 1 é: %d \n", pontosTuristicos);
    printf("A quantidade de pontos turísticos da carta 2 é: %d \n", pontosTuristicos2);

    if (pontosTuristicos > pontosTuristicos2)
    {
    printf("Carta 1 venceu, tem mais pontos turisticos!\n");

    } else if (pontosTuristicos < pontosTuristicos2)
    {
    printf("Carta 2 venceu, tem mais pontos turisticos!\n");

    } else {
    printf("As cartas empataram na quantidade de pontos turísticos!\n");
    }
    break;

    case 5:
    printf("Comparando o atributo densidade populacional das cartas:\n");
    printf("A densidade populacional da carta 1 é: %.2f \n", DensidadePopulacional);
    printf("A densidade populacional da carta 2 é: %.2f \n", DensidadePopulacional2);

    if (DensidadePopulacional < DensidadePopulacional2)
    {
    printf("Carta 1 venceu, tem uma densidade populacional menor!\n");

    } else if (DensidadePopulacional2 < DensidadePopulacional)
    {
    printf("Carta 2 venceu, tem uma densidade populacional menor!\n");

    } else {
    printf("As cartas empataram na densidade populacional!\n");
    }
    break;
    
    default:
    printf("Essa opção é invalida");
    break;
    }
    
    if(opcaoescolhida2 != 2){
    printf("Segundo atributo escolhido para ser comparado foi: %d\n", atributo2);
    }

    if(opcaoescolhida2 != 2){
    printf("A segunda comparação foi do atributo: %d\n", atributo2);
    }
    
    

}
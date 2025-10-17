#include <stdio.h>

int main(){

//variáveis para cadastro das cartas_1

    char estado1;
    char codigo_carta1[4];
    char nome_cidade1[20];
    int populacao1;
    float area1; 
    float pib1;
    int pontos_turisticos1;
    float densidade_pop1;
    float pib_percapita1;
    float superpw1;

//variáveis para cadastro das cartas_2

    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[20];
    int populacao2;
    float area2; 
    float pib2;
    int pontos_turisticos2;
    float densidade_pop2;
    float pib_percapita2;
    float superpw2;


//Cadastro da carta_1
    
    printf("!! Registro de Cartas !! \n");
    printf("Digite os dados da carta - 1 \n");

    printf("Estado (letra de A a H): \n");
    scanf("%s", &estado1);

    printf("Código da carta (ex: A01 ou B02): \n");
    scanf("%s", &codigo_carta1);

    printf("Nome da Cidade: \n");
    scanf("%s", &nome_cidade1);

    printf("População: \n");
    scanf("%lu", &populacao1);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    printf("Área (em km²): \n");
    scanf("%f", &area1);

    printf("PIB (em bilhões de Reais): \n");
    scanf("%f", &pib1);

//Calculo para carta 1

    densidade_pop1 = (float)populacao1 / area1;
    pib_percapita1 = pib1 / (float)populacao1;


//Cadastro da carta_2
    
    
    printf("Digite os dados da carta - 2 \n");

    printf("Estado (letra de A a H): \n");
    scanf("%s", &estado2);

    printf("Código da carta (ex: A01 ou B02): \n");
    scanf("%s", &codigo_carta2);

    printf("Nome da Cidade: \n");
    scanf("%s", &nome_cidade2);

    printf("População: \n");
    scanf("%lu", &populacao2);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Área (em km²): \n");
    scanf("%f", &area2);

    printf("PIB (em bilhões de Reais): \n");
    scanf("%f", &pib2);

    densidade_pop2 = (float)populacao2 / area2;
    pib_percapita2 = pib2 / (float)populacao2;

//Calculo do Super poder (soma dos valores numericos)
    superpw1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_percapita1 + (1.0f / densidade_pop1);
    superpw2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_percapita2 + (1.0f / densidade_pop2);

//Retornar ao usuário o cadastro que ele fez da carta_1

    printf("Dados da Carta 1 \n");

    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo_carta1);
    printf("Cidade: %s \n", nome_cidade1);
    printf("População: %d \n", populacao1);
    printf("Pontos turísticos: %d \n", pontos_turisticos1);
    printf("Área em km²: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Densidade Populacional: %.2f \n", densidade_pop1);
    printf("PIB per Capita: %.2f \n", pib_percapita1);
    printf("Super Poder: %.2f\n", superpw1);

//Retornar ao usuário o cadastro que ele fez da carta_2

    printf("Dados da Carta 2 \n");

    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("Cidade: %s \n", nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Pontos turísticos: %d \n", pontos_turisticos2);
    printf("Área em km²: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Densidade Populacional: %.2f \n", densidade_pop2);
    printf("PIB per Capita: %.2f \n", pib_percapita2);
    printf("Super Poder: %2.f \n", superpw2);

//Comparação das cartas
    printf("Comparacao de cartas\n");
    printf("Se o resultado for 1 a carta 1 vence, se for 0 a carta 2 que vence.\n");

    
// Calculo para validar o vencedor
    int popv = (populacao1 > populacao2); //maior vence
    printf("Populacao: Carta vencedora (%d)\n", popv);

    int areav = (area1 > area2); //maior vence
    printf("Area: Carta vencedora (%d)\n", areav);

    int pibv = (pib1 > pib2); //maior vence
    printf("PIB: Carta vencedora (%d)\n", pibv);

    int ptv = (pontos_turisticos1 > pontos_turisticos2); //maior vence
    printf("Pontos turisticos: Carta vencedora (%d)\n", ptv);

    int densiv = (densidade_pop1 < densidade_pop2); //menor vence
    printf("Densidade populacional: Carta vencedora (%d)\n", densiv);

    int pibpv = (pib_percapita1 > pib_percapita2); //maior vence
    printf("PIB per capita: Carta vencedora (%d)\n", pibpv);

    int supwv = (superpw1 > superpw2); //maior vence
    printf("Super poder: Carta vencedora (%d)\n", supwv);


    return 0;

}

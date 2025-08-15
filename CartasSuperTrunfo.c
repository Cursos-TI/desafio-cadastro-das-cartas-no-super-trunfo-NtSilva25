#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int qnt_pontos_turisticos; 
    int qnt_pontos_turisticos1;
    unsigned long int populacao; 
    unsigned long int populacao1;

    int comparacao_populacao;
    int comparacao_area;
    int comparacao_pib;
    int comparacao_pontos_turisticos;
    int comparacao_densidade_populacional;
    int comparacao_pib_per_capta;
    int comparacao_super_poder;

    int comparacao_populacao1;
    int comparacao_area1;
    int comparacao_pib1;
    int comparacao_pontos_turisticos1;
    int comparacao_densidade_populacional1;
    int comparacao_pib_per_capta1;
    int comparacao_super_poder1;

    float pib; 
    float pib1;
    float area; 
    float area1;
    float pib_percapita;
    float pib_percapita1;
    float dense_populacional;
    float dense_populacional1;
    float inverso_dense_populacional;
    float inverso_dense_populacional1;
    float super_poder;
    float super_poder1;

    char cidade[40]; 
    char cidade1[40]; 
    char estado[3]; 
    char estado_1[3]; 
    char cod_carta[4]; 
    char cod_carta1[4]; 

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite os Dados Necessarios para a Criação da Primeira Carta\n");

    printf("Digite o Estado Escolhido: ");
    scanf("%s", estado);
   
    printf("Digite a Cidade Escolhida: ");
    scanf("%s", cidade);
    
    printf("Digite o Código da Carta (Letra incial da cidade seguida de um numero de 01 a 04): ");
    scanf("%s", cod_carta);

    printf("Digte a População da cidade escolhida: ");
    scanf("%lu", &populacao);

    printf("Digite a Quatidade de Pontos Turísticos a cidade escolhida Possui: ");
    scanf("%d", &qnt_pontos_turisticos);

    printf("Digite o PIB da cidade escolhida: ");
    scanf("%f", &pib);

    printf("Digite a Área (Km²) da cidade escolhida: ");
    scanf("%f", &area);

    pib_percapita = (float) (pib * 1000000000.0f) / populacao; //calculo para obter o pib per capita
    dense_populacional = (float) populacao / area;

    inverso_dense_populacional = (float) area / populacao; //Calculo para obter o inverso da densidade populacional, junto do casting para garantir o formato da variavel
    super_poder = (float) pib + area + pib_percapita + inverso_dense_populacional + qnt_pontos_turisticos + populacao; // Calculo para obter o super poder da carta


    printf("\n");

    /*Solicitação para preenchimento dos dados da segunda carta*/

    printf("Agora digite os dados Para criação da segunda carta \n");

    printf("Digite o Estado Escolhido: ");
    scanf("%s", estado_1);
    
    printf("Digite a Cidade Escolhida: ");
    scanf("%s", cidade1);
    
    printf("Digite o Código da Carta (Letra incial da cidade seguida de um numero de 01 a 04): ");
    scanf("%s", cod_carta1);

    printf("Digte a População da cidade escolhida: ");
    scanf("%lu", &populacao1);

    printf("Digite a Quatidade de Pontos Turísticos a cidade escolhida Possui: ");
    scanf("%d", &qnt_pontos_turisticos1);

    printf("Digite o PIB da cidade escolhida: ");
    scanf("%f", &pib1);

    printf("Digite a Área (Km²) da cidade escolhida: ");
    scanf("%f", &area1);

    //Calculos para obter os valores do PIB per capta, super poder, densidade populacional e seu inverso
    pib_percapita1 = (float) (pib1 * 1000000000.0f) / populacao1; 
    dense_populacional1 = (float) populacao1 / area1;
    inverso_dense_populacional1 = (float) area1 / populacao1;
    super_poder1 = (float) pib1 + area1 + pib_percapita1 + inverso_dense_populacional1 + qnt_pontos_turisticos1 + populacao1;

    //Compaação dos valores para determinar a Carta vencedora

    comparacao_populacao = populacao > populacao1;
    comparacao_densidade_populacional = inverso_dense_populacional > inverso_dense_populacional1;
    comparacao_area = area > area1;
    comparacao_pib = pib > pib1;
    comparacao_pib_per_capta = pib_percapita > pib_percapita1;
    comparacao_pontos_turisticos = qnt_pontos_turisticos > qnt_pontos_turisticos1;
    comparacao_super_poder = super_poder > super_poder1;

    comparacao_populacao1 = populacao1 > populacao;
    comparacao_densidade_populacional1 = inverso_dense_populacional1 > inverso_dense_populacional;
    comparacao_area1 = area1 > area;
    comparacao_pib1 = pib1 > pib;
    comparacao_pib_per_capta1 = pib_percapita1 > pib_percapita;
    comparacao_pontos_turisticos1 = qnt_pontos_turisticos1 > qnt_pontos_turisticos;
    comparacao_super_poder1 = super_poder1 > super_poder;


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    /*Impressão dos dados da primeira carta*/

    printf("carta 01: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", cod_carta);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %lu \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d \n", qnt_pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km² \n", dense_populacional);
    printf("PIB per Capta: %.2f reais \n", pib_percapita);
    printf("Super Poder: %.2f \n", super_poder);
    //printf("Inverso densidade Populacional: %.2f\n", inverso_dense_populacional);

    printf("\n"); /*pular uma linha entre a apresentação dos dados da cat 01 e 02*/

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    /*Impressão dos dados da segunda carta*/

    printf("carta 02: \n");
    printf("Estado: %s \n", estado_1);
    printf("Código: %s \n", cod_carta1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", qnt_pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km² \n", dense_populacional1);
    printf("PIB per Capta: %.2f reais \n", pib_percapita1);
    printf("Super Poder: %.2f \n", super_poder1);
    //printf("Inverso densidade populacinonal: %.2f\n", inverso_dense_populacional1);


    printf("\n");

    printf("Comparação das Cartas:\n");
    printf("População: Carta 01 (%d), carta 02 (%d) \n", comparacao_populacao, comparacao_populacao1);
    printf("Área: Carta 01 (%d), Carta 02 (%d) \n", comparacao_area, comparacao_area1);
    printf("PIB:Carta 01 (%d), carta 02 (%d) \n", comparacao_pib, comparacao_pib1);
    printf("Pontos Turísticos: Carta 01 (%d), Carta 02 (%d) \n", comparacao_pontos_turisticos, comparacao_pontos_turisticos1);
    printf("Densidade Populacional: Carta 01 (%d), Carta 02 (%d) \n", comparacao_densidade_populacional, comparacao_densidade_populacional1);
    printf("PIB per Capita: Carta 01 (%d), Carta 02 (%d) \n", comparacao_pib_per_capta, comparacao_pib_per_capta1);
    printf("Super Poder: Carta 01 (%d), Carta 02 (%d) \n", comparacao_super_poder, comparacao_super_poder1);   


    return 0;
}

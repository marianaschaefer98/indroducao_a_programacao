#include <stdio.h>

int main(){
   
    // Declaração de variáveis para a Carta 1:

    char estado1; // [char] para armazenar a letra do estado
    char codigo1[4]; // [4] para armazenar o código da carta. Ex: A01 (3 caracteres + 1 para o terminador de string '\0')
    char nome_cidade1[50]; // [50] para determinar um tamanho máximo de caracteres
    int populacao1; // [int] para armazenar a população
    float area1; // [float] para armazenar a área em km²
    float pib1; // [float] para armazenar o PIB em bilhões de reais
    int pontos_turisticos1; // [int] para armazenar o número de pontos turísticos

    // Declaração de variáveis para a Carta 2:
    
    char estado2;
    char codigo2[4];
    char nome_cidade2[50]; 
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("\n ****Cadastro de Carta 1**** \n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (a letra do estado seguida de um número de 01-04): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n **** Cadastro de Carta 2 **** \n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (a letra do estado seguida de um número de 01-04): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Dados da Carta 1:
    printf("\n **** Carta 1 **** \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nome_cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %.2f km² \n", area1); // %.2f para exibir 2 casas decimais
    printf("PIB: %.2f bilhoes de reais \n", pib1);
    printf("Numero de Pontos Turisticos: %d \n", pontos_turisticos1);

    // Dados da Carta 2:
    printf("\n **** Carta 2 **** \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f km² \n", area2);
    printf("PIB: %.2f bilhoes de reais \n", pib2);
    printf("Numero de Pontos Turisticos: %d \n", pontos_turisticos2);

    return 0; // Fim do programa
}
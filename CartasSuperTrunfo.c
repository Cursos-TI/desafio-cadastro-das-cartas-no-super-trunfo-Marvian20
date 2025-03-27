#include <stdio.h>

int main() {

    // Variáveis
    char estado1, estado2;
    char carta1[5], carta2[5];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pt1, pt2;

    // Cadastro de dados carta 1

    printf("Desafio Super Trunfo Novato \n");

    printf("Dados da Carta 1 \n");

    printf("Digite uma letra de A a H para representar um dos oito estados: \n");
    scanf(" %c", &estado1); 

    printf("Insira o código da carta usando a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", carta1);

    printf("Coloque o nome da cidade: \n");
    scanf("%s", nome1);

    printf("Insira o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Coloque a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade (PIB): \n");
    scanf("%f", &pib1);

    printf("Insira o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pt1);

    printf("\n");

    // Cadastro de dados carta 2

    printf("Dados da Carta 2 \n");

    printf("\n");

    printf("Digite uma letra de A a H para representar um dos oito estados: \n");
    scanf(" %c", &estado2);

    printf("Defina o código da carta usando a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", carta2);

    printf("Coloque o nome da cidade (somente o primeiro nome): \n");
    scanf("%s", nome2);

    printf("Insira o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Defina a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade (PIB): \n");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &pt2);

    printf("\n");
    //Visualização da Carta 1
    
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", carta1);
    printf("Nome da cidade: %s\n", nome1); 
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pt1);

    printf("\n");
    //Visualização da Carta 2
    
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Nome da cidade: %s\n", nome2); 
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pt2);

    return 0;
}

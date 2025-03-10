#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado1;
    char carta1[4];
    char nome1[50];
    int populacao1[50];
    float area1;
    float PIB1; 
    int pontosturisticos1;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Desafio Super Trunfo Novato\n");
    
    printf("\n");

    printf("Digite uma letra de A a H para representar um dos oito estados: \n");
    scanf("%c",&estado1);

    printf("Insira o código da carta usando a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s",&carta1);

    printf("Coloque o nome da cidade: \n");
    scanf("%s",&nome1);

    printf("Insira o número de habitantes da cidade: \n");
    scanf("%d",&populacao1);

    printf("Coloque a área da cidade em quilômetros quadrados:  \n");
    scanf("%f",&area1);

    printf("Digite o Produto Interno Bruto da cidade (PIB): \n");
    scanf("%f",&PIB1);

    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d",&pontosturisticos1);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", carta1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %f\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.3f\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);

    char estado2;
    char carta2[4];
    char nome2[50];
    int populacao2[50];
    float area2;
    float PIB2; 
    int pontosturisticos2;



    printf("\n");

    printf("Carta 2 \n");

    printf("Digite uma letra de A a H para representar um dos oito estados:\n");
    scanf("%c",&estado2);

    printf("Insira o código da carta usando a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s",&carta2);

    printf("Coloque o nome da cidade: \n");
    scanf("%s",&nome2);

    printf("Insira o número de habitantes da cidade: \n");
    scanf("%d",&populacao2);

    printf("Coloque a área da cidade em quilômetros quadrados:  \n");
    scanf("%f",&area2);

    printf("Digite o Produto Interno Bruto da cidade (PIB): \n");
    scanf("%f",&PIB2);

    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d",&pontosturisticos2);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %f\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}
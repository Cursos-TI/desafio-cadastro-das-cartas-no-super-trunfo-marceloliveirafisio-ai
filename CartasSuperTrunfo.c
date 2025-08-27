#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char nomedoestado[100], codigodacarta[50], nomedacidade[100];
    int populacao, pontosturisticos;
    float pib, areakm;

     char nomedoestado2[100], codigodacarta2[50], nomedacidade2[100];
    int populacao2, areakm2;
    float pib2, pontosturisticos2;
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //carat1
    printf("escreva o codigo da sua carta: \n");
    scanf("%s", &codigodacarta);

    printf("escreva a letra inicial do seu estado: \n");
    scanf("%s", &nomedoestado);

    printf("escreva o nome da sua cidade: \n");
    scanf("%s", &nomedacidade);

    printf("escreva a população: \n");
    scanf("%d", &populacao);

    printf("escreva a area em km²: \n");
    scanf("%f", &areakm);

    printf("escreva o PIB da cidade da sua carta: \n");
    scanf("%f", pib);

    printf("escreva o  numero de pontos turisticos: \n");
    scanf("%d", pontosturisticos);



    //carta2
printf("escreva o codigo da sua carta: \n");
    scanf("%s", &codigodacarta2);

    printf("escreva a letra inicial do seu estado: \n");
    scanf("%s", &nomedoestado2);

    printf("escreva o nome da sua cidade: \n");
    scanf("%s", &nomedacidade2);

    printf("escreva a população: \n");
    scanf("%d", &populacao2);

    printf("escreva a area em km²: \n");
    scanf("%f", &areakm2);

    printf("escreva o PIB da cidade da sua carta: \n");
    scanf("%f", pib2);

    printf("escreva o  numero de pontos turisticos: \n");
    scanf("%d", pontosturisticos2);
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

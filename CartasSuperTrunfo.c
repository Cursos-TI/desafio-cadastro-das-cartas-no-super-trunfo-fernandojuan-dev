
// DESAFIO JUAN fERNANDO

#include <stdio.h>
 
int main() {

    char estado;
    char codigo[50];
    char nome[50];
    int populacao;
    float areakm2;
    float pib;
    int pontosTurismo;

    // processo para cara 01

    // aqui eu obtenho os dados da carta
    printf("Digite a letra do Estado:");
    scanf(" %c", &estado);

    printf("Digite o código da Carta:");
    scanf("%s", codigo);

    printf("Digite o nome da Cidade:");
    scanf("%s", nome);

    printf("Digite a População:");
    scanf("%d", &populacao);

    printf("Digite a Área (em km²):");
    scanf("%f", &areakm2);

    printf("Digite o PIB:");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos:");
    scanf("%d", &pontosTurismo);

    // aqui eu imprimo os dados da carta
    printf("Carte: 01 \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", areakm2);
    printf("PIB: %f \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontosTurismo);

    // processo para cara 02

    // aqui eu obtenho os dados da carta
    printf("Digite a letra do Estado:");
    scanf(" %c", &estado);

    printf("Digite o código da Carta:");
    scanf("%s", codigo);

    printf("Digite o nome da Cidade:");
    scanf("%s", nome);

    printf("Digite a População:");
    scanf("%d", &populacao);

    printf("Digite a Área (em km²):");
    scanf("%f", &areakm2);

    printf("Digite o PIB:");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos:");
    scanf("%d", &pontosTurismo);

    // aqui eu imprimo os dados da carta
    printf("Carte: 02 \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", areakm2);
    printf("PIB: %f \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontosTurismo);

}
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    //RESOLUÇÃO DO DESAFIO

    //Variáveis de Armazenamento da primeira Carta e segunda carta.
    char _1letra, _2letra;
    int CodCity, CodCity2;
    char Nome[20], Nome2[20];
    int Populacao, Populacao2;
    float Area, Area2;
    double PIB, PIB2;
    int p_turisticos, p_turisticos2;
    double densidade1, densidade2 ;
    double PibPerCap1, PibPerCap2;

    //Impressão e Solicitação de dados para a primeira carta e segunda carta.
    printf("Insira as informaçõs da primeira carta.\nCarta 1\nEstado (1ª Letra): ");
    scanf("%c", &_1letra);
    printf("insira o código da carta(int): ");
    scanf("%d", &CodCity);
    printf("Insira o nome da Cidade: ");
    scanf("%19s", Nome);
    printf("Insira a quantidade populacional da cidade (int): ");
    scanf("%d", &Populacao);
    printf("Insira a area total da cidade (float): ");
    scanf("%f", &Area);
    printf("Insira o PIB (float): ");
    scanf("%lf", &PIB);
    densidade1 = Populacao / Area;
    PibPerCap1 = PIB / Populacao;
    printf("Quantidade de pontos turísticos(int): ");
    scanf("%d", &p_turisticos);
    printf("\nCarta Registrada!\n");

    printf("\nPróxima carta...");

    //Segunda Carta
    printf("\nCarta 2\nEstado (1ª Letra): ");
    scanf(" %c", &_2letra);
    printf("Insira o código dela (int): ");
    scanf("%19d", &CodCity2);
    printf("Insira o nome da Cidade: ");
    scanf("%s", Nome2);
    printf("Insira a quantidade populacional da cidade (int): ");
    scanf("%d", &Populacao2);
    printf("Insira a area total da cidade (float): ");
    scanf("%f", &Area2);
    printf("Insira o PIB (float): ");
    scanf("%lf", &PIB2);
    printf("Quantidade de pontos turísticos (int): ");
    scanf("%d", &p_turisticos2);
    densidade2 = Populacao2 / Area2;
    PibPerCap2 = PIB2 / Populacao2;
    printf("\nCarta Registrada!\n");


    //Gera Linhas para mostrar o resultado mais organizado na tela
    printf("\nGerando resultado... \n");
    //Pré-Resultado
    printf("\nAqui está! \n ------------ \n");

    // Visualização das Cartas.
    printf("\nPrimeira Carta \n \nEstado: %c\nCódigo: %c%02d\nNome da Cidade: %s\nPopulação: %i\nArea: %.2f km²\nDensidade Populacional: %.2f hab/km²\nPIB: %.2f\nPIB per Capita: %.2lf reais\nNúmero de Pontos Turísticos: %i\n \n ------ Versus ------ \n", _1letra,_1letra,CodCity,Nome,Populacao,Area,densidade1,PIB,PibPerCap1,p_turisticos);
    printf("\nSegunda Carta \n \nEstado: %c\nCódigo: %c%02d\nNome da Cidade: %s\nPopulação: %i\nArea: %.2f km²\nDensidade Populacional: %.2f hab/km²\nPIB: %.2f\nPIB per Capita: %.2lf reais\nNúmero de Pontos Turísticos: %i\n \n", _2letra,_2letra,CodCity2,Nome2,Populacao2,Area2,densidade2,PIB2,PibPerCap2,p_turisticos2);
    return 0;
}

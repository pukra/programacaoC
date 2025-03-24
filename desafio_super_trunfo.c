#include <stdio.h>  // Para usar printf e scanf
#include <stdlib.h> // Para usar fgets

int main() {
    
    // Declarando Variáveis da 1ª carta:
    char nome_estado[50], nome_cidade[50], codigo_carta[50];
    int quantidade_populacional, numero_pontos_turisticos;
    double area_km, produto_ib;

    // Declarando Variáveis da 2ª carta:
    char nome_estado2[50], nome_cidade2[50], codigo_carta2[50];
    int quantidade_populacional2, numero_pontos_turisticos2;
    double area_km2, produto_ib2;

    printf("Vamos cadastrar a primeira carta do Super Trunfo:\n");

    // Coletando dados da primeira carta:
    printf("Qual o estado?\n");
    fgets(nome_estado, sizeof(nome_estado), stdin);

    printf("Qual o codigo da carta?\n");
    fgets(codigo_carta, sizeof(codigo_carta), stdin);

    printf("Qual o nome da cidade?\n");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);

    printf("Qual a quantidade populacional?\n");
    scanf("%d", &quantidade_populacional);
    getchar();  // Limpar o buffer do stdin

    printf("Qual a area em Km?\n");
    scanf("%lf", &area_km);
    getchar();

    printf("Qual o PIB (Produto Interno Bruto)?\n");
    scanf("%lf", &produto_ib);
    getchar();

    printf("Numero de pontos turisticos?\n");
    scanf("%d", &numero_pontos_turisticos);
    getchar();

    printf("Vamos cadastrar a segunda carta do Super Trunfo:\n");

    // Coletando dados da segunda carta:
    printf("Qual o estado?\n");
    fgets(nome_estado2, sizeof(nome_estado2), stdin);

    printf("Qual o codigo da carta?\n");
    fgets(codigo_carta2, sizeof(codigo_carta2), stdin);

    printf("Qual o nome da cidade?\n");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);

    printf("Qual a quantidade populacional?\n");
    scanf("%d", &quantidade_populacional2);
    getchar();

    printf("Qual a area em Km?\n");
    scanf("%lf", &area_km2);
    getchar();

    printf("Qual o PIB (Produto Interno Bruto)?\n");
    scanf("%lf", &produto_ib2);
    getchar();

    printf("Numero de pontos turisticos?\n");
    scanf("%d", &numero_pontos_turisticos2);
    getchar();

    printf("-------------------------------------------------------------------\n");
    // Exibir os dados cadastrados:
    printf("PRIMEIRA CARTA");
    printf("\nDados da carta cadastrada:\n");
    printf("Estado: %s", nome_estado);
    printf("Codigo da Carta: %s", codigo_carta);
    printf("Cidade: %s", nome_cidade);
    printf("Populacao: %d\n", quantidade_populacional);
    printf("Area: %.2lf Km²\n", area_km);
    printf("PIB: %.2lf\n", produto_ib);
    printf("Pontos Turisticos: %d\n", numero_pontos_turisticos);
    printf("-------------------------------------------------------------------\n");

    // Exibir os dados cadastrados:
    printf("SEGUNDA CARTA");
    printf("\nDados da carta cadastrada:\n");
    printf("Estado: %s", nome_estado2);
    printf("Codigo da Carta: %s", codigo_carta2);
    printf("Cidade: %s", nome_cidade2);
    printf("Populacao: %d\n", quantidade_populacional2);
    printf("Area: %.2lf Km²\n", area_km2);
    printf("PIB: %.2lf\n", produto_ib2);
    printf("Pontos Turisticos: %d\n", numero_pontos_turisticos2);

    return 0;
}

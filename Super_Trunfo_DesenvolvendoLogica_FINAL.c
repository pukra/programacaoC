#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome_estado[50], nome_cidade[50], codigo_carta[50];
    int quantidade_populacional, numero_pontos_turisticos;
    double area_km, produto_ib;

    char nome_estado2[50], nome_cidade2[50], codigo_carta2[50];
    int quantidade_populacional2, numero_pontos_turisticos2;
    double area_km2, produto_ib2;

    printf("Vamos cadastrar a primeira carta do Super Trunfo:\n");
    printf("Qual o estado?\n");
    fgets(nome_estado, sizeof(nome_estado), stdin);

    printf("Qual o codigo da carta?\n");
    fgets(codigo_carta, sizeof(codigo_carta), stdin);

    printf("Qual o nome da cidade?\n");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);

    printf("Qual a quantidade populacional?\n");
    scanf("%d", &quantidade_populacional);
    getchar();

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

    char escolha_tipo_comparacao;
    printf("VAMOS JOGAR!!!\n");
    printf("Voce quer comparar uma ou duas caracteristicas?\n");
    printf("Digite (A) para comparar apenas uma caracteristica\n");
    printf("Ou (B) para comparar duas caracteristicas\n");
    scanf(" %c", &escolha_tipo_comparacao);

    switch (escolha_tipo_comparacao) {
        case 'A':
        case 'a': {
            int escolha_unica;
            printf("Escolha a caracteristica para comparar:\n");
            printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Densidade populacional\n5 - PIB per capita\n");
            scanf("%d", &escolha_unica);

            switch (escolha_unica) {
                case 1:
                    printf("Opcao escolhida: Populacao\n");
                    printf("%s tem maior populacao\n", quantidade_populacional > quantidade_populacional2 ? "Carta 1" : "Carta 2");
                    break;
                case 2:
                    printf("Opcao escolhida: Area\n");
                    printf("%s tem maior area\n", area_km > area_km2 ? "Carta 1" : "Carta 2");
                    break;
                case 3:
                    printf("Opcao escolhida: PIB\n");
                    printf("%s tem maior PIB\n", produto_ib > produto_ib2 ? "Carta 1" : "Carta 2");
                    break;
                case 4: {
                    double densidade1 = quantidade_populacional / area_km;
                    double densidade2 = quantidade_populacional2 / area_km2;
                    printf("Opcao escolhida: Densidade populacional\n");
                    printf("%s tem maior densidade\n", densidade1 > densidade2 ? "Carta 1" : "Carta 2");
                    break;
                }
                case 5: {
                    double pib_capita1 = produto_ib / quantidade_populacional;
                    double pib_capita2 = produto_ib2 / quantidade_populacional2;
                    printf("Opcao escolhida: PIB per capita\n");
                    printf("%s tem maior PIB per capita\n", pib_capita1 > pib_capita2 ? "Carta 1" : "Carta 2");
                    break;
                }
                default:
                    printf("Opcao invalida!\n");
            }
            break;
        }
        case 'B':
        case 'b': {
            int escolha_multipla;
            printf("Escolha a comparacao dupla:\n");
            printf("1 - Populacao e Area\n2 - PIB e Densidade Populacional\n");
            scanf("%d", &escolha_multipla);

            switch (escolha_multipla) {
                case 1:
                    if (quantidade_populacional > quantidade_populacional2 && area_km > area_km2)
                        printf("Carta 1 venceu!\n");
                    else
                        printf("Carta 2 venceu!\n");
                    break;
                case 2: {
                    double densidade1 = quantidade_populacional / area_km;
                    double densidade2 = quantidade_populacional2 / area_km2;
                    if (produto_ib > produto_ib2 && densidade1 > densidade2)
                        printf("Carta 1 venceu!\n");
                    else
                        printf("Carta 2 venceu!\n");
                    break;
                }
                default:
                    printf("Opcao invalida!\n");
            }
            break;
        }
        default:
            printf("Opcao invalida!\n");
    }
    return 0;
}

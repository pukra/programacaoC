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

    printf(" \n ***************************************************************** \n");

    //Começando o jogo...
    // Painel  de escolha:
    printf("Vamos jogar, escolha qual vai ser a caracteristica a ser comparada !!!\n");
    printf("Digite o número que aseguir para fazer a comparação correspondente: \n");
    printf( "1 _ População \n");
    printf( "2 _ Area \n");
    printf( "3 _ PIB \n");
    printf( "4 _ Densidade populacional \n");
    printf( "5 _ PIB per capita \n");

    //declarando a variavel do painel de escolha:
    int escolha;
   scanf("%d",&escolha);//coletando opção do usuario...
    
   //condicional da população
   if (escolha==1){
        printf("\n Opcao escolhida: POPULACAO \n");
     
     if (quantidade_populacional>quantidade_populacional2){
        printf("A maior populacao e da carta 1:\n ");
        printf("Estado: %s", nome_estado);
        printf("Codigo Carta: %s", codigo_carta);
        printf("Cidade: %s", nome_cidade);
        printf("Populacao: %d\n", quantidade_populacional);
        }
        else{
            printf("A maior populacao e da carta 2: \n");
            printf("Estado: %s", nome_estado2);
            printf("Codigo Carata : %s", codigo_carta2);
            printf("Cidade: %s", nome_cidade2);
            printf("Populacao: %d\n", quantidade_populacional2);
        }      
    }

    //condicional da Area
    if (escolha==2){
        printf("\n Opcao escolhida: AREA \n");

     if (area_km>area_km2){
        printf("A maior area e da carta 1:\n ");
        printf("Estado: %s", nome_estado);
        printf("Codigo Carta: %s", codigo_carta);
        printf("Cidade: %s", nome_cidade);
        printf("Area: %.2lf Km²\n", area_km);
     }
     else{
        printf("A maior area e da carta 2:\n ");
        printf("Estado: %s", nome_estado2);
        printf("Codigo Carta: %s", codigo_carta2);
        printf("Cidade: %s", nome_cidade2);
        printf("Area: %.2lf Km²\n", area_km2);
     }        
    }
    
  //condicional  do PIB
    if (escolha==3){
        printf("\n Opcao escolhida: PIB \n");

     if (produto_ib>produto_ib2){
        printf("O maior PIB e da carta 1:\n ");
        printf("Estado: %s", nome_estado);
        printf("Codigo Carta: %s", codigo_carta);
        printf("Cidade: %s", nome_cidade);
        printf("PIB: %.2lf\n", produto_ib);
     }
     else{
        printf("O maior PIB e da carta 2:\n ");
        printf("Estado: %s", nome_estado2);
        printf("Codigo Carta: %s", codigo_carta2);
        printf("Cidade: %s", nome_cidade2);
        printf("PIB: %.2lf\n", produto_ib2);
     } 
    }


    //Condicional da Densidade populacional
   if (escolha==4){
    printf("\n Opcao escolhida: Densidade populacional \n");
    //variaveis para calculo da densidade 
    int calculo_densidade_populacional1 = quantidade_populacional/area_km;
    int calculo_densidade_populacional2 = quantidade_populacional2/area_km2;

    if (calculo_densidade_populacional1>calculo_densidade_populacional2){
        printf("A maior densidade populacional e da carta 1:\n ");
        printf("Estado: %s", nome_estado);
        printf("Codigo Carta: %s", codigo_carta);
        printf("Cidade: %s", nome_cidade);
        printf("Densidade: %d", calculo_densidade_populacional1);
    }
    else{
        printf("A maior densidade populacional e da carta 2:\n ");
        printf("Estado: %s", nome_estado2);
        printf("Codigo Carta: %s", codigo_carta2);
        printf("Cidade: %s", nome_cidade2);
        printf("Densidade: %d", calculo_densidade_populacional2);
    }   
   }
   
 //Condicional 5 PIB per capita
  if (escolha==5){
    printf("\n Opcao escolhida: PIB per capita \n");
    //variaveis para calculo do PIB per capita
    int calculo_PIB1 =produto_ib/quantidade_populacional;
    int calculo_PIB2 =produto_ib2/quantidade_populacional2;

    if (calculo_PIB1>calculo_PIB2){
        printf("O maior PIB per capita e da carta 1:\n ");
        printf("Estado: %s", nome_estado);
        printf("Codigo Carta: %s", codigo_carta);
        printf("Cidade: %s", nome_cidade);
        printf("PIB per capta: %d",calculo_PIB1); 
    }
    else{
        printf("O maior PIB per capita e da carta 2:\n ");
        printf("Estado: %s", nome_estado2);
        printf("Codigo Carta: %s", codigo_carta2);
        printf("Cidade: %s", nome_cidade2);
        printf("PIB per capta: %d",calculo_PIB2); 
    }
  }

    return 0;
}

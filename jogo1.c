#include <stdio.h>
#include <stdlib.h>

int main() {
    char nomeEstado [20], nomeEstado2 [20]; //Nome do estado.
    char estado, estado2;//Letra representando um dos estados.
    char codigoCarta [4], codigoCarta2 [4]; //Código da carta.
    char cidade [15], cidade2 [15]; //Nome da cidade.
    unsigned long int populacao, populacao2; //Número de habitantes da cidade.
    float area, area2; //Quilômetros quadrados da cidade.
    float pib, pib2; //Produto interno e bruto da cidade.
    int pontos, pontos2; //Quantidade de ponto turistico.
    float densiPopulacao1, densiPopulacao2; //Densidade Populacional = População / área da cidade.
    float pibcapita1, pibcapita2; //PIB per Capita = PIB / população.
    float superPoder1, superPoder2; //Super poder = População + área + pib + pib per capita + densidade populacional invertida + pontos turisticos.
    int opcao1, opcao2; //Escolha das cartas para comparação



    printf("*** JOGO DO SUPER TRUNFO ***\n\n");

    //Iniciando a coleta de dados da primeira carta.
    printf("Carta 1:\n\n");

    printf("Informe o nome do estado: \n");//NOME DO ESTADO
    scanf(" %s", nomeEstado);
    
    printf("O estado é %s\n", nomeEstado);

    printf("Informe uma letra para o estado: \n");//LETRA DO ESTADO
    scanf(" %c", &estado);

    printf("A letra do estado é %c\n", estado);

    printf("Informe o código da sua carta: \n");//CÓDIGO DA CARTA
    scanf(" %s", codigoCarta);

    printf("O código da carta é %s\n", codigoCarta);

    printf("Informe o nome da cidade: \n");//NOME DA CIDADE
    scanf(" %s", cidade);

    printf("A cidade é %s\n", cidade);

    printf("Informe o número total da população da cidade: \n");//POPULAÇÃO
    scanf("%d", &populacao);

    printf("A população é de %d\n", populacao);

    printf("Informe a área total da cidade: \n");//ÁREA DA CIDADE
    scanf("%f", &area);

    printf("A área total é de %.2f km²\n", area);

    printf("Informe o produto interno bruto da cidade: \n");//PIB
    scanf("%f", &pib);

    printf("O PIB é de %.2f bilhões de reais\n", pib);

    printf("Informe quantos pontos turísticos tem a cidade: \n");//PONTOS TURISTICOS
    scanf("%d", &pontos);

    printf("O total de pontos turísticos é de %d\n\n", pontos);

    densiPopulacao1 = (populacao / area); //calculando a densidade populacional.
    pibcapita1 = (pib *1000000000.0) / populacao; //calculando o PIB per Capita.

    superPoder1 = (populacao + area + pib + pontos + pibcapita1 + (1.0 / densiPopulacao1));

    printf("Os dados foram salvos, obrigado por enviar.\nAgora vamos preencher os dados da proxima carta antes de concluir!\n\n");

    //Iniciando a coleta de dados da segunda carta
    printf("Carta 2:\n\n");

    printf("Informe o nome do estado: \n");//NOME DO ESTADO
    scanf(" %s", nomeEstado2);
    
    printf("O estado é %s\n", nomeEstado2);

    printf("Informe uma letra para o estado: \n");//LETRA DO ESTADO
    scanf(" %c", &estado2);

    printf("A letra do estado é %c\n", estado2);

    printf("Informe o código da sua carta: \n");//CÓDIGO DA CARTA
    scanf(" %s", codigoCarta2);

    printf("O código da carta é %s\n", codigoCarta2);

    printf("Informe o nome da cidade: \n");//NOME DA CIDADE
    scanf(" %s", cidade2);

    printf("A cidade é %s\n", cidade2);

    printf("Informe o número total da população da cidade: \n");//POPULAÇÃO
    scanf("%d", &populacao2);

    printf("A população é de %d\n", populacao2);

    printf("Informe a área total da cidade: \n");//ÁREA DA CIDADE
    scanf("%f", &area2);

    printf("A área total é de %.2f km²\n", area2);

    printf("Informe o produto interno bruto da cidade: \n");//PIB
    scanf("%f", &pib2);

    printf("O PIB é de %.2f bilhões de reais\n", pib2);

    printf("Informe quantos pontos turísticos tem a cidade: \n");//PONTOS TURISTICOS
    scanf("%d", &pontos2);

    printf("O total de pontos turísticos é de %d\n\n", pontos2);

    densiPopulacao2 = (populacao2 / area2); //calculando a densidade populacional.
    pibcapita2 = (pib2 *1000000000.0) / populacao2; //calculando o PIB per Capita.

    superPoder2 = (populacao2 + area2 + pib2 + pontos2 + pibcapita2 + (1.0 / densiPopulacao2));

    printf("Perfeito!!!\n\n Estas são suas cartas, mantenha elas por perto ;D\n Veja a comparação entre elas!\n\n");

    //Primeira CARTA
    printf("Carta 1:\n\n");
    printf("Nome do Estado: %s\n", nomeEstado);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f\n", densiPopulacao1);
    printf("PIB per Capita: %.2f\n", pibcapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    //Segunda CARTA
    printf("Carta 2:\n\n");
    printf("Nome do Estado: %s\n", nomeEstado2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densiPopulacao2);
    printf("PIB per Capita: %.2f\n", pibcapita2);
    printf("Super Poder: %.2f\n\n", superPoder2);
    

    system("cls||clear");

    // Escolha do atributo para comparação
    printf("*** COMPARAÇÃO DAS CARTAS ***\n\n");
    printf("Escolha UM atributo para comparar nas duas cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &opcao1);

    system("cls||clear");

    printf("*** RESULTADO ***\n");

    switch (opcao1) {
        case 1: // População
            printf("Carta1: %lu vs Carta2: %lu (População)\n", populacao, populacao2);
            if (populacao > populacao2)       printf("Carta 1 venceu!\n");
            else if (populacao < populacao2)  printf("Carta 2 venceu!\n");
            else                              printf("Empate!\n");
            break;

        case 2: // Área
            printf("Carta1: %.2f vs Carta2: %.2f (Área)\n", area, area2);
            if (area > area2)       printf("Carta 1 venceu!\n");
            else if (area < area2)  printf("Carta 2 venceu!\n");
            else                    printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Carta1: %.2f vs Carta2: %.2f (PIB em bilhões)\n", pib, pib2);
            if (pib > pib2)         printf("Carta 1 venceu!\n");
            else if (pib < pib2)    printf("Carta 2 venceu!\n");
            else                    printf("Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Carta1: %d vs Carta2: %d (Pontos Turísticos)\n", pontos, pontos2);
            if (pontos > pontos2)       printf("Carta 1 venceu!\n");
            else if (pontos < pontos2)  printf("Carta 2 venceu!\n");
            else                        printf("Empate!\n");
            break;

        case 5: // Densidade Populacional
            if (area <= 0 || area2 <= 0) {
                printf("Não dá pra comparar: área inválida (0 ou negativa).\n");
            } else {
                printf("Carta1: %.2f vs Carta2: %.2f (Densidade)\n", densiPopulacao1, densiPopulacao2);
                // Regra: menor densidade vence
                if (densiPopulacao1 < densiPopulacao2)       printf("Carta 1 venceu!\n");
                else if (densiPopulacao1 > densiPopulacao2)  printf("Carta 2 venceu!\n");
                else                                         printf("Empate!\n");
            }
            break;

        case 6: // PIB per Capita
            if (populacao == 0 || populacao2 == 0) {
                printf("Não dá pra comparar: população 0.\n");
            } else {
                printf("Carta1: %.2f vs Carta2: %.2f (PIB per Capita)\n", pibcapita1, pibcapita2);
                if (pibcapita1 > pibcapita2)       printf("Carta 1 venceu!\n");
                else if (pibcapita1 < pibcapita2)  printf("Carta 2 venceu!\n");
                else                                printf("Empate!\n");
            }
            break;

        case 7: // Super Poder
            printf("Carta1: %.2f vs Carta2: %.2f (Super Poder)\n", superPoder1, superPoder2);
            if (superPoder1 > superPoder2)       printf("Carta 1 venceu!\n");
            else if (superPoder1 < superPoder2)  printf("Carta 2 venceu!\n");
            else                                 printf("Empate!\n");
            break;

        default:
            printf("Opção inválida.\n");
            break;
    }

return 0;
}

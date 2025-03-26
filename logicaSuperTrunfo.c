#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    unsigned long int populacao1, populacao2; // VARIÁVEIS PARA ARMAZENAR A POPULAÇÃO
    float area1, area2; // VARIÁVEIS PARA ARMAZENAR A ÁREA
    float pib1, pib2; // VARIÁVEIS PARA ARMAZENAR O PIB DA ÁREA
    int pontos_turisticos1, pontos_turisticos2; // VARIÁVEIS PARA ARMAZENAR OS PONTOS TURÍSTICOS
    char estado1[20], estado2[20]; // VARIÁVEIS PARA ARMAZENAR O ESTADO
    char codigo1[10], codigo2[10]; // VARIÁVEIS PARA ARMAZENAR O CÓDIGO
    char cidade1[40], cidade2[40]; // VARIÁVEIS PARA ARMAZENAR A CIDADE

    // Variáveis para armazenar a densidade populacional e o PIB per capita
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;

    // Variável para comparar os atributos de comparação
    int atributocomparacao1, atributocomparacao2;

    // Cadastro das Cartas:
    // Solicita ao usuário que insira os dados da cidade1
    printf("Cadastro da Carta 1:\n");

    printf("Digite seu estado: uma letra, exemplo A \n");
    scanf("%s", estado1); // LÊ O ESTADO DA CARTA

    printf("Código da carta1: exemplo A01 \n");
    scanf("%s", codigo1); // LÊ O CÓDIGO DA CARTA

    printf("Nome da cidade:\n");
    scanf("%s", cidade1); // LÊ A CIDADE DA CARTA

    printf("População:\n ");
    scanf("%lu", &populacao1); // LÊ A POPULAÇÃO DA CARTA

    printf("Área: ");
    scanf("%f", &area1); // LÊ A ÁREA DA CARTA

    printf("PIB: ");
    scanf("%f", &pib1); // LÊ O PIB DA CARTA

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1); // LÊ OS PONTOS TURÍSTICOS DAS CARTAS

    // Solicita ao usuário que insira os dados da cidade2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite seu estado: uma letra, exemplo A\n");
    scanf("%s", estado2); // LÊ O ESTADO DA CARTA

    printf("Código: exemplo A02\n");
    scanf("%s", codigo2); // LÊ O CÓDIGO DA CARTA

    printf("Nome da cidade: \n");
    scanf("%s", cidade2); // LÊ A CIDADE DA CARTA

    printf("População: ");
    scanf("%lu", &populacao2); // LÊ A POPULAÇÃO DA CARTA

    printf("Área: ");
    scanf("%f", &area2); // LÊ A ÁREA DA CARTA

    printf("PIB: ");
    scanf("%f", &pib2); // LÊ O PIB DA CARTA

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2); // LÊ OS PONTOS TURÍSTICOS DA CARTA

    // Calculando a densidade populacional e o PIB per capita
    densidadepopulacional1 = (float)populacao1 / area1;
    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    // Exibir os dados da carta1
    printf("\nDados da Carta 1:\n");
    printf("Estado: %s \n", estado1);
    printf("Código da carta1: %s %s \n", estado1, codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);

    // Exibir os dados da carta2
    printf("\nDados da Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta2: %s %s \n", estado2, codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    // Solicitar ao usuário qual atributo ele deseja comparar
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - PIB\n");
    printf("2 - PIB per Capita\n");
    printf("3 - Área\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - População\n");
    printf("6 - Pontos turísticos\n");
    printf("Digite o número do primeiro atributo escolhido (1-6): ");
    scanf("%d", &atributocomparacao1);

    // Solicitar ao usuário qual atributo ele deseja comparar
    printf("Escolha o segundo atributo para comparar (não pode ser o mesmo do primeiro):\n");
    printf("1 - PIB\n");
    printf("2 - PIB per Capita\n");
    printf("3 - Área\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - População\n");
    printf("6 - Pontos turísticos\n");
    printf("Digite o número do segundo atributo escolhido (1-6): ");
    scanf("%d", &atributocomparacao2);

    // Verifica se os atributos são iguais
    if (atributocomparacao1 == atributocomparacao2) {
        printf("Você não pode escolher o mesmo atributo para as duas comparações.\n");
        return 0;
    }

    // Comparação dos dois atributos escolhidos:
    float soma_carta1 = 0, soma_carta2 = 0;
    printf("\nComparação dos dois atributos:\n");

    // Primeiro atributo escolhido
    switch(atributocomparacao1) {
        case 1: // Compara o PIB
            printf("\nCarta 1 - PIB: %.2f\n", pib1);
            printf("Carta 2 - PIB: %.2f\n", pib2);
            if (pib1 > pib2) {
                soma_carta1 += pib1;
                printf("Carta 1 venceu com maior PIB: %.2f\n", pib1);
            } else {
                soma_carta2 += pib2;
                printf("Carta 2 venceu com maior PIB: %.2f\n", pib2);
            }
            break;

        case 2: // Compara o PIB per Capita
            printf("\nCarta 1 - PIB per capita: %.2f\n", pibpercapita1);
            printf("Carta 2 - PIB per capita: %.2f\n", pibpercapita2);
            if (pibpercapita1 > pibpercapita2) {
                soma_carta1 += pibpercapita1;
                printf("Carta 1 venceu com maior PIB per capita: %.2f\n", pibpercapita1);
            } else {
                soma_carta2 += pibpercapita2;
                printf("Carta 2 venceu com maior PIB per capita: %.2f\n", pibpercapita2);
            }
            break;

        case 3: // Compara a Área
            printf("\nCarta 1 - Área: %.2f km²\n", area1);
            printf("Carta 2 - Área: %.2f km²\n", area2);
            if (area1 > area2) {
                soma_carta1 += area1;
                printf("Carta 1 venceu com maior área: %.2f km²\n", area1);
            } else {
                soma_carta2 += area2;
                printf("Carta 2 venceu com maior área: %.2f km²\n", area2);
            }
            break;

        case 4: // Compara a Densidade Populacional
            printf("\nCarta 1 - Densidade Populacional: %.2f habitantes/km²\n", densidadepopulacional1);
            printf("Carta 2 - Densidade Populacional: %.2f habitantes/km²\n", densidadepopulacional2);
            if (densidadepopulacional1 < densidadepopulacional2) {
                soma_carta1 += densidadepopulacional1;
                printf("Carta 1 venceu com menor densidade populacional: %.2f habitantes/km²\n", densidadepopulacional1);
            } else {
                soma_carta2 += densidadepopulacional2;
                printf("Carta 2 venceu com menor densidade populacional: %.2f habitantes/km²\n", densidadepopulacional2);
            }
            break;

        case 5: // Compara a População
            printf("\nCarta 1 - População: %lu habitantes\n", populacao1);
            printf("Carta 2 - População: %lu habitantes\n", populacao2);
            if (populacao1 > populacao2) {
                soma_carta1 += populacao1;
                printf("Carta 1 venceu com maior população: %lu habitantes\n", populacao1);
            } else {
                soma_carta2 += populacao2;
                printf("Carta 2 venceu com maior população: %lu habitantes\n", populacao2);
            }
            break;

        case 6: // Compara os Pontos Turísticos
            printf("\nCarta 1 - Pontos turísticos: %d\n", pontos_turisticos1);
            printf("Carta 2 - Pontos turísticos: %d\n", pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                soma_carta1 += pontos_turisticos1;
                printf("Carta 1 venceu com mais pontos turísticos: %d\n", pontos_turisticos1);
            } else {
                soma_carta2 += pontos_turisticos2;
                printf("Carta 2 venceu com mais pontos turísticos: %d\n", pontos_turisticos2);
            }
            break;

        default:
            printf("Opção inválida.\n");
            return 0;
    }

    // Segundo atributo escolhido
    switch(atributocomparacao2) {
        case 1: // Compara o PIB
            printf("\nCarta 1 - PIB: %.2f\n", pib1);
            printf("Carta 2 - PIB: %.2f\n", pib2);
            if (pib1 > pib2) {
                soma_carta1 += pib1;
                printf("Carta 1 venceu com maior PIB: %.2f\n", pib1);
            } else {
                soma_carta2 += pib2;
                printf("Carta 2 venceu com maior PIB: %.2f\n", pib2);
            }
            break;

        case 2: // Compara o PIB per Capita
            printf("\nCarta 1 - PIB per capita: %.2f\n", pibpercapita1);
            printf("Carta 2 - PIB per capita: %.2f\n", pibpercapita2);
            if (pibpercapita1 > pibpercapita2) {
                soma_carta1 += pibpercapita1;
                printf("Carta 1 venceu com maior PIB per capita: %.2f\n", pibpercapita1);
            } else {
                soma_carta2 += pibpercapita2;
                printf("Carta 2 venceu com maior PIB per capita: %.2f\n", pibpercapita2);
            }
            break;

        case 3: // Compara a Área
            printf("\nCarta 1 - Área: %.2f km²\n", area1);
            printf("Carta 2 - Área: %.2f km²\n", area2);
            if (area1 > area2) {
                soma_carta1 += area1;
                printf("Carta 1 venceu com maior área: %.2f km²\n", area1);
            } else {
                soma_carta2 += area2;
                printf("Carta 2 venceu com maior área: %.2f km²\n", area2);
            }
            break;

        case 4: // Compara a Densidade Populacional
            printf("\nCarta 1 - Densidade Populacional: %.2f habitantes/km²\n", densidadepopulacional1);
            printf("Carta 2 - Densidade Populacional: %.2f habitantes/km²\n", densidadepopulacional2);
            if (densidadepopulacional1 < densidadepopulacional2) {
                soma_carta1 += densidadepopulacional1;
                printf("Carta 1 venceu com menor densidade populacional: %.2f habitantes/km²\n", densidadepopulacional1);
            } else {
                soma_carta2 += densidadepopulacional2;
                printf("Carta 2 venceu com menor densidade populacional: %.2f habitantes/km²\n", densidadepopulacional2);
            }
            break;

        case 5: // Compara a População
            printf("\nCarta 1 - População: %lu habitantes\n", populacao1);
            printf("Carta 2 - População: %lu habitantes\n", populacao2);
            if (populacao1 > populacao2) {
                soma_carta1 += populacao1;
                printf("Carta 1 venceu com maior população: %lu habitantes\n", populacao1);
            } else {
                soma_carta2 += populacao2;
                printf("Carta 2 venceu com maior população: %lu habitantes\n", populacao2);
            }
            break;

        case 6: // Compara os Pontos Turísticos
            printf("\nCarta 1 - Pontos turísticos: %d\n", pontos_turisticos1);
            printf("Carta 2 - Pontos turísticos: %d\n", pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                soma_carta1 += pontos_turisticos1;
                printf("Carta 1 venceu com mais pontos turísticos: %d\n", pontos_turisticos1);
            } else {
                soma_carta2 += pontos_turisticos2;
                printf("Carta 2 venceu com mais pontos turísticos: %d\n", pontos_turisticos2);
            }
            break;

        default:
            printf("Opção inválida.\n");
            return 0;
    }

    // Soma dos atributos das cartas e comparação final
    printf("\nSoma dos atributos:\n");
    printf("Soma Carta 1: %.2f\n", soma_carta1);
    printf("Soma Carta 2: %.2f\n", soma_carta2);

    // Resultado final
    if (soma_carta1 > soma_carta2) {
        printf("\nA Carta 1 venceu a rodada!\n");
    } else if (soma_carta1 < soma_carta2) {
        printf("\nA Carta 2 venceu a rodada!\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
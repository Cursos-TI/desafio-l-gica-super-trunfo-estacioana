#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    unsigned long int populacao1, populacao2; //VARIAVEIS PARA ARMAZENAR A POPULAÇÃO
    float area1, area2;// VARIAVEIS PARA ARMAZENAR A AREA
    float pib1, pib2;//VARIAVEIS PARA ARMAZENAR O PIB DA AREA
    int pontos_turisticos1, pontos_turisticos2;//VARIAVEIS PARA ARMAZENAR OS PONTOS TURISTICOS
    char estado1[20], estado2[20];//VARIAVEIS PARA ARMAZENAR O ESTADO
    char codigo1[10], codigo2[10];//VARIAVEIS PARA ARMAZENAR O CODIGO
    char cidade1[40], cidade2[40];//VARIAVEIS PARA ARMAZENAR A CIDADE

    //variaveis para armazenaar a densidade populacional e o pib per capita
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;

    //  variavel para compara o atributo de comparação
    int atributocomparacao; 
    
    // Cadastro das Cartas:
    // solicita ao usuário que insira os dados da cidade1
    printf("Cadastro da Carta 1:\n");

    printf("Digite seu estado: uma letra, emxemplo A \n");
    scanf("%s", &estado1);//LE O ESTADO DA CARTA

    printf("Codigo da carta1: exemplo A01 \n");
    scanf("%s", &codigo1);//LE O CODIGO DA CARTA

    printf("Nome da cidade:\n");
    scanf("%s", &cidade1);//LE A CIDADE DA CARTA

    printf("População:\n ");
    scanf("%d", &populacao1);//LE A POPULACAO DA CARTA

    printf("Área: ");
    scanf("%f", &area1);//LE A AREA DA CARTA

    printf("PIB: ");
    scanf("%f", &pib1);//LE O PIB DA CARTA

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);//LE OS PONTOS TURISTICOS DAS PASTAS

    // solicita ao usuário que insira os dados da cidade2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite seu estado: uma letra, exemplo A\n");
    scanf("%s", &estado2);//LE O ESTADO DA CARTA

    printf("Codigo: exemplo A02\n");
    scanf("%s", &codigo2);//LE O CODIGO DA CARTA

    printf("Nome da cidade: \n");
    scanf("%s", &cidade2);//LE A CIDADE DA CARTA

    printf("População: ");
    scanf("%d", &populacao2);//LE A POPULACAO DA CARTA

    printf("Área: ");
    scanf("%f", &area2);//LE A AREA DA CARTA

    printf("PIB: ");
    scanf("%f", &pib2);//LE O PIB DA CARTA

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);//LE OS PONTOS TURISTICOS DA CARTA

    //calculando a densidade populacional e o pib per capita
    densidadepopulacional1 = (float)populacao1 / area1;
    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    //exibir os dados da carta1
    printf("\nDados da Carta 1:\n");
    printf("Estado: %s \n", estado1);//EXIBE O ESTADO
    printf("Codigo da carta1 %s%s \n",estado1, codigo1);//EXIBE O CODIGO
    printf("Cidade: %s \n", cidade1);//EXIBE A CIDADE
    printf("População: %d\n", populacao1);//EXIBE A POPULACAO
    printf("Área: %.2f\n", area1);//EXIBE A AREA
    printf("PIB: %.2f\n", pib1);//EXIBE O PIB
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);//EXIBE OS PONTOS TURISTICOS
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);//EXIBE A DENSIDADE POPULACIONAL
    printf("pib per capita: %.2f reais\n", pibpercapita1);//EXIBE O PIB PER CAPITA

    //exibir os dados da carta2
    printf("\nDados da Carta 2:\n");
    printf("Estado: %s \n", estado2);//EXIBE O ESTADO
    printf("Codigo da carta2 %s%s \n",estado2, codigo2);//EXIBE O CODIGO
    printf("Cidade: %s \n", cidade2);//EXIBE A CIDADE
    printf("População: %d\n", populacao2);//EXIBE A POPULACAO
    printf("Área: %.2f\n", area2);//EXIBE A AREA
    printf("PIB: %.2f\n", pib2);//EXIBE O PIB
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);//EXIBE OS PONTOS TURISTICOS
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);//EXIBE A DENSIDADE POPULACIONAL
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);//EXIBE O PIB PER CAPITA


    // Solicitar ao usuário qual atributo ele deseja comparar
    printf("Escolha o atributo para comparar:\n");
    printf("1 - PIB\n");
    printf("2 - PIB per Capita\n");
    printf("3 - Área\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - População\n");
    printf("Digite o número do atributo escolhido (1-5): ");
    scanf("%d", &atributocomparacao);

    // Comparação do atributo das Cartas:
    switch(atributocomparacao) {
    case 1: // Compara o PIB
    printf("\nComparação de cartas (Atributo: PIB):\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pib2);
    if (pib1 > pib2) {
    printf("Carta 1 (%s) venceu com maior PIB: %.2f.\n", cidade1, pib1);
        } else if (pib2 > pib1) {
            printf("Carta 2 (%s) venceu com maior PIB: %.2f.\n", cidade2, pib2);
        } else {
            printf("As duas cartas têm o mesmo PIB: %.2f.\n", pib1);
        }
        break;

        case 2: // Compara o PIB per Capita
    printf("\nComparação de cartas (Atributo: PIB per capita):\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pibpercapita1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pibpercapita2);
    if (pibpercapita1 > pibpercapita2) {
    printf("Carta 1 (%s) venceu com maior PIB per capita: %.2f.\n", cidade1, pibpercapita1);
        } else if (pibpercapita2 > pibpercapita1) {
    printf("Carta 2 (%s) venceu com maior PIB per capita: %.2f.\n", cidade2, pibpercapita2);
        } else {
    printf("As duas cartas têm o mesmo PIB per capita: %.2f.\n", pibpercapita1);
        }
        break;

        case 3: // Compara a Área
    printf("\nComparação de cartas (Atributo: Área):\n");
    printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
    if (area1 > area2) {
    printf("Carta 1 (%s) venceu com maior área: %.2f km².\n", cidade1, area1);
        } else if (area2 > area1) {
    printf("Carta 2 (%s) venceu com maior área: %.2f km².\n", cidade2, area2);
        } else {
    printf("As duas cartas têm a mesma área: %.2f km².\n", area1);
        }
        break;

        case 4: // Compara a Densidade Populacional
    printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %s (%s): %.2f habitantes por km²\n", cidade1, estado1, densidadepopulacional1);
    printf("Carta 2 - %s (%s): %.2f habitantes por km²\n", cidade2, estado2, densidadepopulacional2);
    if (densidadepopulacional1 < densidadepopulacional2) {
    printf(" Carta 1 (%s) venceu com menor densidade populacional: %.2f habitantes por km².\n", cidade1, densidadepopulacional1);
        } else if (densidadepopulacional2 < densidadepopulacional1) {
    printf("Carta 2 (%s) venceu com menor densidade populacional: %.2f habitantes por km².\n", cidade2, densidadepopulacional2);
        } else {
    printf("As duas cartas têm a mesma densidade populacional: %.2f habitantes por km².\n", densidadepopulacional1);
        }
        break;

        case 5: // Compara a População
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1: %s (%s): %lu habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2: %s (%s): %lu habitantes\n", cidade2, estado2, populacao2);
    if (populacao1 > populacao2) {
    printf("Carta 1 (%s) venceu com maior população: %lu habitantes.\n", cidade1, populacao1);
        } else if (populacao2 > populacao1) {
    printf("Carta 2 (%s) venceu com maior população: %lu habitantes.\n", cidade2, populacao2);
        } else {
    printf("As duas cartas têm a mesma população: %lu habitantes.\n", populacao1);
        }
        break;
}

    return 0;
}

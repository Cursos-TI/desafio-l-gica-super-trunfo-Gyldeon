#include <stdio.h>

int main() {
    char estado, estado2; // Estados
    int codigo, codigo2; // Código
    char cidade[20], cidade2[20]; // Cidades
    unsigned long int habitantes, habitantes2; // Habitantes
    float area, area2; // Área
    float pib, pib2; // PIB
    int npt, npt2; // Pontos Turísticos
    float densidadepopulacional, densidadepopulacional2;
    float pibpercapita, pibpercapita2;
    float superpoder, superpoder2;
    int numero1, numero2;

    // Mensagem de boas-vindas
    printf("\nBem-vindo ao sistema de cadastro, aqui você cadastrará suas cartas.\n");

    // Cadastro da Carta 1
    printf("\nCarta 1\n");
    printf("Insira o Estado: \n");
    scanf(" %c", &estado);
    printf("Insira o Codigo: \n");
    scanf(" %d", &codigo);
    printf("Insira o Nome da Cidade: \n");
    scanf(" %[^\n]", cidade);
    printf("Insira o Número de Habitantes: \n");
    scanf("%lu", &habitantes);
    printf("Insira a Área: \n");
    scanf("%f", &area);
    printf("Insira o PIB: \n");
    scanf("%f", &pib);
    printf("Insira o Número de Pontos Turísticos: \n");
    scanf("%d", &npt);

    // Cadastro da Carta 2
    printf("\nCarta 2\n");
    printf("Insira o Estado: \n");
    scanf(" %c", &estado2);
    printf("Insira o Codigo: \n");
    scanf("%d", &codigo2);
    printf("Insira o Nome da Cidade: \n");
    scanf(" %[^\n]", cidade2);
    printf("Insira o Número de Habitantes: \n");
    scanf("%lu", &habitantes2);
    printf("Insira a Área: \n");
    scanf("%f", &area2);
    printf("Insira o PIB: \n");
    scanf("%f", &pib2);
    printf("Insira o Número de Pontos Turísticos: \n");
    scanf("%d", &npt2);

    // Cálculos
    densidadepopulacional = (float)habitantes / area;
    densidadepopulacional2 = (float)habitantes2 / area2;
    pibpercapita = (float)pib / habitantes;
    pibpercapita2 = (float)pib2 / habitantes2;
    superpoder = (float)habitantes + area + pib + (float)npt + pibpercapita + (1.0 / densidadepopulacional);
    superpoder2 = (float)habitantes2 + area2 + pib2 + (float)npt2 + pibpercapita2 + (1.0 / densidadepopulacional2);

    // Mensagem de cadastro bem-sucedido
    printf("\nSuas cartas foram cadastradas com sucesso, aqui estão seus dados:\n");
    printf("\nCarta 1 \n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%02d\n", estado, codigo);
    printf("Cidade: %s\n", cidade);
    printf("Habitantes: %lu\n", habitantes);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", npt);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional);
    printf("PIB Percapita: %.2f\n", pibpercapita);
    printf("Super Poder: %.2f\n", superpoder);

    printf("\nCarta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%02d\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Habitantes: %lu\n", habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", npt2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB Percapita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Escolha de dois atributos
    printf("\nEscolha o primeiro atributo que deseja comparar:\n");
    printf("1 - Habitantes\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB Percapita\n");
    printf("7 - Super Poder\n");
    printf("\nInsira um número de 1 a 7:\n");
    scanf("%d", &numero1);

    printf("\nEscolha o segundo atributo que deseja comparar (diferente do primeiro):\n");
    scanf("%d", &numero2);

    // Variáveis para armazenar os valores dos atributos escolhidos
    float valor1 = 0, valor2 = 0;

    // Comparação do primeiro atributo
    switch (numero1) {
        case 1: // Habitantes
            valor1 = habitantes;
            break;
        case 2: // Área
            valor1 = area;
            break;
        case 3: // PIB
            valor1 = pib;
            break;
        case 4: // Pontos Turísticos
            valor1 = npt;
            break;
        case 5: // Densidade Populacional
            valor1 = densidadepopulacional;
            break;
        case 6: // PIB Percapita
            valor1 = pibpercapita;
            break;
        case 7: // Super Poder
            valor1 = superpoder;
            break;
        default:
            printf("Opção inválida para o primeiro atributo!\n");
            return 1;
    }

    // Comparação do segundo atributo
    switch (numero2) {
        case 1: // Habitantes
            valor2 = habitantes2;
            break;
        case 2: // Área
            valor2 = area2;
            break;
        case 3: // PIB
            valor2 = pib2;
            break;
        case 4: // Pontos Turísticos
            valor2 = npt2;
            break;
        case 5: // Densidade Populacional
            valor2 = densidadepopulacional2;
            break;
        case 6: // PIB Percapita
            valor2 = pibpercapita2;
            break;
        case 7: // Super Poder
            valor2 = superpoder2;
            break;
        default:
            printf("Opção inválida para o segundo atributo!\n");
            return 1;
    }

    // Comparação dos atributos
    printf("\nComparando os atributos escolhidos...\n");

    // Comparação do primeiro atributo
    if (valor1 > valor2) {
        printf("A Carta 1 vence no primeiro atributo.\n");
    } else if (valor1 < valor2) {
        printf("A Carta 2 vence no primeiro atributo. \n");
    } else {
        printf("Empate no atributo escolhido (1º atributo)!\n");
    }

    // Comparação do segundo atributo
    if (numero1 == 5) { // Densidade Populacional
        if (densidadepopulacional < densidadepopulacional2) {
            printf("A Carta 1 vence no segundo atributo (Densidade Populacional).\n");
        } else if (densidadepopulacional > densidadepopulacional2) {
            printf("A Carta 2 vence no segundo atributo (Densidade Populacional).\n");
        } else {
            printf("Empate no segundo atributo (Densidade Populacional)!\n");
        }
    } else {
        if (valor1 > valor2) {
            printf("A Carta 1 vence no segundo atributo.\n");
        } else if (valor1 < valor2) {
            printf("A Carta 2 vence no segundo atributo.\n");
        } else {
            printf("Empate no segundo atributo!\n");
        }
    }

    // Soma dos atributos
    float soma1 = valor1 + valor2; // Soma dos atributos escolhidos
    float soma2 = 0; // Inicializando a soma para a carta 2

    // Determinando a soma total para cada carta
    switch (numero1) {
        case 1: // Habitantes
            soma2 = habitantes2;
            break;
        case 2: // Área
            soma2 = area2;
            break;
        case 3: // PIB
            soma2 = pib2;
            break;
        case 4: // Pontos Turísticos
            soma2 = npt2;
            break;
        case 5: // Densidade Populacional
            soma2 = densidadepopulacional2;
            break;
        case 6: // PIB Percapita
            soma2 = pibpercapita2;
            break;
        case 7: // Super Poder
            soma2 = superpoder2;
            break;
        default:
            printf("Opção inválida para calcular a soma!\n");
            return 1;
    }

    // Exibindo a soma dos atributos
    printf("Soma dos atributos: Carta 1 = %.2f, Carta 2 = %.2f\n", soma1, soma2);

    // Determinando o vencedor com base na soma
    if (soma1 > soma2) {
        printf("A Carta 1 vence com uma soma total de %.2f.\n", soma1);
    } else if (soma1 < soma2) {
        printf("A Carta 2 vence com uma soma total de %.2f.\n", soma2);
    } else {
        printf("Empate na soma total dos atributos!\n");
    }

    return 0;
}

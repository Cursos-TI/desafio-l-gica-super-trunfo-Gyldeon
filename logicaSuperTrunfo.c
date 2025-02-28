#include <stdio.h>

int main (){

    char estado, estado2; //Estados
    int codigo, codigo2; //Código
    char cidade[20], cidade2[20]; // Cidades
    unsigned long int habitantes, habitantes2; //Habitantes
    float area, area2; //Área
    float pib, pib2; //PIB
    int npt, npt2; //Pontos Turísticos
    float densidadepopulacional, densidadepopulacional2;
    float pibpercapita, pibpercapita2;
    float superpoder, superpoder2;
    int numero;
    
    //Mensagem de boas vindas
    printf ("\nBem-vindo ao sistema de cadastro, aqui você cadastrará suas cartas.\n");

    printf ("\nCarta 1\n");

    printf ("Insira o Estado: \n");
    scanf (" %c", &estado);

    printf ("Insira o Codigo: \n");
    scanf (" %d", &codigo);

    printf ("Insira o Nome da Cidade: \n");
    scanf (" %[^\n]", cidade); //O (%[^\n]), faz com que possa ser usado espaço na string
    
    printf ("Insira o Número de Habitantes: \n");
    scanf ("%lu", &habitantes);

    printf ("Insira a Área: \n");
    scanf ("%f", &area);

    printf ("Insira o PIB: \n");
    scanf ("%f", &pib);

    printf ("Insira o Número de Pontos Turísticos: \n");
    scanf ("%d", &npt);

    //Mensagem de cadastro bem sucedido
    printf("\nA Carta 1 foi cadastrada com sucesso! Agora preencha a Carta 2.\n");


    printf ("\nCarta 2\n");

    printf ("Insira o Estado: \n");
    scanf (" %c", &estado2); //é preciso dar espaço antes do %c, pra o enter do comando anterior não ser considerado como o comando atual

    printf ("Insira o Codigo: \n");
    scanf ("%d", &codigo2);

    printf ("Insira o Nome da Cidade: \n");
    scanf (" %[^\n]", cidade2); 

    printf ("Insira o Número de Habitantes: \n");
    scanf ("%lu", &habitantes2);

    printf ("Insira a Área : \n");
    scanf ("%f", &area2);

    printf ("Insira o PIB: \n");
    scanf ("%f", &pib2);

    printf ("Insira o Número de Pontos Turísticos: \n");
    scanf ("%d", &npt2);

    //Cálculos
    densidadepopulacional = (float) habitantes / area;
    pibpercapita = (float) pib / habitantes;
    densidadepopulacional = (area != 0) ? (float)habitantes / area : 0;
    pibpercapita = (habitantes != 0) ? (float)pib / habitantes : 0;
    superpoder = (float) habitantes + area + pib + (float) npt + pibpercapita + (1.0 / densidadepopulacional);
    superpoder2 = (float)habitantes2 + area2 + pib2 + (float)npt2 + pibpercapita2 + (1.0 / densidadepopulacional2);

    //Mensagem de cadastro bem sucedido 2
    printf("\nSuas cartas foram cadastradas com sucesso, aqui estão seus dados:\n");


    printf ("\nCarta 1 \n");
    printf ("\nEstado: %c\n", estado);
    printf ("Código: %c%02d\n", estado, codigo); //Para o zero à esquerda aparecer, é preciso colocar %02d para específicar 2 dígitos
    printf ("Cidade: %s\n", cidade);
    printf ("Habitantes: %lu\n", habitantes);
    printf ("Área: %.2f km²\n", area);
    printf ("PIB: %.2f de reais\n", pib);
    printf ("Número de Pontos Turísticos: %d\n", npt);
    printf ("Densidade Populacional: %.2f\n", densidadepopulacional);
    printf ("PIB Percapita: %.2f\n", pibpercapita);
    printf ("Super Poder: %.2f\n", superpoder);

    printf ("\nCarta 2 \n");
    printf ("\nEstado: %c\n", estado2);
    printf ("Código: %c%02d\n", estado2, codigo2); //Para o zero à esquerda aparecer, é preciso colocar %02d para específicar 2 dígitos
    printf ("Cidade: %s\n", cidade2);
    printf ("Habitantes: %lu\n", habitantes2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %.2f de reais\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", npt2);
    printf ("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf ("PIB Percapita: %.2f\n", pibpercapita2);
    printf ("Super Poder: %.2f\n", superpoder2);

    //Comparação
    int vhabitantes = habitantes > habitantes2;
    int varea = area > area2;
    int vpib = pib > pib2;
    int vnpt = npt > npt2;
    int vdensidadepopulacional = densidadepopulacional < densidadepopulacional2;
    int vpibpercapita = pibpercapita > pibpercapita2;
    int vsuperpoder = superpoder > superpoder2;

    printf("\nQual Atributo Você Deseja Comparar?\n");
    printf("1 - Habitantes\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB Percapita\n");
    printf("7 - Super Poder\n");
    printf("\nInsira Um Número De 1 a 7:\n");
    scanf("%d", &numero);

    printf("\nCarta 1 é %c e Carta 2 é %c\n", estado, estado2);

    switch (numero)
    {
    case 1:
        printf("\nHabitantes: ");
    if (habitantes > habitantes2){
        printf("Carta 1 Vence Com: %lu\n", habitantes);
    }else if (habitantes2 > habitantes){
        printf("Carta 2 Vence Com: %lu\n", habitantes2);
    }else {
        printf("Empate");
    }
        break;

    case 2:
        printf("\nÁrea: ");
    if (area > area2){
        printf("Carta 1 Vence Com: %.2f\n", area);
    }else if (area2 > area){
        printf("Carta 2 Vence Com: %.2f\n", area2);
    }else {
        printf("Empate");
    }
        break;

    case 3:
        printf("\nPIB: ");
    if (pib > pib2){
        printf("Carta 1 Vence Com: %.2f\n", pib);
    }else if (pib2 > pib){
        printf("Carta 2 Vence Com: %.2f\n", pib2);
    }else {
        printf("Empate");
    }
        break;

    case 4:
        printf("\nPontos Turísticos: ");
    if (npt > npt2){
        printf("Carta 1 Vence Com: %d\n", npt);
    }else if (npt2 > npt){
        printf("Carta 2 Vence Com: %d\n", npt2);
    }else {
        printf("Empate");
    }
        break;

    case 5:
        printf("\nDensidade Populacional: ");
    if (densidadepopulacional < densidadepopulacional2){
        printf("Carta 1 Vence Com: %.2f\n", densidadepopulacional);
    }else if (densidadepopulacional2 < densidadepopulacional){
        printf("Carta 2 Vence Com: %.2f\n", densidadepopulacional2);
    }else {
        printf("Empate");
    }
        break;

    case 6:
        printf("\nPIB Percapita: ");
    if (pibpercapita > pibpercapita2){
        printf("Carta 1 Vence Com: %.2f\n", pibpercapita);
    }else if (pibpercapita2 > pibpercapita){
        printf("Carta 2 Vence Com: %.2f\n", pibpercapita2);
    }else {
        printf("Empate");
    }
        break;

    case 7:
        printf("\nSuper Poder: ");
    if (superpoder > superpoder2){
        printf("Carta 1 Vence Com: %.2f\n", superpoder);
    }else if (superpoder2 > superpoder){
        printf("Carta 2 Vence Com: %.2f\n", superpoder2);
    }else {
        printf("Empate");
    }
        break;
    
    default:
        printf("Opção Inválida");
        break;
    }


    return 0;

}
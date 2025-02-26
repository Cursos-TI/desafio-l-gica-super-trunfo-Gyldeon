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
    
    //Mensagem de boas vindas
    printf ("\nBem-vindo ao sistema de cadastro, aqui você cadastrará suas cartas.\n");

    printf ("\nCarta 1\n");

    printf ("Insira o Estado: \n");
    scanf (" %c", &estado);

    printf ("Insira o Codigo: \n");
    scanf (" %d", &codigo);

    printf ("Insira o Nome da Cidade: \n");
    scanf (" %[^\n]", cidade); //O (%[^\n]), faz com que possa ser usado espaço na string
    
    printf ("Insira o Numero de Habitantes: \n");
    scanf ("%lu", &habitantes);

    printf ("Insira a Area: \n");
    scanf ("%f", &area);

    printf ("Insira o PIB: \n");
    scanf ("%f", &pib);

    printf ("Insira o Numero de Pontos Turisticos: \n");
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

    printf ("Insira o Numero de Habitantes: \n");
    scanf ("%lu", &habitantes2);

    printf ("Insira a Area : \n");
    scanf ("%f", &area2);

    printf ("Insira o PIB: \n");
    scanf ("%f", &pib2);

    printf ("Insira o Numero de Pontos Turisticos: \n");
    scanf ("%d", &npt2);

    //Cálculos
    densidadepopulacional = (float) habitantes / area;
    pibpercapita = (float) pib / habitantes;
    densidadepopulacional2 = (float) habitantes2 / area2;
    pibpercapita2 = (float) pib2 / habitantes2;
    superpoder = (float) habitantes + area + pib + (float) npt + pibpercapita + (1.0 / densidadepopulacional);
    superpoder2 = (float)habitantes2 + area2 + pib2 + (float)npt2 + pibpercapita2 + (1.0 / densidadepopulacional2);

    //Mensagem de cadastro bem sucedido 2
    printf("\nSuas cartas foram cadastradas com sucesso, aqui estão seus dados:\n");


    printf ("\nCarta 1 \n");
    printf ("\nEstado: %c\n", estado);
    printf ("Codigo: %c%02d\n", estado, codigo); //Para o zero à esquerda aparecer, é preciso colocar %02d para específicar 2 dígitos
    printf ("Cidade: %s\n", cidade);
    printf ("Habitantes: %lu\n", habitantes);
    printf ("Area: %.2f km²\n", area);
    printf ("PIB: %.2f de reais\n", pib);
    printf ("Numero de Pontos Turísticos: %d\n", npt);
    printf ("Densidade Populacional: %.2f\n", densidadepopulacional);
    printf ("PIB Percapita: %.2f\n", pibpercapita);
    printf ("Super Poder: %.2f\n", superpoder);

    printf ("\nCarta 2 \n");
    printf ("\nEstado: %c\n", estado2);
    printf ("Codigo: %c%02d\n", estado2, codigo2); //Para o zero à esquerda aparecer, é preciso colocar %02d para específicar 2 dígitos
    printf ("Cidade: %s\n", cidade2);
    printf ("Habitantes: %lu\n", habitantes2);
    printf ("Area: %.2f km²\n", area2);
    printf ("PIB: %.2f de reais\n", pib2);
    printf ("Numero de Pontos Turísticos: %d\n", npt2);
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

    //Resultado da Comparação
    printf ("\nResultado do Jogo\n");

    printf("\nHabitantes: ");
    if (vhabitantes)
        printf("Carta 1 Venceu\n");
    else
        printf("Carta 2 Venceu\n");
    
    printf("Area: ");
    if (varea)
        printf("Carta 1 Venceu\n");
    else
        printf("Carta 2 Venceu\n");
    
    printf("PIB: ");
    if (vpib)
        printf("Carta 1 Venceu\n");
    else
        printf("Carta 2 Venceu\n");
    
    printf("Pontos Turisticos: ");
    if (vnpt)
        printf("Carta 1 Venceu\n");
    else
        printf("Carta 2 Venceu\n");
    
    printf("Densidade Populacional: ");
    if (vdensidadepopulacional)
        printf("Carta 1 Venceu\n");
    else
        printf("Carta 2 Venceu\n");
    
    printf("PIB Per Capita: ");
    if (vpibpercapita)
        printf("Carta 1 Venceu\n");
    else
        printf("Carta 2 Venceu\n");
    
    printf("Super Poder: ");
    if (vsuperpoder)
        printf("Carta 1 Venceu\n");
    else
        printf("Carta 2 Venceu\n");

    return 0;

}
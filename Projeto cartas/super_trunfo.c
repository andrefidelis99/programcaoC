#include <stdio.h>

int main () {

    char estado[10];
    char codigo[10];
    char cidade[50];
    int pop;
    float area;
    float pib;
    int pt_turisticos;

    //inicio das var da segunda carta

    char estado2[10];
    char codigo2[10];
    char cidade2[50];
    int pop2;
    float area2;
    float pib2;
    int pt_turisticos2;

    printf ("Vamos criar duas cartas de SuperTrunfo, escolha seus atributos! \n");

    printf ("Vamos para os atributos da primeira carta! \n");

    printf ("Escolha uma letra de 'A' a 'H' para seu estado. \n");
    scanf ("%s", &estado);

    printf("Escolha o código da carta, números de 01 a 04. \n");
    scanf ("%s", &codigo);

    printf("Escolha o nome da sua cidade. \n");
     getchar();
    fgets(cidade,50,stdin);
    
    printf("Diga a população da sua cidade. \n");
    scanf("%d", &pop);

    printf("Diga a área da sua cidade. \n");
    scanf("%f", &area);

    printf("Diga o PIB da sua cidade. \n");
    scanf("%f", &pib);

    printf("Agora por último me diga a quantidade de pontos turísticos. \n");
    scanf("%d", &pt_turisticos);

    //inicio do código da segunda


    printf ("Agora vamos para os atributos da segunda carta! \n");


    printf ("Escolha uma letra de 'A' a 'H' para seu estado. Eliminando a que já foi escolhida para a outra carta. \n");
    scanf ("%s", &estado2);

    printf("Escolha o código da carta, números de 01 a 04. Eliminando o código que foi escolhido para a outra carta. \n");
    scanf ("%s", &codigo2);

    printf("Escolha o nome da sua cidade. \n");
     getchar();
    fgets(cidade2,50,stdin);

    printf("Diga a população da sua cidade. \n");
    scanf("%d", &pop2);

    printf("Diga a área da sua cidade. \n");
    scanf("%f", &area2);

    printf("Diga o PIB da sua cidade. \n");
    scanf("%f", &pib2);

    printf("Agora por último me diga a quantidade de pontos turísticos. \n");
    scanf("%d", &pt_turisticos2);


    printf("Agora vamos apresentar como ficou suas cartas \n");

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s%s \n", estado,codigo);
    printf("Nome da cidade: %s", cidade);
    printf("População: %d \n", pop);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d \n", pt_turisticos);

    //print da segunda carta

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s%s \n", estado2,codigo2);
    printf("Nome da cidade: %s", cidade2);
    printf("População: %d \n", pop2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reis \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pt_turisticos2);

    return 0;
}
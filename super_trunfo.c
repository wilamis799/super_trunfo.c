#include <stdio.h>
 int main(){
    //carta numero 1
    char estado1;
    char codigo1[20];
    char nome1[20];
    int populaçao1;
    float area1;
    float pib1;
    int  pontos1;

    //carta numero 2
    char estado2;
    char codigo2[20];
    char nome2[20];
    int populaçao2;
    float area2;
    float pib2;
    int  pontos2;



    printf(   "BEM VINDO AO SUPER TRUNFO!\n");
    printf(" para começarmos que tal cadastrar sua primeira carta?\nescreva a letra q vai representar o estado da carta:\n");
    scanf(" %c", &estado1);

    printf("agr escreva o codigo da carta, sendo a primeira letra correespondendo ao estado em seguida 01 a 04:\n");
    scanf("%s", codigo1);
    
    printf("escreva o nome da cidade:\n");
    scanf("%s", nome1);

    printf("escreva o numero de habitantes da cidade:\n");
    scanf("%d", populaçao1);

    printf("ecreva a area em km ²:\n");
    scanf("%f", area1);

    printf("escreva o PIB da cidade:\n");
    scanf("%f", pib1);

    printf("escreva o numero de pontos turisticos da cidade:\n");
    scanf("%d", pontos1);



    printf("PARBÉNS!!, você concluiu sua primeira carta, agora vamos criar a segunda carta do super trunfo?\nescreva a letra q vai representar o estado da carta:\n");
    scanf(" %c", &estado2);

    printf(" escreva o codigo da carta, sendo a primeira letra correespondendo ao estado em seguida 01 a 04:\n");
    scanf("%s", codigo2);
    
    printf("escreva o nome da cidade:\n");
    scanf("%s", nome2);

    printf("escreva o numero de habitantes da cidade:\n");
    scanf("%d", populaçao2);

    printf("ecreva a area em km ²:\n");
    scanf("%f", area2);

    printf("escreva o PIB da cidade:\n");
    scanf("%f", pib2);

    printf("escreva o numero de pontos turisticos da cidade\n");
    scanf("%d", pontos2);

    printf("DADOS DA CARTA NUMERO 1:\n");
    printf("os estado da carta numero é:%c\n", estado1);
    printf("o codigo da carta é:%s\n", codigo1);
    printf("a cidade é:%s\n", nome1);
    printf("o numero de habitantes é:%d\n", populaçao1);
    printf("a area é de:%f km²\n", area1);
    printf("o PIB é:%f\n", pib1);
    printf("o numero de pontos turisticos é é:%d\n", pontos1);


    printf("DADOS DA CARTA NUMERO 2:\n");
    printf("os estado da carta numero é:%c\n", estado2);
    printf("o codigo da carta é:%s\n", codigo2);
    printf("a cidade é:%s\n", nome2);
    printf("o numero de habitantes é:%d\n", populaçao2);
    printf("a area é de:%f km²\n", area2);
    printf("o PIB é:%f\n", pib2);
    printf("o numero de pontos turisticos é é:%d\n", pontos2);


 }


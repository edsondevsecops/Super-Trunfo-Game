#include <stdio.h>
int main(){
    
    char estado1[20], estado2[20];
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numdepontosturisticos1, numdepontosturisticos2;

    printf("---Vamos cadastrar a primeira carta do Super Trunfo---\n\n");

    printf("Digite o estado da carta: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta (ex.: A01): \n");
    scanf("%s", codigo1);
    //'codigo1' não precisa de & porque é ponteiro
    //Funciona se utilizar, mas pode dar erro futuro

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    //'cidade1' segue mesma lógica de 'codigo1'
    

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &numdepontosturisticos1);

    printf("\n---Vamos cadastrar a segunda carta do Super Trunfo---\n\n");

    printf("Digite o estado da carta: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta (ex.: A01): \n");
    scanf("%s", codigo2);
    //'codigo1' não precisa de & porque é ponteiro
    //Funciona se utilizar, mas pode dar erro futuro

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    //'cidade1' segue mesma lógica de 'codigo1'
    

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &numdepontosturisticos2);


    printf("\n------------------------\n\n");

    printf("As cartas cadastradas no Super Trunfo foram:\n\n");
    printf("Carta 1\n");
    printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d habitantes\nÁrea: %.3f Km²\nPIB: %.3f bilhões de reais\nNúmero de pontos turísticos: %d\n\n", estado1, codigo1, cidade1, populacao1, area1, pib1, numdepontosturisticos1);
    printf("Carta 2\n");
    printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d habitantes\nÁrea: %.3f Km²\nPIB: %.3f bilhões de reais\nNúmero de pontos turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, pib2, numdepontosturisticos2);
   
    return 0;
}
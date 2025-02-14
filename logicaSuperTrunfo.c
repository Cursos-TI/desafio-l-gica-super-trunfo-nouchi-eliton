#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    unsigned long int populacao;
    int qnt_pontos_turisticos;
    float area, pib, super_poder;
    float densidade, pib_per_capita;
    char estado;
    char cod_carta[5];
    char nome_cidade[20];

    unsigned long int populacao2;
    int qnt_pontos_turisticos2;
    float area2, pib2, super_poder2;
    float densidade2, pib_per_capita2;
    char estado2;
    char cod_carta2[5];
    char nome_cidade2[20];
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("Cadastre a primeira carta\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);
    printf("Digite o codigo da carta: ");
    scanf("%s", cod_carta);
    printf("Digite a primeira letra do estado: ");
    scanf(" %c",&estado);
    printf("Digite a população: ");
    scanf("%lu",&populacao);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&qnt_pontos_turisticos);
    printf("Digite a área: ");
    scanf("%f",&area);
    printf("Digite o PIB: ");
    scanf("%f",&pib);

    densidade = (float) populacao / area;
    pib_per_capita = (float) pib / populacao;
    super_poder = (float) populacao + qnt_pontos_turisticos + area + pib - densidade + pib_per_capita;

    printf("Carta cadastrada com sucesso!\n Dados da carta: \n");
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Codigo da carta: %s\n", cod_carta);
    printf("Estado: %c\n", estado);
    printf("População: %lu\n", populacao);
    printf("Quantidade de pontos turísticos: %d\n", qnt_pontos_turisticos);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Densidade populacional: %f \n", densidade);
    printf("PIB per capita: %f \n", pib_per_capita); 
    printf("Super poder: %f \n", super_poder); 

    printf("\n\n");
    printf("Cadastre a segunda carta\n");
    printf("Digite o nome da cidade: ");
    scanf("%s",nome_cidade2);
    printf("Digite o codigo da carta: ");
    scanf("%s",cod_carta2);
    printf("Digite a primeira letra do estado: ");
    scanf(" %c",&estado2);
    printf("Digite a população: ");
    scanf("%lu",&populacao2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&qnt_pontos_turisticos2);
    printf("Digite a área: ");
    scanf("%f",&area2);
    printf("Digite o PIB: ");
    scanf("%f",&pib2);

    // calculando novas propriedades
    densidade2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) pib2 / populacao2;
    super_poder2 = (float) populacao2 + qnt_pontos_turisticos2 + area2 + pib2 - densidade2 + pib_per_capita2;

    // Exibindo os dados
    printf("Carta cadastrada com sucesso!\n Dados da carta: \n");
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("Codigo da carta: %s\n", cod_carta2);
    printf("Estado: %c\n", estado2);
    printf("População: %lu\n", populacao2);
    printf("Quantidade de pontos turísticos: %d\n", qnt_pontos_turisticos2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Densidade populacional: %f \n", densidade2);
    printf("PIB per capita: %f \n", pib_per_capita2); 
    printf("Super poder: %f \n", super_poder2);

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    if (populacao > populacao2){
        printf("Cidade 1 tem a maior populacao \n");
    }else{
        printf("Cidade 2 tem a maior populacao \n");
    }
    if (qnt_pontos_turisticos > qnt_pontos_turisticos2){
        printf("Cidade 1 tem a maior quantidade de pontos turisticos \n");
    }else{
        printf("Cidade 2 tem a maior quantidade de pontos turisticos \n");
    }
    if (area > area2){
        printf("Cidade 1 tem a maior area \n");
    }else{
        printf("Cidade 2 tem a maior area \n");
    }
    if (pib > pib2){
        printf("Cidade 1 tem o maior PIB \n");
    }else{
        printf("Cidade 2 tem o maior PIB \n");
    }
    if (densidade > densidade2){
        printf("Cidade 1 tem a maior densidade populacional\n");
    }else{
        printf("Cidade 2 tem a maior densidade populacional\n");
    }
    if (pib_per_capita > pib_per_capita2){
        printf("Cidade 1 tem o maior PIB per capita\n");
    }else{
        printf("Cidade 2 tem o maior PIB per capita\n");
    }
    if (super_poder > super_poder2){
        printf("Cidade 1 tem o maior super poder\n");
    }else{
        printf("Cidade 2 tem o maior super poder\n");
    }

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    int opcao;
    printf("Escolha o numero de um dos atributos abaixo para comparacao:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Quantidade de pontos turisticos\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            if (populacao > populacao2){
                printf("A cidade vencedora é a %s\n", nome_cidade);
            }else{
                printf("A cidade vencedora é a %s\n", nome_cidade2);
            }  
            break;
        case 2:
            if (area > area2){
                printf("A cidade vencedora é a %s\n", nome_cidade);
            }else{
                printf("A cidade vencedora é a %s\n", nome_cidade2);
            }  
            break;
        case 3:
            if (pib > pib2){
                printf("A cidade vencedora é a %s\n", nome_cidade);
            }else{
                printf("A cidade vencedora é a %s\n", nome_cidade2);
            }
            break;
        case 4:
            if (qnt_pontos_turisticos > qnt_pontos_turisticos2){
                printf("A cidade vencedora é a %s\n", nome_cidade);
            }else{
                printf("A cidade vencedora é a %s\n", nome_cidade2);
            }
            break;

    }

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}

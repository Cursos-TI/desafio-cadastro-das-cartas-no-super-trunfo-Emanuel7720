#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int populacao, pontoTu, ppopulacao, ppontoTu;
    float area, pib, aarea, ppib, densidadePop, pibPer, ddensidadePop, ppibPer;
    char estado [50], codigo [50], nomeCidade [50], eestado [50], ccodigo [50], nnomeCidade [50];


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    printf ("- Desafio do Super Trunfo - \n ");
    printf ("Para iniciarmos o desafio precisamos de algumas informações, vamos lá? \n");

    // Inicio das solicitações de dados

    printf ("Digite uma letra para representar nossa carta (letra de A até H)\n");
    scanf ("%s", &estado);

    printf ("Digite um número para representar o código da carta  (número de 01 a 04):\n");
    scanf ("%s", &codigo);

    printf ("Digite o nome da cidade (O nome não poderá ser composto como Santa Catarina):\n");
    scanf ("%s", &nomeCidade);

    printf ("Digite o número da População da cidade escolhida: \n");
    scanf ("%d", &populacao);
    
    printf ("Digite a área em Km2: \n");
    scanf ("%f", &area);

    printf ("Digite o valor do PIB em bilhões:\n");
    scanf ("%f", &pib);

    printf ("Digite o número de pontos turísticos:\n");
    scanf ("%d", &pontoTu);

    densidadePop = populacao / area;
    pibPer = (pib / populacao) * 1000000000;
    
    // Para que a informação seja impressa corretamente, devemos multiplicar o PIB per capita pelo valor de Bilhâo
    // Dessa maneira o decimal fica mais facil para a compreensão.
    // Ao invés de ficar 0.00000003 Bilhões de reais, o valor fica 3.000 reais ja com o numero de zero de forma correta



    // Fim da coleta de dados para a primeira carta
    // Seguimos para a coleta de dados para a segunda carta do jogo 

    printf ("Muito bem! Agora seguimos para a segunda carta do jogo, vamos lá?\n\n");
    
    // Para que não conflite dados da primeira carta com a da segunda, duplicamos a primeira letra das variaveis para
    // representar a segunda carta

    printf ("Digite uma letra para representar a nossa 2ª carta (letra de A até H)\n");
    scanf ("%s", &eestado);

    printf ("Digite um número para representar o código da 2ª carta  (número de 01 a 04):\n");
    scanf ("%s", &ccodigo);

    printf ("Digite o nome da cidade (O nome não poderá ser composto como Santa Catarina):\n");
    scanf ("%s", &nnomeCidade);

    printf ("Digite o número da População da cidade escolhida: \n");
    scanf ("%d", &ppopulacao);
    
    printf ("Digite a área em Km2: \n");
    scanf ("%f", &aarea);

    printf ("Digite o valor do PIB em bilhões:\n");
    scanf ("%f", &ppib);

    printf ("Digite o número de pontos turísticos:\n");
    scanf ("%d", &ppontoTu);

    ddensidadePop = ppopulacao / aarea;
    ppibPer = (ppib / ppopulacao) * 1000000000;
    // Coleta de dados concluida
    // Imprimimos então o as informações coletadas
    
    printf ("Seguimos com as seguintes cartas:\n\n");

    printf ("Carta 1\n");
    printf ("Estado: %s%s \n", estado, codigo);
    printf ("Nome da cidade: %s \n", nomeCidade);
    printf ("População: %d \n", populacao);
    printf("Área: %.3f Km2 \n", area);
    printf ("PIB: %.3f bilhões de reais \n", pib);
    printf ("Número de Pontos Turísticos: %d \n", pontoTu);
    printf ("Densidade populacional: %.3f hab/km2 \n", densidadePop);
    printf ("PIB per capita: %.3f reais\n\n\n",pibPer);


    printf ("Carta 2\n");
    printf ("Estado: %s%s \n", eestado, ccodigo);
    printf ("Nome da cidade: %s \n", nnomeCidade);
    printf ("População: %d \n", ppopulacao);
    printf("Área: %.3f Km2 \n", aarea);
    printf ("PIB: %.3f bilhões de reais \n", ppib);
    printf ("Número de Pontos Turísticos: %d \n", ppontoTu);
    printf ("Densidade populacional: %.3f hab/km2\n", ddensidadePop);
    printf ("PIB per capita: %.3f reais\n",ppibPer);
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;

}

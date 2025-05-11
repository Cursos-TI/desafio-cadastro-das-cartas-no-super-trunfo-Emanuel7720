#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int populacao, pontoTu, ppopulacao, ppontoTu;
    float area, pib, aarea, ppib;
    char estado, codigo, nomeCidade, eestado, ccodigo, nnomeCidade;


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    printf ("- Desafio do Super Trunfo - \n ");
    printf ("Para iniciarmos o desafio precisamos de algumas informações, vamos lá? \n");

    // Inicio das solicitações de dados
    printf ("Digite um numero para representar o codigo da carta  ( numero de 01 a 04 ):\n");
    scanf ("%s, &codigo");

    printf ("Digite o nome da cidade (O nome nao poderá ser composto como Santa Catarina):\n");
    scanf ("%s, &nomeCidade");

    printf ("Digite a População da cidade escolida: \n");
    scanf ("%d, &populacao");
    
    printf ("Digite a área em Km2: \n");
    scanf ("%f, &area");

    printf ("Digite o valor do PIB:\n");
    scanf ("%f, &pib");

    printf ("Digite o numero de pontos turisticos:\n");
    scanf ("%d, &pontoTu");


    // Fim da coleta de dados para a primeira carta
    // Seguimos para a coleta de dados para a segunda carta do jogo 

    printf ("Muito bem! Agora seguimos para a segunda carta do jogo, vamos lá?\n");
    
    // Para que não conflite dados da primeira carta com a da segunda, duplicamos a primeira letra das variaveis para
    // representar a segunda carta

    /*
    printf ("Digite um numero para representar o codigo da 2ª carta  ( numero de 01 a 04 ):\n");
    scanf ("%s, &ccodigo");

    printf ("Digite o nome da cidade (O nome nao poderá ser composto como Santa Catarina):\n");
    scanf ("%s, &nnomeCidade");

    printf ("Digite a População da cidade escolida: \n");
    scanf ("%d, &ppopulacao");
    
    printf ("Digite a área em Km2: \n");
    scanf ("%f, &aarea");

    printf ("Digite o valor do PIB:\n");
    scanf ("%f, &ppib");

    printf ("Digite o numero de pontos turisticos:\n\n");
    scanf ("%d, &ppontoTu");

    */
    printf ("Seguimos com as seguintes cartas:\n\n");

    printf ("Carta 1\n Estado: A\n Codigo: A%s \n", codigo);
    printf ("Nome da cidade: %s \n População: %d \n Área: %f \n PIB: %f \n Numero de pontos turisticos: %d \n", nomeCidade, populacao, area, pib, pontoTu);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;

}

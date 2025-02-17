#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Victão

int main() {
    char A01_Nome_Cidadade[30]; //O usuário irá digitar o nome da Cidade.
    int A01_Populacao; // O Usuário irá digitar a população total da cidade.
    int A01_Area_Cidade; // O usuário ira digitar a área total da cidade.
    int A01_PIB; // O usuário irá digitar o valor do produto interno Bruno da cidade.
    int A01_Pontos_turisticos; // O usuário irá digitar a quantidades de pontos turísticos na cidade.
    
        printf("País: Brasil\n"); // Esse comando irá mostrar na tela o nome do Primeiro País.
        printf("Estado A, cidade 01, código da carta = A01\n");// Esse comando irá mostrar na tela o código da primeira cidade do primeira País.
        printf("Digite o nome da Cidade: \n");// Esse comando é responsável para indicar que o usuário deve digitar o nome da cidade.
        scanf("%s" , &A01_Nome_Cidadade); // Esse comando é responsável por armazenar o nome da cidade na variável A01_Nome_Cidade.
        printf("Qual a população total da cidade? \n");// Esse comando é responsável para indicar que o usuário escreva na tela qual é a população total da cidade.
        scanf("%d", &A01_Populacao); //---//---
        printf("Qual a área total da Cidade em KM^2? \n");//---//---
        scanf("%d", &A01_Area_Cidade);//---//---
        printf("Qual o valor do PIB da cidade?\n");//---//---
        scanf("%d" , &A01_PIB);//---//---
        printf("Qual é a quantidade de pontos turísticos existentes na cidade?\n");//---//---
        scanf("%d", &A01_Pontos_turisticos);//---//---

        printf("País: Brasil\n"); // Esse comando escreve na tela o nome do País.
        printf("Código: A01\n"); // Esse comando escreve na tela código da cidade.
        printf("Nome da cidade %s\n", A01_Nome_Cidadade);// Esse comando mostra na tela a informação da cidade que o usuário escreveu.
        printf("População %d\n", A01_Populacao);//Esse comando mostra na tela a informação da População que o usuário escreveu.
        printf("Área territorial e KM^2 %d\n", A01_Area_Cidade);//Esse comando mostra na tela a informação da área da cidade que o usuário escreveu.
        printf("Valor do PIB em R$ %d\n", A01_PIB);//Esse comando mostra na tela a informação do PIB que o usuário escreveu.
        printf("Quantidade de pontos turísticos da cidade: %d\n", A01_Pontos_turisticos);//Esse comando mostra na tela a informação de pontos turísticos da cidade que o usuário escreveu.




        


    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

/*
 ================= Criando as Cartas do Super Trunfo =============
 > Estado: Uma letra de 'A' a 'H'. Tipo: char
 > Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string) 
 > Nome da Cidade. Tipo: char[] (string) 
 > População. Tipo: int 
 > Área (em km²). Tipo: float 
 > PIB. Tipo: float
 > Número de Pontos Turísticos. Tipo: int
*/

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

char UF1, UF2;
char nomeCidade1[50],nomeCidade2[50],CodUF1[5],CodUF2[5];
float Area1, Area2, PIB1, PIB2;
int Populacao1, Populacao2, Turistico1, Turistico2;

int main() {
  //Solicita a entrada dos dados da 1ª Carta e depois repete solicitando os da 2ª Carta
  for (int i = 0; i < 2; i++) {
    printf("\nDigite a Inicial do Estado %d: ", i + 1);
    fflush(stdin);
    if (i == 0) {
      scanf("%c", &UF1);
    } else {
      scanf("%c", &UF2);
    }

    printf("\nDigite o Codigo da Carta %d: ", i + 1);
    fflush(stdin);
    if (i == 0) {
      scanf("%s", &CodUF1);
    } else {
      scanf("%s", &CodUF2);
    }

    printf("\nDigite o Nome da Cidade %d (Utilize _ Ex: Sao_Paulo): ", i + 1);
    fflush(stdin);
    if (i == 0) {
      scanf("%s", &nomeCidade1);
    } else {
      scanf("%s", &nomeCidade2);
    }

    printf("\nDigite o Tamanho da Populacao da Cidade %d: ", i + 1);
    fflush(stdin);
    if (i == 0) {
      scanf("%d", &Populacao1);
    } else {
      scanf("%d", &Populacao2);
    }

    printf("\nDigite a Area (em km^2) da Cidade %d: ", i + 1);
    fflush(stdin);
    if (i == 0) {
      scanf("%f", &Area1);
    } else {
      scanf("%f", &Area2);
    }

    printf("\nDigite o PIB da Cidade %d: ", i + 1);
    fflush(stdin);
    if (i == 0) {
      scanf("%f", &PIB1);
    } else {
      scanf("%f", &PIB2);
    }

    printf("\nDigite o Numero de Pontos Turisticos da Cidade %d: ", i + 1);
    fflush(stdin);
    if (i == 0) {
      scanf("%d", &Turistico1);
    } else {
      scanf("%d", &Turistico2);
    }
  }
  /*
    Carta 1:
    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50
  */

  //Após pegar todos os dados das 2 cartas, apresenta na tela todas as inforçaões formatadas de ambas as cartas
  for (int i = 0; i < 2; i++) {
    printf("\nCarta %d: ", i + 1);
    if (i == 0) {
      printf("\nEstado: %c", UF1);
      printf("\nCodigo: %s", CodUF1);
      printf("\nNome da Cidade: %s", nomeCidade1);
      printf("\nPopulacao: %d", Populacao1);
      printf("\nArea: %.2f km^2", Area1);
      printf("\nPIB: %.2f Bilhoes de R$", PIB1);
      printf("\nNum. de Pontos Turisticos: %d\n", Turistico1);
    } else {
      printf("\nEstado: %c", UF2);
      printf("\nCodigo: %s", CodUF2);
      printf("\nNome da Cidade: %s", nomeCidade2);
      printf("\nPopulacao: %d", Populacao2);
      printf("\nArea: %.2f km^2", Area2);
      printf("\nPIB: %.2f Bilhoes de R$", PIB2);
      printf("\nNum. de Pontos Turisticos: %d\n", Turistico2);
    }
  }
  return 0;
} 

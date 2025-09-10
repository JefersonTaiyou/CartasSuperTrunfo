/*
 ================= Criando as Cartas do Super Trunfo =============
 > Estado: Uma letra de 'A' a 'H'. Tipo: char
 > Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string) 
 > Nome da Cidade. Tipo: char[] (string) 
 > População. Tipo: int 
 > Área (em km²). Tipo: float 
 > PIB. Tipo: float
 > Número de Pontos Turísticos. Tipo: int


 ---- MUDANÇA NIVEL INTERMEDIARIO
 > Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
 
 > Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
 
 > Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.
*/

#include <stdio.h>

char UF1, UF2;
char nomeCidade1[50],nomeCidade2[50],CodUF1[5],CodUF2[5];
float Area1, Area2, PIB1, PIB2, DensPop1, DensPop2, PIBC1, PIBC2;
int Populacao1, Populacao2, Turistico1, Turistico2;

int main(){
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
    Densidade Populacional: 8102.47 hab/km²
    PIB per Capita: 56724.32 reais
  */

  ;

  for (int i = 0; i < 2; i++) {
    printf("\nCarta %d: ", i + 1);
    if (i == 0) {
      DensPop1 = (float)Populacao1 / Area1;
      /*
        Porque eu estou multiplicando PIB1 * 1e9??
        durante os testes, eu percebi que estava tudo funcionando certinho,
        no entando o valor de PIBC que era a conta, estava retornando 0
        a principio achei q era erro, porem analisando bem a conta,
        percebi que PIB estava sendo recebido como centena, sendo que era bilhoes
        portanto, na hora da divisão de centena por milhão da população, ele acabava zerando
        ai eu pesquisei como converter para bilhões o valor digitado no scanf e encontro esse 1e9 e deu certo
      */
      PIBC1 = (float)(PIB1 *= 1e9) / (Populacao1);
      printf("\nEstado: %c", UF1);
      printf("\nCodigo: %s", CodUF1);
      printf("\nNome da Cidade: %s", nomeCidade1);
      printf("\nPopulacao: %d", Populacao1);
      printf("\nArea: %.2f km^2", Area1);
      printf("\nPIB: %.2f Bilhoes de R$", PIB1);
      printf("\nNum. de Pontos Turisticos: %d\n", Turistico1);
      printf("\nDensidade Populacional: %.2f hab/km^2", DensPop1);
      printf("\nPIB per Capita: %.2f R$\n", PIBC1);
    } else {
      DensPop2 = (float)Populacao2 / Area2;
      PIBC2 = (float)(PIB2 *= 1e9) / Populacao2;
      printf("\nEstado: %c", UF2);
      printf("\nCodigo: %s", CodUF2);
      printf("\nNome da Cidade: %s", nomeCidade2);
      printf("\nPopulacao: %d", Populacao2);
      printf("\nArea: %.2f km^2", Area2);
      printf("\nPIB: %.2f Bilhoes de R$", PIB2);
      printf("\nNum. de Pontos Turisticos: %d\n", Turistico2);
      printf("\nDensidade Populacional: %.2f hab/km^2", DensPop2);
      printf("\nPIB per Capita: %.2f R$\n", PIBC2);
    }
  }
  return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // variáveis 
  char estado;
  char codigo[4];
  char nomeCidade[50];
  int população;
  float area;
  float pib;
  int pontosTuristicos;

  // entrada de dados
  printf("Digite o estado (A-H): \n");
  scanf(" %c", &estado);
  
  printf("Digite o codigo da carta: \n");
  scanf("%3s", codigo);

  printf("Digite o nome da cidade: \n");
  scanf("%49s", nomeCidade);

  printf("Digite a popução: \n");
  scanf("%d", &população);

  printf("Digite a Area: \n");
  scanf("%f", &area);

  printf("Digite o PIB: \n");
  scanf("%f", &pib);

  printf("Digite o numero de pontos turisticos: \n");
  scanf("%d", &pontosTuristicos);

  printf("\n=== CARTA CADASTRADA ===\n");
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Cidade: %s\n", nomeCidade);
  printf("População: %d\n", população);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões\n", pib);
  printf("Pontos Turísticos: %d\n", pontosTuristicos);

  // Área para exibição dos dados da cidade

return 0;
} 

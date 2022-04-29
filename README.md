// ################
// # EXERCICIO 01 #
// ################ 

#include <stdlib.h>
#include <stdio.h>

// Estrutura criada da matriz em struct para manipulacao utilizando TAD
struct matriz{

  int linha;
  int coluna;
  float* valor;

};

// O que faz e para utilizar nesse contexto?
typedef struct matriz Matriz;

// Funcao de criacao de uma Matriz utilizando TAD.
// Observe a funcao e explique o funcionamento da criacao da matriz utilizando TAD? 
Matriz* cria(int m, int n){

  Matriz* mat = (Matriz*)malloc(sizeof(Matriz));

  if (mat == NULL){
    printf("Memoria insuficiente!\n");
    exit(1);
  }

  mat->linha = m;
  mat->coluna = n;
  mat->valor = (float*)malloc(m*n*sizeof(float));

  return mat;

}

// Observe a funcao e explique o funcionamento? 
void libera(Matriz* mat){

  free(mat->valor);
  free(mat);

}

// Observe a funcao e explique o funcionamento?
float acessa(Matriz* mat, int i, int j) {

  int k;

  if (i < 0 || i >= mat->linha || j < 0 || j >= mat->coluna) {
    printf("Acesso invalido!\n");
    exit(1);
  }

  k = i * mat->coluna + j;

  return mat->valor[k];

}

// Observe a funcao e explique o funcionamento?
void atribui(Matriz* mat, int i, int j, float valor) {

  int k;

  if (i < 0 || i >= mat->linha || j < 0 || j >= mat->coluna) {
    printf("Atribuicao invalida!\n");
    exit(1);
  }

  k = i * mat->coluna + j;

  mat->valor[k] = valor;

}

// Observe a funcao e explique o funcionamento?
int linhas(Matriz* mat){

  return mat->linha;

}

// Observe a funcao e explique o funcionamento?
int colunas(Matriz* mat){

  return mat->coluna;

}

/*
  Implemente a main de forma que todas as funcoes sejam utilizadas amplamente pelo usuario.
  Dados do tipo float.
  Ao executar o programa deve ser solicitado ao usuario se deseja criar a matriz: 
    SIM: 
      -Executar a funcao de criacao da matriz.
      -Em seguida deve abrir um menu que permita utilizar amplamente as demais funcoes.
      -Implemente uma opcao/funcao que imprime somente os valores da diagonal secundaria, 
       essa opcao somente pode funcionar se for quadrada quando a quantidade de linhas 
       e colunas sao iguais.
      -Implemente uma opcao/funcao que imprime as quatro extremidades da matriz.
      -O programa devera executar ate que o usuario escolha a opcao sair, liberando a memoria e encerrando a execucao do programa.
    NAO: 
      -Encerrar a execucao do programa.
  */



// ################
// # EXERCICIO 02 #
// ################ 

// Implemente a mesma estrutura de matriz de ponteiros de ponteiros utilizando TADs.

  /*
  Implemente a main de forma que todas as funcoes sejam utilizadas amplamente pelo usuario.
  Dados do tipo int.
  Ao executar o programa deve ser solicitado ao usuario se deseja criar a matriz: 
    SIM: 
      -Executar a funcao de criacao da matriz.
      -Em seguida deve abrir um menu que permita utilizar amplamente as demais funcoes.
      -Implemente uma opcao/funcao que imprime somente os valores da diagonal secundaria, 
       essa opcao somente pode funcionar se for quadrada quando a quantidade de linhas 
       e colunas sao iguais.
      -Implemente uma opcao/funcao que imprime as quatro extremidades da matriz.
      -O programa devera executar ate que o usuario escolha a opcao sair, liberando a memoria e encerrando a execucao do programa.
    NAO: 
      -Encerrar a execucao do programa.
  */

// ################
// # EXERCICIO 03 #
// ################

Baseando no exercicio de matriz, criar um algoritmo de TADs para vetor. 

#include <stdio.h>
#include <stdlib.h>

struct matriz{

  int linhas;
  int colunas;
  float* valor;

};

typedef struct matriz Matriz;

Matriz* cria(int m, int n){

  Matriz* mat = (Matriz*)malloc(sizeof(Matriz));
    
  mat->linhas = m;
  mat->colunas = n;
  mat->valor = (float*)malloc(m * n * sizeof(float));

  return mat;

}

void libera(Matriz* mat){

  free(mat->valor);
  free(mat);

}

float acessa(Matriz* mat, int i, int j) {

  int k;
  k = i * mat->colunas + j;
  return mat->valor[k];

}

void atribui(Matriz* mat, int i, int j, float valor) {

  int k;
  k = i * mat->colunas + j;
  mat->valor[k] = valor;

}

int linhas(Matriz* mat){

  return mat->linhas;

}

int colunas(Matriz* mat){

  return mat->colunas;

}

int main(){
	
	
	
	
	int qtda_linhas , qtda_colunas;
	char resposta;
    Matriz* m1;
    
	printf("Deseja criar um matriz?");
	scanf("%c", &resposta);
    
    while ( resposta == 's' || resposta == 'S'){
    	    
    	printf("Quantidade de Linhas: ");
    	scanf("%d", &qtda_linhas);
    	printf("Quantidade de Colunas: ");
    	scanf("%d", &qtda_colunas);
    
		m1 = cria(qtda_linhas, qtda_colunas);
	
		int i, j;
		float valor;
	
		for(i = 0; i < qtda_linhas ; i++){
			for(j = 0; j < qtda_colunas; j++){
				printf("Digite o valor da posicao (%d,%d): ", i, j);
				scanf("%f", &valor);
				atribui(m1, i , j, valor);
			}
		}

		for(i = 0; i < qtda_linhas ; i++){
			for(j = 0; j < qtda_colunas; j++){
				printf("Digite o valor da posicao (%d,%d): ", i, j, acessa(m1,i,j));
				scanf("%f", &valor);
				atribui(m1, i , j, valor);
			}
		}
		printf("Gostaria de criar outra matriz? (S/N)");
		scanf("%c", &resposta);
	}
    

	
	
	
	printf("\nQuantidade de linhas %d", linhas(m1));
	printf("\nQuantidade de colunas %d", colunas(m1));
	
	libera(m1);
}











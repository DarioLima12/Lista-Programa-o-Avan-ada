#include<stdio.h>
#include<locale.h>
#include "gc.h"

int main (void){

	int **a, **b, **res, linhaA, colunaA, colunaB, i, j, k;
	
	printf("Quantidade - linhas: ");
	scanf("%d", &linhaA);
	colunaB = linhaA;
	
	printf("Quantidade - colunas: ");
	scanf("%d",&colunaA);
	printf("\n\n");	
	
	a = GC_malloc_ATOMIC(linhaA*sizeof(int*));
	a[0] = GC_malloc_ATOMIC(colunaA*linhaA*sizeof(int*));
	for (i = 1; i< linhaA; i++){
  	a[i] = a[i-1] + colunaA;
	}
	
	b = GC_malloc_ATOMIC(colunaA*sizeof(int*));
	b[0] = GC_malloc_ATOMIC(colunaA*colunaB*sizeof(int));
	for (i = 1; i< colunaA; i++){
  	b[i] = b[i-1] + colunaB;
	}
	
	res = GC_malloc_ATOMIC(linhaA*sizeof(int*));
	res[0] = GC_malloc_ATOMIC(linhaA*colunaB*sizeof(int));
	for (i = 1; i< linhaA; i++){
  	res[i] = res[i-1] + colunaB;
	}
	
	printf("Preencha:\n");
	for (i = 0; i<linhaA; i++){
  		for (j =0; j<colunaA; j++){
  			printf("a[%d][%d]: ", i, j);
  			scanf("%d", &a[i][j]);
  		}
	}
	
		printf("\n\n");
	for (i = 0; i<colunaA; i++){
  		for (j =0; j<colunaB; j++){
  			printf("b[%d][%d]: ", i, j);
  			scanf("%d", &b[i][j]);
  		}
	}
		
	for (i = 0; i<linhaA; i++){
  		for (j =0; j<colunaB; j++){
  			res[i][j] = 0;
		}			  
	}
	
	for (i = 0; i<linhaA; i++){
  		for (j =0; j<colunaB; j++){
    		for(k = 0; k<colunaA; k++){
    		 res[i][j] = a[i][k]*b[k][j]+res[i][j];

    		}
  		}
	}
	printf("\n\n");
	printf("Matriz 1:\n");
	for ( i = 0; i<linhaA; i++){
  	for ( j =0; j<colunaA; j++){
    printf("Matriz 1[%d][%d] = %d\n", i,j, a[i][j]);
  	}
	}
	printf("\n\n");
	printf("\nMatriz 2:\n");
	for ( i = 0; i<colunaA; i++){
  	for ( j =0; j<colunaB; j++){
    printf("Matriz 2[%d][%d] = %d\n", i,j, b[i][j]);
  	}
	}
	printf("\n\n");
	printf("\nMatriz 3:\n");
	for ( i = 0; i<linhaA; i++){
  	for ( j =0; j<colunaB; j++){
    printf("Resultado[%d][%d] = %d\n", i,j, res[i][j]);
  	}
	}
	
}

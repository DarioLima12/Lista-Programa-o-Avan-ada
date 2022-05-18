#include<stdio.h>
#include<stdlib.h>

int c(const void *a, const void *b){
  if ( *(float*)a <  *(float*)b ){
  	return -1;
  } 
  if ( *(float*)a == *(float*)b ){
  	return 0;
  } 
  if ( *(float*)a >  *(float*)b ){
  	return 1;
  } 
}

void qsort2(float *x, int q, int(*c)(float *a, float *b)){
	int i, j;
	float aux = 0;
	
	for(i = 0; i < q; i++){
		for(j = 0; j < q; j++){
			if(c(x+i,x+j)>0){
				aux = x[j];
				x[j] = x[i];
				x[i] = aux;
			}}}}

int main(void){
	
	float *p; 
	int i, q;
	
	printf("Quantidade: ");
	scanf("%d", &q);
	
	p = malloc(q*sizeof(float)); 
	 
	for(i = 0; i<q; i++){
		 p[i] =  (rand()%50)/3.33;
	}
	
	qsort2(p, q, c);
	
	for(i = q; i >= 0; i--){
		printf("%.2f ", p[i]);
	}
	
	free(p);
	
}


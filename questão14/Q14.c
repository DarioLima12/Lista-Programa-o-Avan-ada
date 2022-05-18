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


int main(void){
	
	float *p;
	int i, q;
	
	printf("Quantidade: ");
	scanf("%d", &q);
	
	p = malloc(q*sizeof(float));

	for(i = 0; i<q; i++){ 
		 
		p[i] =  (rand()%50)/3.33;
	}
	
	qsort(p, q, sizeof(float), c);
	
	for(i = 0; i<q; i++){
		printf("%.2f ", p[i]);
	}
	
	free(p);
	
}


#include<stdio.h>
#include<stdlib.h>
#include <time.h>

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
	clock_t m[2];
	
	float *p; 
	int i, q;
	
	m[0] = clock();
	
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
	
	m[1] = clock();
	double t = (m[1] - m[0]) * 1000.0 / CLOCKS_PER_SEC;
	printf("\nTempo: %gms", t);
	getchar();
	
	
}

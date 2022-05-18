#include <stdio.h>
#include <stdlib.h>
#include "gc.h"
#include <assert.h>
#include <time.h>

#define q 100000

int main(){

int i, **x, **y;
	clock_t a;
	clock_t b;

	a = clock();
    for(i = 0; i < q; i++){
    y = GC_MALLOC(sizeof(int));}
			
	b = clock() - a;
	printf ("com a libgc: %f s\n",((float)a)/CLOCKS_PER_SEC);

	a = clock();
    for(i = 0; i < q; i++){
    x = malloc(sizeof(int));
    free(x);  }
    
	b = clock() - b;
	printf ("Sem a libgc: %f s\n",((float)b)/CLOCKS_PER_SEC);
		
	return 0;
 }

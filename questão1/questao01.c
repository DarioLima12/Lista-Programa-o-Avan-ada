#include <stdio.h>

int main () {
	
	int i=3, j=5, r, n, m;
	int *p, *q;
	
	p = &i;
	q = &j;
	
		p == &i;
		printf("\n\t%d\n", &i);
		
		r = *p - *q; 
		printf("\n\t%d\n", r);
		
		n = **&p;
		printf("\n\t%d\n", n);
		
		m = 3-*p/(*q)+7;
		printf("\n\t%d", m);
}

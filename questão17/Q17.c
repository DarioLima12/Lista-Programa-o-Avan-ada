#include<stdio.h>

int main (){
	
	int q, i, *v1, *v2, *res;
	char v1c[10], v2c[10];
	
	printf("Quantidade: ");
	scanf("%d", &q);
	
	v1 = malloc(q*sizeof(int));
	v2 = malloc(q*sizeof(int));
	res = malloc(q*sizeof(int));
	
		printf("Nome v1: ");
		scanf("%s", v1c);
		
		printf("Nome v2: ");
		scanf("%s", v2c);
	
	
	printf("\n");
	for(i = 0; i < q; i++){
		printf("Preencha v1[%d]: ", i);
		scanf("%d", &v1[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < q; i++){
		printf("Preencha v2[%d]: ", i+1);
		scanf("%d", &v2[i]);
	}
	
	printf("\n");
	
	printf("%s: ", v1c);
	for(i = 0; i < q; i++){
		printf("%d ", v1[i]);
	}
	
	printf("\n");
	
	printf("%s: ", v2c);
	for(i = 0; i < q; i++){
		printf("%d ", v2[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < q; i++){
		res[i] = v1[i] + v2[i];
	}
	
	printf("Resultado: ");
	for(i = 0; i < q; i++){
		printf("%d ", res[i]);
	}
	
	free(v1);
	free(v2);
	free(res);
	
	return 0;
}

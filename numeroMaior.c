#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, aux = 0, length = 10;
	int vet[length];

	printf("Digite um numero: ");
	scanf("%d", &vet[0]);
	aux = vet[0];

	for(i = 0; i < length; i++){
		printf("\nDigite um numero: ");
		scanf("%d",&vet[i]);	
		if(vet[i] > aux){
			aux = vet[i];
		}
	}

	for(i = 0; i < length; i++){
		if(i == length - 1) {
			printf("%d\n",vet[i]);
		}else {
			printf("%d, ",vet[i]);
		}
	}

	printf("\nO maior numero dessa sequencia e %d\n", aux);
	return 0;
}

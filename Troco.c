#include <stdio.h>
#include <stdlib.h>

void change(int C[], int valor) {
	int *S;
	int soma = 0;
	int iC=0;
	int i=0;
	int x = 0;

	S = (int *)malloc(10 * sizeof(int));

	while((soma < valor) && (C != NULL) ) {
		x = C[iC];

		if( (soma+x) <= valor ) {
			soma = soma + x;
			S[i] = x;
			i++;
		} else {
			iC++;
		}
	}

	if(soma == valor) {
		int j;
		for(j=0;j<i;j++) {
			printf("%d ", S[j]);
		}
	} else {
		printf("não foi possivel");
	}

	iC=0;
	i=0;
}

int main() {
	int C[] = {100,50,25,10,1};
	change(C,10);
}

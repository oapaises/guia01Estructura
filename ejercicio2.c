#include<stdio.h>
int main (){
	int f, c, tamanio;
	printf("Ingrese el tamaño de las matrices cuadradas N*N : ");
	scanf("%d", & tamanio );
	int a [tamanio][tamanio];
	int b [tamanio][tamanio];	
	printf("\nLLENADO DE MATRIZ A \n");
	for(f=0; f<tamanio;f++){
		for(c=0; c<tamanio; c++){
			printf("Ingrese un valor: ");
			scanf("%d", & a[f][c]);	
		}
	}
	printf("\n MATRIZ A \n");
	for(f=0; f<3;f++){
		printf("\n");
		for(c=0; c<3; c++){
			printf("%d\t", a[f][c]);
		}
	}
	for(f=0; f<3;f++){
		for(c=0; c<3; c++){
			b[c][f]=a[f][c];
		}
	}
	printf("\n MATRIZ B\n");
	for(f=0; f<3;f++){
		printf("\n");
		for(c=0; c<3; c++){
			printf("%d\t", b[f][c]);
		}
	}
	return 0;
	}

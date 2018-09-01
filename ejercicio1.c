#include<stdio.h>
int main (){
	int f, c,col, tamanio, producto,suma;
	printf("Ingrese el tamaño de las matrices cuadradas N*N : ");
	scanf("%d", & tamanio );
	int a [tamanio][tamanio];
	int b [tamanio][tamanio];	
	int p [tamanio][tamanio];	
	printf("\nLLENADO DE MATRIZ A \n");
	for(f=0; f<tamanio;f++){
		for(c=0; c<tamanio; c++){
			printf("Ingrese un valor: ");
			scanf("%d", & a[f][c]);	
		}
	}
	printf("\nLLENADO DE MATRIZ B \n");
	for(f=0; f<tamanio;f++){
		for(c=0; c<tamanio; c++){
			printf("Ingrese un valor: ");
			scanf("%d", & b[f][c]);	
		}
	}
	printf("\n MATRIZ A \n");
	for(f=0; f<tamanio;f++){
		printf("\n");
		for(c=0; c<tamanio; c++){
			printf("%d\t", a[f][c]);
		}
	}
	printf("\n MATRIZ B \n");
	for(f=0; f<tamanio;f++){
		printf("\n");
		for(c=0; c<tamanio; c++){
			printf("%d\t", b[f][c]);
		}
	}
	for(col=0; col<tamanio; col++){
		for(f=0; f<tamanio;f++){
			suma=0;
			for(c=0; c<tamanio; c++){
				producto=0;
				producto=(a[col][c])*(b[c][f]);
				suma=suma+producto;
				p[col][f]=suma;
			}
		}
	}
	printf("\nPRODUCTO DE LA MATRIZ A * MATRIZ B \n");
	for(f=0; f<tamanio;f++){
		printf("\n");
		for(c=0; c<tamanio; c++){
			printf("%d\t", p[f][c]);
		}
	}
	return 0;
}

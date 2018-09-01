#include<stdio.h>
int main (){
	int f, c, tamanio,suma=0;
	printf("Ingrese el tamaño de las matrices cuadradas N*N : ");
	scanf("%d", & tamanio );
	int a [tamanio][tamanio];
	printf("\nLLENADO DE MATRIZ \n");
	for(f=0; f<tamanio;f++){
		for(c=0; c<tamanio; c++){
			printf("Ingrese un valor: ");
			scanf("%d", & a[f][c]);	
		}
	}
	printf("\n MATRIZ  \n");
	for(f=0; f<tamanio;f++){
		printf("\n");
		suma=0;			
		for(c=0; c<tamanio; c++){
			suma=suma+(a[f][c]);
			printf("%d\t", a[f][c]);
		}		
		printf("%d ", suma);
		}
	printf("\n");	
	for(c=0; c<tamanio; c++){ 
		suma=0; 
		for(f=0; f<tamanio; f++){ 
			suma=suma+(a[f][c]); 
		} 
		 printf("%d\t", suma);
	} 
	suma=0;
	for(f=0; f<tamanio; f++){
			suma= suma+(a[f][f]);	
		}
		printf("%d      ", (suma));
}

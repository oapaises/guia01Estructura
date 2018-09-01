#include<stdio.h>
int main (){
	int  lugar, opcion, dato;
	int vector[20];
	for(int i=0; i<20; i++){
		vector[i]=0;
	}
	while(opcion!=5){
		printf("\n");
		printf("Ingrese la opcion que desea realizar: \n");
		printf("1. Agregar un dato a la posición que desee el usuario.\n");
		printf("2. Buscar un valor en el vector y que muestre la posición en la que esta.\n");
		printf("3. Editar\n");
		printf("4. Eliminar.\n");
		printf("5. Salir.\n");
		scanf("%d", & opcion);
		if(opcion==1){
			printf("Ingrese en que lugar desea ingresar el dato entre 1 y 20: \n");
			scanf("%d", & lugar);
			printf("\n");
			printf("Ingrese el valor a ingresar: ");
			scanf("%d", & vector[lugar-1]);
			for(int i=0; i<20; i++){
				printf("%d", vector[i]);
				printf(",");
			}
		}else if(opcion==2){
			printf("Ingrese el dato que desea buscar: \n");
			scanf("%d", & dato);
			printf("\n");
			for(int posicion=0; posicion<20; posicion++){
				if(vector[posicion]==dato){
				printf("La posicion del dato buscado: %d", dato);
				printf(" es: %d", (posicion));
				}
			}
		}else if(opcion==3){
			printf("Ingrese que posicion desea editar un dato entre 1 y 20: \n");
			scanf("%d", & lugar);
			printf("\n");
			printf("Ingrese el valor a ingresar: ");
			scanf("%d", & vector[lugar-1]);
			for(int i=0; i<20; i++){
				printf("%d", vector[i]);
				printf(",");
			}	
		}else if(opcion==4){
			printf("Ingrese en que posicion desea eliminar un dato entre 1 y 20: \n");
			scanf("%d", & lugar);
			vector[lugar-1]=0;
			for(int i=0; i<20; i++){
				printf("%d", vector[i]);
				printf(",");
			}
		}
	}
}

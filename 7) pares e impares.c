#include <stdio.h>


int main() {
    
    int cantidad, i, pares = 0, impares = 0,numeros[cantidad];

	printf("Ingrese el largo del vector: ");
    	scanf("%d", &cantidad);	
    	
    
    for(i = 0; i < cantidad; i++){
    	
    	printf("Ingrese los numeros: ");
        	scanf("%d", &numeros);
        	
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Cantidad de numeros ingresados: %d\n", cantidad);
    printf("Cantidad de numeros pares: %d\n", pares);
    printf("Cantidad de numeros impares: %d\n", impares);

    return 0;
}

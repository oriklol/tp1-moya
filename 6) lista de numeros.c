#include <stdio.h>

int es_primo(int numero, int i){
    if(numero <= 1)
        return 0;
    for(i = 2; i < numero / 2; i++){
        if(numero % i == 0){
            return 0; 
		}
		else{
			return 1;
		}
    }
    
}

int main(){
	int cantidad, numero, cantidad_primos = 0, no_primos = 0, i;

	printf("Ingrese el largo del vector: ");
    	scanf("%d", &cantidad);	


    for( i = 0; i < cantidad; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        	scanf("%d", &numero);

        if(es_primo(numero, i)){
            cantidad_primos++;
		}
        else{
            no_primos++;
		}
    }
    
    printf("a) La cantidad de numeros ingresados: %d\n", cantidad);
    printf("b) La cantidad de numeros que son primos: %d\n", cantidad_primos);
    printf("c) La cantidad de numeros que no son primos: %d\n", no_primos);
	
	return 0;    

}

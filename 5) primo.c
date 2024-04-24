#include <stdio.h>

void primo(){
    int numero;
    int primo;
    int i;
    int chorcho;
    
    printf("Ingrese un numero para saber si es primo: ");
    	scanf("%d", &numero);


	if(numero <= 0){
		printf("El mumero no es primo");
	}
	
	for (i = 2; i < numero / 2; i++){
		if (numero % i == 0){
			primo = 0;
		}
		else{
			primo = 1;
		}
	}
	
	if(primo==1){
		printf("El numero es primo");
	}
	else{
		printf("El numero no es primo");
	}
	
}

int main(){
	
	primo();
	return 0;
}

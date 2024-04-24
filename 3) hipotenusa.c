#include <stdio.h>
#include <math.h>

void hipotenusa(){
	int cat_A;
	int cat_B;
	int cat_C;
	float resultado;
	
	printf("Ingrese el valor del cateto A: ");
		scanf("%d", &cat_A);
			
	
	printf("Ingrese el valor del cateto B: ");
		scanf("%d", &cat_B);
			
	
	resultado = sqrt(pow(cat_A, 2) + pow(cat_B, 2));
	
	printf("La hipotenusa de los catetos: %d %d. Es: %f", cat_A, cat_B, resultado);
		
	
}




int main(){
	hipotenusa();
	return 0;
}

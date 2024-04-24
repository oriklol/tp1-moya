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

void cateto(){
	int hipotenusa;
	int cateto;
	float resultado;

	printf("Ingrese el valor de la hipotenusa: ");
		scanf("%d", &hipotenusa);
			
	
	printf("Ingrese el valor del cateto: ");
		scanf("%d", &cateto);
		
	resultado = sqrt(hipotenusa * hipotenusa - cateto * cateto);
	
	printf("Los catetos son: %d %f.\n", cateto, resultado);
	printf("La hipotenusa es: %d", hipotenusa);

}


int main(){
	
	int data;
	
	printf("1. Hipotenusa \n2. Cateto \n Que desea saber:");
		scanf("%d", &data);
	
	if(data==1){
		hipotenusa();
	}
	else{
		cateto();
	}
	
return 0;
}

#include <stdio.h>

void verificar_votacion(){
    char nombre[50];
    char apellido[50];
    char dni[20];
    int d_nac, m_nac, a_nac;

    printf("Ingrese su nombre: ");
    	scanf("%s", nombre);

    printf("Ingrese su apellido: ");
    	scanf("%s", apellido);

    printf("Ingrese su DNI: ");
    	scanf("%s", dni);

    printf("Ingrese su fecha de nacimiento: ");
    	scanf("%d %d %d", &d_nac, &m_nac, &a_nac);

    int anio_actual = 2024;
    int edad = anio_actual - a_nac;

    if(edad >= 16){
        printf("Puede votar.\n");
    }
	 
	else{
        printf("No puede votar porque no cumple con los requerimientos necesarios.\n");
    }


    printf("Apellido: %s\n", apellido);
    printf("Nombre: %s\n", nombre);
    printf("DNI: %s\n", dni);
}

int main() {
    verificar_votacion();
    return 0;
}


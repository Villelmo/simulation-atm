/* Program que simula un cajero automático con un saldo inicial de 1000 Dólares */
/* lola */
#include <stdio.h>
#define SALDO_INICIAL 1000

void deposito(int saldo,int agregar){
	printf("\nIngrese la cantidad a depositar");
	scanf("%d",&agregar);	
	saldo = saldo_inicial + agregar;
	printf("\nCantidad disponible en cuenta: %d",saldo);
}

void retiro(int reintegro,int saldo){
	printf("\nCuanta cantidad desea retirar:");
	scanf("%d",&reintegro);
	if(reintegro > 1000){
		printf("La cantidad digitada es mayor a 1000, digite de nuevo la cantidad a retirar");
		scanf("%d",&reintegro);
	}
	saldo = saldo_inicial - reintegro;
	printf("\nCantidad disponible en cuenta: %d ",saldo);
}

void ver_saldo(){
	printf("\nLa cantidad disponible en cuenta es de: %d",saldo_inicial);
}


int main(){
	int opcion;

	printf("\tBienvenido a su cajero Virtual");
	printf("\nEscoja una opción: ");
	printf("\n1. Ingreso en cuenta");
	printf("\n2. Reintegro");
	printf("\n3. Ver saldo de cuenta");
	printf("\n0. Salir");
	printf("\nOpcion: ");
	scanf("%d",&opcion);

	
	if(opcion == 1){
		deposito();
	}else if(opcion == 2){
		retiro();
		
	}else if(opcion == 3){
		ver_saldo();
	}else if(opcion == 0){
		printf("Gracias por utilizar nuestro cajero automatico");
	}else{
		printf("Se equivoco de opcion de menu");
	}

	return 0;
	
}

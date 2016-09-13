/*piscina*/
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
	float L,A,T,largo, ancho, volumen,X,Y,monto;
	int mes;
	printf("ingrese el largo de la piscina: ");
	scanf("%f",&L);
	printf("ingrese el ancho de la piscina: ");
	scanf("%f",&A);
    printf("ingrese  la altura de la piscina: ");
	scanf("%f",&T);
	
	largo=L/1000;
	ancho=A/100;

	volumen=largo*ancho*T;
	printf("\n el volumen de la piscina es: %.2f",volumen);
	
	printf("\n\n ingrese el precio de metro cubico de agua: ");
	scanf("%f",&X);
	
	monto=volumen*X;
	printf("Para llenar la piscina deben cancelar: %.2f \n",monto);
	
	printf("\n\n ingrese la cantidad de agua lluvial registrada en un mes: ");
	scanf("%f",&Y);
	
	mes=volumen/Y;
	printf("meses necesarios para llenar la piscina: %d \n",mes);
	
	return 0;
}

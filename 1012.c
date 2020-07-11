#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main(){
	double A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
	scanf("%lf",&A);
	scanf("%lf",&B);
	scanf("%lf",&C);
	
	TRIANGULO = (A * C) / 2;
	CIRCULO = PI * (C * C);
	TRAPEZIO = ( (A + B) * C) / 2;
	QUADRADO = B * B;
	RETANGULO = A * B;
	
	printf("TRIANGULO: %.3f\n",TRIANGULO);
	printf("CIRCULO: %.3f\n",CIRCULO);
	printf("TRAPEZIO: %.3f\n",TRAPEZIO);
	printf("QUADRADO: %.3f\n",QUADRADO);
	printf("RETANGULO: %.3f\n",RETANGULO);
	
	return 0;
}

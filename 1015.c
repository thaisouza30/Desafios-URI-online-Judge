#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float x1, x2, y1, y2, distancia;
	
	scanf("%f",&x1);
	scanf("%f",&y1);
	scanf("%f",&x2);
	scanf("%f",&y2);
	
	distancia = sqrt ( pow(x2 - x1,2 ) +  pow(y2 - y1,2) );
	
	printf("%.4f\n",distancia);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main(){
	double volume, R;
	 
	scanf("%lf",&R);
	volume = (4/3.0)* PI *(R*R*R);
	printf("VOLUME = %.3f\n",volume);
	return 0;
}

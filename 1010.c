#include <stdio.h>
 
int main() {
 
    int COD1,COD2,QTD1,QTD2;
    double VALOR1,VALOR2,TOTAL;
    
    scanf("%d",&COD1);
    scanf("%d",&QTD1);
    scanf("%lf",&VALOR1);
    scanf("%d",&COD2);
    scanf("%d",&QTD2);
    scanf("%lf",&VALOR2);
    TOTAL = (QTD1*VALOR1)+(QTD2*VALOR2);
    printf("VALOR A PAGAR: R$ %.2lf\n",TOTAL);
    
    return 0;
}

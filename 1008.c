#include <stdio.h>
 
#include <stdio.h>
 
int main() {
    int FUNC,HORAS;
    float VALOR_HORA,SALARIO;
    
    scanf("%d",&FUNC);
    scanf("%d",&HORAS);
    scanf("%f",&VALOR_HORA);
    SALARIO = HORAS * VALOR_HORA;
    printf("NUMBER = %d\n",FUNC);
    printf("SALARY = U$ %.2f\n",SALARIO);
    return 0;
}

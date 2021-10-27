#include<stdio.h>
#include<stdlib.h>

// Folha de pagamento INSS

float calculo(float salario){
      float resultado;    
      if(salario <= 1100.00) {
         resultado = salario * 0.075;
         //salario = salario - resultado;       
      }
      
      if(salario >= 1100.01 && salario <= 2203.48) {
         resultado = salario * 0.09;
      }
      
      if(salario >= 2203.49 && salario <= 3305.22) {
         resultado = salario * 0.12;
      } 
      
      if(salario >= 3305.23) {  // ate 6433.57 mas acima disso tb 
         resultado = salario * 0.14;
      }     
      return resultado;
}

int main(){
    float salario;
    
    printf("Informe seu salario: ");
    scanf("%f", &salario);
    
    printf("Valor de INSS: %.2f", calculo(salario));
    
    printf("\n\n");
    system("pause");
    return 0;
}

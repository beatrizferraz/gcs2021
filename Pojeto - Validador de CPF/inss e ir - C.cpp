#include<stdio.h>
#include<stdlib.h>

// Folha de pagamento INSS + Calculo do Imposto de Renda /e

float calculoINSS(float salario){
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

float calculoIR(float salario) {
      float resultado;
      
      if(salario <= 1903.98) {
         resultado = salario;
      }
      
      if(salario >= 1903.99 && salario <= 2826.65) {
         resultado = salario * 0.075;
      }
      
      if(salario >= 2826.66 && salario <= 3751.05) {
         resultado = salario * 0.15;
      } 
      
      if(salario >= 3751.06 && salario <= 4664.68) { 
         resultado = salario * 0.225;
      } 
      
      if (salario >= 4664.69) { 
         resultado = salario * 0.275;
      }     
      return resultado;

}

int main(){
    float salario;
    
    printf("Informe seu salario: ");
    scanf("%f", &salario);
    
    printf("\nValor do INSS: %.2f", calculoINSS(salario));
    printf("\nValor do IR: %.2f", calculoIR(salario));
    
    printf("\n\n");
    system("pause");
    return 0;
}

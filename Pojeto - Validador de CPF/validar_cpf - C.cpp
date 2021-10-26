#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//8. Solicite um CPF e retorne se o mesmo é ou não válido

char validacao(char cpf[12]){  
    int intcpf[12];  
    int x,digito1,result1,result2,digito2,R,soma=0;  
   
        
    for(x=0;x<11;x++)  
    {  
    intcpf[x]=cpf[x]-48;  
    }  
       
      
    for(x=0;x<9;x++)  
    {  
    soma+=intcpf[x]*(10-x);  
    }  
      
    result1=soma%11;  
      
    if(result1==0 || result1==1)  
    {  
    digito1=0;  
    }  
      
    else  
    {  
    digito1 = 11-result1;  
    }  
        
      
    soma=0;  
      
    for(x=0;x<10;x++)  
    {  
    soma+=intcpf[x]*(11-x);  
    }  
      
    R=(soma/11)*11;  
    result2=soma-R;  
      
    if(result2==0 || result2==1)  
    {  
    digito2=0;  
    }  
      
    else  
    {  
    digito2=11-result2;  
    }  
       
      
    if(digito1==intcpf[9] && digito2==intcpf[10])   
       return 1;
            
    else
       return 0;   
    
}

int main(){
    char CPF[12];
    
    printf("Digite um CPF: ");
    gets(CPF);
    
    printf("\n%d ", validacao(CPF));
    
    if(validacao(CPF)==1)
       printf("\nCPF valido.");
    
    if(validacao(CPF)==0)
       printf("\nCPF invalido.");   
    
    printf("\n\n");
    system("pause");
    return 0;
}

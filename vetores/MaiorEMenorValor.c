/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float vetor[10], maior, menor;
    
    for(int i=0; i<10; i++){
        printf("Digite o %i", i+1);
        printf("º número: ");
       scanf("%f",&vetor[i]);
    }
    menor = vetor[0];
    maior = vetor[1];
    
    for(int i=0; i<10; i++){
       if(vetor[i] > maior){
          maior = vetor[i];
       }if(vetor[i] < menor){
          menor = vetor[i];
       }
    }
    
    printf("\nO maior valor da sequência é: %f", maior);
    printf("\nO menor valor da sequência é: %f", menor);
    
}





/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[8], positivos[8], negativos[8];
    
    for(int i=0; i<8; i++){
        printf("Digite o %i", i+1);
        printf("º número da sequência: ");
       scanf("%i",&vetor[i]);
    }
    
    for(int j=0; j<8; j++){
        if(vetor[j] >= 0){
            positivos[j] = vetor[j];
            negativos[j] = 0;
        }else{
            positivos[j] = 0;
            negativos[j] = vetor[j];
        }
    }
    printf("\nPositivos [");
    for(int z=0; z<8; z++){
        printf("%i", positivos[z]);
        if(z != 7){
            printf(",");
        }
    }
    printf("]");
    
    printf("\nnegativos [");
    for(int z=0; z<8; z++){
        printf("%i", negativos[z]);
        if(z != 7){
            printf(",");
        }
    }
    printf("]");
    
}
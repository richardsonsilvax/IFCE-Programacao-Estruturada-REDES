/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x[10], y[10], xy[20];
    
    for(int i=0; i<10; i++){
        printf("Digite o %i", i+1);
        printf("º valor do vetor 'X': ");
       scanf("%i",&x[i]);
    }
    printf("\n");
    for(int j=0; j<10; j++){
        printf("Digite o %i", j+1);
        printf("º valor do vetor 'Y': ");
       scanf("%i",&y[j]);
    }
    
    for(int z=0; z<20; z++){
        if(z == 10){
            xy[z] = y[z];
        }else{
            xy[z] = x[z];
        }
    }
    printf("VetorXY [");
    for(int a=0; a<20; a++){
        printf("%i", xy[a]);
        if(a != 19){
            printf(",");
        }
    }
    printf("]");
    
}
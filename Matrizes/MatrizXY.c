/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x[10], y[10], xy[2][10];
    
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
    
    for(int i=0; i<2; i++){
        for(int j=0; j<10; j++){
            if(i == 0){
                xy[i][j] = x[j];   
            }else{
                xy[i][j] = y[j];
            }
        }
    }
    printf("\nMatrizXY\n");
    for(int i=0; i<2; i++){
        printf("[");
        for(int j=0; j<10; j++){
            printf("%i", xy[i][j]);
            if(j != 9){
                printf(", ");
            }else{
                printf("]\n");
            }
        }
    }
}
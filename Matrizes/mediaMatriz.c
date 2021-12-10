/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][4], media;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("Digite um valor para a matriz: ");
            scanf("%i",&matriz[i][j]);
            media += matriz[i][j];
        }
    }
    media /= 12;
    printf("\nMedia = %i", media);
}

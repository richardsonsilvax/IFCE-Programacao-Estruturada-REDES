/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float qtdcavalos, qtdferraduras;
    
    printf("Informe a quantidade de cavalos: ");
    scanf("%f", &qtdcavalos);
    
    qtdferraduras = qtdcavalos * 4;
    
    printf("A quantidade de ferraduras nescessárias para equipar todos os cavalos são %f", qtdferraduras);
}
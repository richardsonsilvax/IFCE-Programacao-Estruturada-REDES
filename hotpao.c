/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float qtdpaes, qtdbroas, valor, qtdguardar;
    
    printf("Informe a quantidade de pães vendidas no dia: ");
    scanf("%f", &qtdpaes);
    
    printf("Informe a quantidade de broas vendidas no dia: ");
    scanf("%f", &qtdbroas);
    
    valor = qtdpaes * 0.12 + qtdbroas * 1.5;
    
    qtdguardar = 0.1 * valor;
    printf("O valor total vendido no dia foi de %f", valor);
    printf(" e a quantidade a ser guardada na conta deve ser de %f", qtdguardar);
}
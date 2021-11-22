/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float peso, valor;
    
    printf("Informe o peso do prato em Kg: ");
    scanf("%f", &peso);
    
    valor = peso * 12;
    
    printf("O valor total do prato é de %f", valor);
}
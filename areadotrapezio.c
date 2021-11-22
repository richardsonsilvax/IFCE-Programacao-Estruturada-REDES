/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float bmaior, bmenor, altura, area;
    
    printf("Informe a Altura trapezio: ");
    scanf("%f", &altura);
    
    printf("informe a base maior do trapezio: ");
    scanf("%f", &bmaior);
    
    printf("informe a base menor do trapezio: ");
    scanf("%f", &bmenor);
    
    area = ((bmenor + bmaior) * altura)/2;
    
    printf("A área do terreno é %f", area);
}
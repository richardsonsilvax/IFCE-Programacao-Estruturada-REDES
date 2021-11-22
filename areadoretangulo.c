/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float largura, altura, area;
    
    printf("Informe a Altura do terreno retangular: ");
    scanf("%f", &altura);
    
    printf("informe a largura do terreno retangular: ");
    scanf("%f", &largura);
    while(altura == largura){
        printf("\nOs os dados fornecidos não pertencem a um terreno retangular!!!");
        
        printf("\nInforme a Altura do terreno retangular: ");
        scanf("%f", &altura);
    
        printf("informe a largura do terreno retangular: ");
        scanf("%f", &largura);
    }
    
    area = altura * largura;
    printf("A área do terreno é %f", area);
}
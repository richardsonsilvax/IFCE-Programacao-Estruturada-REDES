/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[2][3], maior, menor;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("Digite um número: ");
            scanf("%i", &matriz[i][j]);
        }
    }
    maior = matriz[0][0];
    menor = matriz[0][1];
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }if(matriz[i][j] < menor){
              menor = matriz[i][j];
            }
        }
    }
    
    printf("\nMaior: %i", maior);
    printf("\nMenor: %i", menor);
}


/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[4][2], negativos[8], positivos[8], aux;
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            printf("Digite um número: ");
            scanf("%i", &matriz[i][j]);
            if(matriz[i][j] > 0){
                positivos[aux] = matriz[i][j];
                negativos[aux] = 0;
                aux++;
            }else{
                negativos[aux] = matriz[i][j];
                positivos[aux] = 0;
                aux++;
            }
        }
    }
    printf("\npositivos [");
    for(int i=0; i<8; i++){
        printf("%i", positivos[i]);
        if(i < 7){
            printf(",");
        }
    }
    printf("]");
    
    printf("\nNegativos [");
    for(int i=0; i<8; i++){
        printf("%i", negativos[i]);
        if(i < 7){
            printf(",");
        }
    }
    printf("]");
    
    
}



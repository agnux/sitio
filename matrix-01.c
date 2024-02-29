#include <stdio.h>
#include "changeRows.h"
/** feb, 29 2024 Donald, Alexandre, はい 
    Alimentação de matrix retangular (3x3)+
**/
 
#define COLS 4
#define ROWS 3

double matrix_A[ROWS][COLS];

int main(void){
   printf("Nosso sistema (3x3)+ possui 3 variáveis de entrada e uma de saída. O sistema possui 3 equações.\n");
   printf("Informe o conjunto de coeficientes matriciais\n");
   for (int i=0; i<ROWS; i++){
      for (int j=0; j<COLS; j++){
         printf("equação %d; variável: %d\n", i, j);
         scanf("%lf", &matrix_A[i][j]);
      }
   }

   for (int i=0; i<ROWS; i++)
      printf("%0.2f - %0.2f  -  %0.2f - %0.2f\n", matrix[i][0], matrix[i][1], matrix[i][2], matrix[i][3]);
}

#include <stdio.h>

double *changeRows(double matrix[3][4], int l1, int l2){
   double aux1, aux2, aux3;
   aux1 = matrix[l1][0];
   aux2 = matrix[l1][1];
   aux3 = matrix[l1][2];
   matrix[l1][0] = matrix[l2][0];
   matrix[l1][1] = matrix[l2][1];
   matrix[l1][2] = matrix[l2][2];
   matrix[l2][0] = aux1;
   matrix[l2][1] = aux2;
   matrix[l2][2] = aux3;
   return *matrix;
}

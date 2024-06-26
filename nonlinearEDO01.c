/** 
  @alexandre256bits
  02/04/2024
  ẍ = sin (x)  ==>  dt = dx / sin(x) ==>  dx = dt * sin(x) 
  interpretando uma equação diferencial ẍ = sin(x) como um campo vetorial  
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "df.h"

float N, x0, t0;
float a = 0; 
float b = 3.99;
float h = pow(10,-2 );

int main(void) {
   N = (b - a) / h;

   float dx[abs(N)]; 
   float dt[abs(N)];
   float k1, k2;
   x0 = 0;
   t0 = a;
   dx[0] = x0;
   dt[0] = t0;
   k1, k2 = 0;  
   for (int i=0; i < abs(N) ; i++ ) {
      k1 = df(dx[i], dt[i]);
      k2 = df(dx[i]+h, dt[i] + k1 * h);
      dt[i+1] = dt[i] + h;
      dx[i+1] = dx[i] + (h/2)*(k1+k2);
   }

   for (int i=0; i < abs(N); i++)
      printf("dx: %f - dt: %f\n", dx[i], dt[i]);

   return 0;
}

float df(float x, float t){
   float dx;
   dx = sin(x) * t;
   return dx;
}


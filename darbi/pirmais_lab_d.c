#include <stdio.h>
#include <math.h>

void main() {
 long double x=0, y, a, S;
 int k=0;

 printf("\n\t\t 500\n");
 printf("\t\t------\n");
 printf("\t\t\\               k  2*k    \n");
 printf("\t\t \\          (-1) *x       \n");
 printf("\ty(x)=\t  |   -----------------   = sinh(x/2)\n");
 printf("\t\t /              2  k      \n");
 printf("\t\t/           (k!) *4       \n");
 printf("\t\t------\n");
 printf("\t\t  k=0\n");

 printf("Lūdzu ievadiet izvēlēto x vērtību kurai velaties iegūt bessel0 vērtību:\n");
 scanf("%Lg",&x);

 y = j0(x);
 printf("y=bessel0(%Lg)=%Lg\n",x,y);
 a = x;
 S = a;

while(k<20){
 k++;
 a = a *pow(-x,2) /(k*4);
 S= S+a;
// if (k==500||k==499){
  printf("%d.\t X=%.5Lg\t\ta=%.5Lg\t\tS= %Lg\n", k, x, a, S);
//  }
 }
}



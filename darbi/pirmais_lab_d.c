#include <stdio.h>
#include <math.h>

void main() {
 long double x=0, y=0, a=0, S=0;
 int k=0;

 printf("\n\t\t 500\n");
 printf("\t\t------\n");
 printf("\t\t\\               k  2*k    \n");
 printf("\t\t \\          (-1) *x       \n");
 printf("\ty(x)=\t  |   -----------------   = bessel0\n");
 printf("\t\t /              2  k      \n");
 printf("\t\t/           (k!) *4       \n");
 printf("\t\t------\n");
 printf("\t\t  k=0\n");

 printf("Ievadiet izvēlēto x vērtību kurai vēlaties iegūt bessel vērtību:\n");
 scanf("%Lg",&x);

 y = j0(x);
 printf("y=bessel(%Lg)=%Lg\n",x,y);
 a = 1;
 S = a;

while(k<501){
 k++;
 a = a *(-1)*pow(x,2) /(4*pow(k,2));
 S= S+a;
 if (k==500||k==499){
  printf("%d.\t X=%.5Lg\ta=%.5Lg\tS= %Lg\n", k, x, a, S);
  }
 }
}



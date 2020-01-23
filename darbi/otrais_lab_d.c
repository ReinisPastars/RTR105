#include<stdio.h>
#include<math.h>

int main() {
 float a, b, c, x,delta_x, funkc_a, funkc_b, funkc_x;
 int i=0;

 printf("Funkcijas saknes aprēķins: \n");

 printf("Lūdzu ievadi sākuma robežu: ");
 scanf ("%f", &a);

 printf("Lūdzu ievadi beigu robežu: ");
 scanf ("%f", &b);

 printf("Lūdzu ievadi vēlamo precizitāti: ");
 scanf ("%e", &delta_x);

 printf("Lūdzu ievadi kādai  y - vērtībai  aprēķināt x: ");
 scanf ("%f", &c);

 funkc_a = j0(a) - c;
 funkc_b = j0(b) - c;

 printf("j0(%7.3f) - %7.3f =%7.3f\t\t", a, a, c, funkc_a);
 printf("j0(%7.3f) - %7.3f =%7.3f\n", b, b, c, funkc_b);

 while ((b-a)>delta_x){
  x = (a+b)/2.;
  if(funkc_a*(j0(x)-c)>0)
  a = x;
  else
  b = x;
printf("sin(%7.3f)=%7.3f\tsin(%7.3f)=%7.3f\tsin(%7.3f)=%7.3f\n",a,j0(x)-c,x,j0(x)-c,b, j0(x)-c);

  i++;
 }

 printf("Iterāciju skaits: %d\n",i);
 printf("Sakne atrodas pie x=%.5f, un j0(x) ir %.3f\n",x,j0(x));
 return 0;
}


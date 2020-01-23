# 2. laboratorijas darba - Dihotomijas metode  - atskaite

### Teorija
Dihotomijas metode atļauj noteikt funkcijas saknes konkētā intervālā, un atrast x vērtību ja ir zināma funkcijas vērtība.
### Kods
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
  printf("j0(%7.3f)=%7.3f\tj0(%7.3f)=%7.3f\tj0(%7.3f)=%7.3f\n",a,j0(x)-c,x,j0(x)-c,b, j0(x)-c);
  i++;
 }

 printf("Iterāciju skaits: %d\n",i);
 printf("Sakne atrodas pie x=%.5f, un j0(x) ir %.3f\n",x,j0(x));
 return 0;
}
### Rezultāts
Funkcijas saknes aprēķins: 
Lūdzu ievadi sākuma robežu: 1
Lūdzu ievadi beigu robežu: 10
Lūdzu ievadi vēlamo precizitāti: 1.e-5
Lūdzu ievadi kādai  y - vērtībai  aprēķināt x: 6,9
j0(  1.000) -   1.000 =  6.000          j0( 10.000) -  10.000 =  6.000
j0(  5.500)= -6.007    j0(  5.500)= -6.007    j0( 10.000)= -6.007
j0(  7.750)= -5.775    j0(  7.750)= -5.775    j0( 10.000)= -5.775
j0(  8.875)= -6.059    j0(  8.875)= -6.059    j0( 10.000)= -6.059
j0(  9.438)= -6.183    j0(  9.438)= -6.183    j0( 10.000)= -6.183
j0(  9.719)= -6.224    j0(  9.719)= -6.224    j0( 10.000)= -6.224
j0(  9.859)= -6.237    j0(  9.859)= -6.237    j0( 10.000)= -6.237
j0(  9.930)= -6.242    j0(  9.930)= -6.242    j0( 10.000)= -6.242
j0(  9.965)= -6.244    j0(  9.965)= -6.244    j0( 10.000)= -6.244
j0(  9.982)= -6.245    j0(  9.982)= -6.245    j0( 10.000)= -6.245
j0(  9.991)= -6.246    j0(  9.991)= -6.246    j0( 10.000)= -6.246
j0(  9.996)= -6.246    j0(  9.996)= -6.246    j0( 10.000)= -6.246
j0(  9.998)= -6.246    j0(  9.998)= -6.246    j0( 10.000)= -6.246
j0(  9.999)= -6.246    j0(  9.999)= -6.246    j0( 10.000)= -6.246
j0(  9.999)= -6.246    j0(  9.999)= -6.246    j0( 10.000)= -6.246
j0( 10.000)= -6.246    j0( 10.000)= -6.246    j0( 10.000)= -6.246
j0( 10.000)= -6.246    j0( 10.000)= -6.246    j0( 10.000)= -6.246
j0( 10.000)= -6.246    j0( 10.000)= -6.246    j0( 10.000)= -6.246
j0( 10.000)= -6.246    j0( 10.000)= -6.246    j0( 10.000)= -6.246
j0( 10.000)= -6.246    j0( 10.000)= -6.246    j0( 10.000)= -6.246
j0( 10.000)= -6.246   j0( 10.000)= -6.246    j0( 10.000)= -6.246
Iterāciju skaits: 20
Sakne atrodas pie x=9.99999, un j0(x) ir -0.246

### Analīze
Programma strādā, bet nevarēju atrast problēmu
### Bildes

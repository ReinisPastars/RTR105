# 1.laboratorijas darba - Teilora rindas - atskaite

## Teorija
Teilora rindas dod iespēju ērtāk aprēķināt funkcijas vērtību izmantojot rekurences reizinātāju,
un arī atļauj datoram aprēķināt sarežģītas funkcijas. 

### Kods
#include <stdio.h>
#include <math.h>

void main() {
 long double x=0, y, a, S;
 int k=0;

 printf("\n\t\t 500\n");
 printf("\t\t------\n");
 printf("\t\t\\               k  2*k    \n");
 printf("\t\t \\          (-1) *x       \n");
 printf("\ty(x)=\t  |   -----------------  \n");
 printf("\t\t /              2  k       \n");
 printf("\t\t/           (k!) *4        \n");
 printf("\t\t------\n");
 printf("\t\t  k=0\n");

 printf("Ievadiet izvēlēto x vērtību kurai vēlaties iegūt bessel vērtību:\n");
 scanf("%Lg",&x);

 y = j0(x);
 printf("y=bessel(%Lg)=%Lg\n",x,y);
 a = 1;
 S = x;

while(k<501){
 k++;
 a = a *(-1)*pow(x,2) /(4*pow(k,2));
 S= S+a;
 if (k==500||k==499){
  printf("%d.\t X=%.5Lg\t\ta=%.5Lg\t\tS= %Lg\n", k, x, a, S);
  }
 }
printf("\t\t\t         2      \n");
printf("\t\t\t       -x       \n");
printf("rekurences reizinātājs: -----------------   \n");
printf("\t\t\t           2    \n");
printf("\t\t\t      4 * k     \n");
}

### Rezultāts

		 500
		------
		\               k  2*k    
		 \          (-1) *x       
	y(x)=	  |   ----------------- 
		 /              2  k      
		/           (k!) *4       
		------
		  k=0
Ievadiet izvēlēto x vērtību kurai vēlaties iegūt bessel vērtību:
0.5
y=bessel(0.5)=0.93847
499.	 X=0.5	a=-2.3402e-2864	S= 0.93847
500.	 X=0.5	a=5.8505e-2871	S= 0.93847
                                 2      
                               -x       
rekurences reizinātājs: -----------------   
                                   2    
                              4 * k     

### Analīze
Kods darbojas kā plānots, vienīgi varētu uzlabot tā izskatu, un papildināt kodu tā, lai rezultāts izskatītos
smukāk un pārskatāmāk
### Bildes
![Beseļa funkcijas attēlojums](https://github.com/ReinisPastars/RTR105/blob/master/darbi/1ld_series/bessel.png?raw=true)

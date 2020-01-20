# 5.laboratorijas darba - Skaitliskās metodes - Skaitļu kopas kārtošana - atskaite

## Teorija
Izveidot programmu kas nosaka simbolu rindas garumu, minimālo vērtību, maksimālo vērtību,vidējo vērtību,
mediānas vērtību, modas(u) vērtību, sakārto simbolu augošā secībā orientējoties pēc ASCII tabulas.
### Kods
#include<stdio.h>
#include<string.h>

int main(){
 //mainīgie
 char input[256];
 int x, y, tmp, length, min_v=256, max_v=0, vid_v, medi, vertiba, kop_s=0, max=0;

 //simbolu rinda
 printf("\n\nLūdzu ievadiet simbolu rindu, ar ne vairāk kā 256 rakstzīmēm:\n");
 scanf("%[^\n]", input);

 //rindas garuma noskaidrošana
 length=strlen(input);
 printf("Ievadīto simbolu skaits ir %d simboli\n", length);

 //Kārtošana
 for (y=0;y<length;y++){
  for (x=0;x<length-1;x++){
   if (input[x]>input[x+1]){
    tmp =input[x+1];
    input[x+1] = input[x];
    input[x]= tmp;
   }
  }
 }

 //vidējā vērtība
 for(x=0;length>x;x++){
 vertiba = (int)input[x];
 if (max_v<vertiba) max_v=vertiba;
 if (min_v>vertiba && vertiba>32) min_v = vertiba;
 kop_s=kop_s+vertiba;
 }

 //Mazākā vērtība
 printf("Mazākā vērtība pēc ASCII tabulas ir %d  \n", min_v);

 //Lielākā vērtība
 printf("Lielākā vērtība pēc ASCII tabulas ir %d  \n", max_v);

 //vidējā vērība
 vid_v=kop_s/length;
 printf("Vidējā vērtība ASCII sistēmā ir %d  \n",vid_v);

 //mediāna
 printf("Ievadītas rindas mediana pēc ASCII sistēmas ir %d  \n", input[length/2]);

 //moda
y=0;
 for(x=0;length>x;x++){
  if(input[x]==input[x+1]){
   y++;
  }
  else if (input[x] != input[x+1]){
   if(y>max) max=y;
   y=0;
  }
 }
y=0;
 for(x=0;length>x;x++){
  if(input[x]==input[x+1]){
  y++;
  }
  else if(input[x] != input[x+1]){
   if (max==y){
    printf("Ivadītās rindas moda ir %d  \n", input[x]);
    }
  y=0;
  }
 }

 //alfabētiskā secība
 for(x=0;length>x;x++){
 printf("Garums %d \t %c \t %d  \n", x, input[x], input[x] );
 }

 printf(" \n", length);
 return 0;
}
### Rezultāts
Lūdzu ievadiet simbolu rindu, ar ne vairāk kā 256 rakstzīmēm:
asguyfguwfgeusybdcuwyegugwlcebuysdgfashdfkjascvyuawguyerfglasbdljgfluy
Ievadīto simbolu skaits ir 70 simboli
Mazākā vērtība pēc ASCII tabulas ir 97  
Lielākā vērtība pēc ASCII tabulas ir 121  
Vidējā vērtība ASCII sistēmā ir 108  
Ievadītas rindas mediana pēc ASCII sistēmas ir 106  
Ivadītās rindas moda ir 103  
Ivadītās rindas moda ir 117  
Garums 0         a       97  
Garums 1         a       97  
Garums 2         a       97  
Garums 3         a       97  
Garums 4         a       97  
Garums 5         b       98  
Garums 6         b       98  
Garums 7         b       98  
Garums 8         c       99  
Garums 9         c       99  
Garums 10        c       99  
Garums 11        d       100  
Garums 12        d       100  
Garums 13        d       100  
Garums 14        d       100  
Garums 15        e       101  
Garums 16        e       101  
Garums 17        e       101  
Garums 18        e       101  
Garums 19        f       102  
Garums 20        f       102  
Garums 21        f       102  
Garums 22        f       102  
Garums 23        f       102  
Garums 24        f       102  
Garums 25        g       103  
Garums 26        g       103  
Garums 27        g       103  
Garums 28        g       103  
Garums 29        g       103  
Garums 30        g       103  
Garums 31        g       103  
Garums 32        g       103  
Garums 33        g       103  
Garums 34        h       104  
Garums 35        j       106  
Garums 36        j       106  
Garums 37        k       107  
Garums 38        l       108  
Garums 39        l       108  
Garums 40        l       108  
Garums 41        l       108  
Garums 42        r       114  
Garums 43        s       115  
Garums 44        s       115  
Garums 45        s       115  
Garums 46        s       115  
Garums 47        s       115  
Garums 48        s       115  
Garums 49        u       117  
Garums 50        u       117  
Garums 51        u       117  
Garums 52        u       117  
Garums 53        u       117  
Garums 54        u       117  
Garums 55        u       117  
Garums 56        u       117  
Garums 57        u       117  
Garums 58        v       118  
Garums 59        w       119  
Garums 60        w       119  
Garums 61        w       119  
Garums 62        w       119  
Garums 63        y       121  
Garums 64        y       121  
Garums 65        y       121  
Garums 66        y       121  
Garums 67        y       121  
Garums 68        y       121  
Garums 69        y       121  

### Analīze
Kods darbojas kā paredzēts, vienīgais ko varētu uzlabot ir rezultāta un koda pārskatāmība un izskats.
### Bildes

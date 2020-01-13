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

 printf(" \n\n", length);
 return 0;
}

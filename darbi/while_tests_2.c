#include<stdio.h>

void main()
 {
 int number1, number2, yes_no;
 yes_no=1;
 while(yes_no)
{
 printf("cienījamais lietotāj, lūdzu, ievadi 1. skaitli: ");
 scanf("%d",&number1);
 printf("cienījamais lietotāj, lūdzu, ievadi 2. skaitli: ");
 scanf("%d",&number2);
 
 if (number1 > number2)
  printf("Tavs 1. skaitlis %d ir > nekā 2. skaitlis %d\n",number1,number2);
 break;
 }
}

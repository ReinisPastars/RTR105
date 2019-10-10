#include<stdio.h>
void main()
{
int number1, number2;
printf("cienījamais lietotāj, lūdzu, ievadi skaitli: ");
scanf("%d",&number1);
printf("cienījamais lietotāj, lūdzu, ievadi otro skaitli: ");
scanf("%d",&number2);
if (number1 > number2)
printf("Tavs 1. skaitlis %d ir > nekā 2. skaitlis %d\n",number1,number2);
else {
printf("Tavs 2. skaitlis %d ir > nekā 1. skaitlis %d\n",number2,number1);
printf("Šis teksts parādīsies jebkurā gadījumā\n");
}
}

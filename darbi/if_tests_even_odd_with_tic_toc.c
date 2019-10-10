#include<stdio.h>
#include <time.h>
void main()
 {
 int number;
 clock_t start_t, end_t, total_t;

 printf("cienījamais lietotāj, lūdzu, ievadi skaitli: ");
 scanf("%d",&number);

 start_t = clock();
 if((number%2)==0)
  {
  printf("Tavs 1. skaitlis %d ir pāra skaitlis\n",number);
  }
 else
  {
  printf("Tavs 1. skaitlis %d ir nepāra skaitlis\n",number);
  }
 end_t = clock();

 printf("Aprēķins ar %c aizņēma no %ld līdz %ld -> %ld\n",'%',start_t,end_t,end_t-start_t);


 start_t = clock();
 if( (number<<31)>>31 )
  {
  printf("Tavs 1. skaitlis %d ir nepāra skaitlis\n",number);
  }
 else
  {
  printf("Tavs 1. skaitlis %d ir pāra skaitlis\n",number);
  }
 end_t = clock();

 printf("Aprēķins ar << un >> aizņēma no %ld līdz %ld -> %ld\n",start_t,end_t,end_t-start_t);
 }

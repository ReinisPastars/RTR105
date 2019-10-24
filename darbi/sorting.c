#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c, t;
printf("Cienījamais lietotāj, ievadi trīs skaitļus: ");

scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if(a>b && a>c)
 if(b>c)
  ;
 else
  {t=c;c=b;b=t;}

 if(b>a && b>c)
  if(a>c)
   {t=b;b=a;a=t;}
  else
   {t=a;a=b;b=t;t=b;b=c;c=t;}

if(c>a && c>b)
 if(a>b)
  {t=a;a=c;c=t;t=c;c=b;b=t;}
 else
 {t=a;a=c;c=t;}

printf("augošā sacībā; %d %d %d\n",c,b,a);
}

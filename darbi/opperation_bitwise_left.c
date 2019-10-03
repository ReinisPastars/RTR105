#include<stdio.h>

void main()
 {
int a=10; //atmiņā parādīsies mainīgais a (izmērs viens baits, saturs 0000 1010)

printf("Operācija <<: %d<<1 rezultāts %d\n",a,a<<1);//parādās skaitli 20

int b; //atmiņā parādīsies mainīgais b
printf("b mainīgā \"sākuma\" stāvoklis (uzreiz pēc deklarēšanas): %d\n",b);

b=a<<2;// divas funkcijas =(piešķiršana un bīdīšana divus bitus pa kreisi

printf("operācija <<: %d<<1 rezultāts %d\n",a,b);//sagaidām skaitli 40

int c;
printf("Papētīsim << operāciju \n--------------\n");
printf("cienījamais lietotāj, lūdzu ievadiet operācijas pirmo operandu: ");
scanf("%d",&a);
printf("cienijamais lietotāj ievadi operācijas otro operandu: ");
scanf("%d",&c);
b=a<<c;
printf("--------------------------\nSkaties, kas ir sanācis: %d\n",b);


 }

/*
char a=10; //atmiņā parādīsies mainīgais a (izmērs viens baits, saturs 0000 1010)

printf("Operācija <<: %d<<1 rezultāts %d\n",a,a<<1);//parādās skaitli 20

char b; //atmiņā parādīsies mainīgais b
printf("b mainīgā \"sākuma\" stāvoklis (uzreiz pēc deklarēšanas): %d\n",b);

b=a<<2;// divas funkcijas =(piešķiršana un bīdīšana divus bitus pa kreisi

printf("operācija <<: %d<<1 rezultāts %d\n",a,b);//sagaidām skaitli 40

char c;
printf("Papētīsim << operāciju \n--------------\n");
printf("cienījamais lietotāj, lūdzu ievadiet operācijas pirmo operandu: ");
scanf("%d",&a);
printf("cienijamais lietotāj ievadi operācijas otro operandu: ");
scanf("%d",&c);
b=a<<c;
printf("--------------------------\nSkaties, kas ir sanācis: %d\n",b);
*/

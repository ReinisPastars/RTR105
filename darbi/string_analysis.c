#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
 FILE *ftpr;
 char str1[51];
 char str2[51];

 printf("Lūdzu ievadiet teikumu: ");
 scanf("%[^\n]%*c", str1);

 ftpr = fopen("program.txt", "w");
 if(ftpr == NULL)
 {
  printf("Error!");
  exit(1);
 }
 fprintf(ftpr,"%s", str1);
 fclose(ftpr);

 return 0;
}

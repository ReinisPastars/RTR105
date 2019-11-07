#include <stdio.h>
#include <string.h>

void  main()
{
 char str1[51];
 char str2[51];

 printf("ievadiet vārdu, vai teikumu: ");
 scanf("%[^\n]%*c", str1);
 printf("Pirmās rindas teikums ir: %s\n", str1);
 
 strcpy(str2, str1);
 printf("Nokopētais teikums ir: %s\n", str2);
}

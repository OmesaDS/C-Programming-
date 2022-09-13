// to find maximum of the two numbers
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int fno,sno,*p1=&fno,*p2=&sno;
   printf(" Input the first number : ");
   scanf("%d", p1);
   printf(" Input the second  number : ");
   scanf("%d", p2); 


 if(*p1>*p2)
 {
  printf("\n\n %d is the maximum number.\n\n",*p1);
 }
 else
 {
  printf("\n\n %d is the maximum number.\n\n",*p2);
 }

}


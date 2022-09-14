// Write a C program to store n number of elements in an array and print it using pointers
// Test Cases: 
// N = 16, -8, 0, A, 11.2
#include <stdio.h>
int main()
{
   int arr1[25], i,n;    
   printf(" Input the number of elements to store in the array :");
   scanf("%d",&n);
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : ",i);
	  scanf("%d",arr1+i);
	  }
   printf("Output : \n");
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : %d \n",i,*(arr1+i));
	  }
	   return 0;
}

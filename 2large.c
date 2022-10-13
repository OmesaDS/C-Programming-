#include<stdio.h>
int main()
{
    int n,i,lar1,lar2,temp,ar[25];
    printf("enter how many elements you want in an array=");
    scanf("%d",&n);
    printf("enter the elements=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    lar1=ar[0];
    lar2=ar[1];
   if(lar2>lar1)
   {
    temp=lar1;
    lar1=lar2;
    lar2=temp;
   }
   for(i=2;i<n;i++)
   {
    if(ar[i]>lar1)
    {
          lar2=lar1;
        lar1=ar[i];
    }
    else if(ar[i]>lar2 && ar[i]!=lar1)
    {
        ar[i]=lar2;
    }
   }
   printf("FIRST LARGEST NUMBER=%d",lar1);
   printf("\nSECOND LARGEST NUMBER=%d",lar2);
   return 0;
}
#include<stdio.h>
int main()
{
	int p,q,r,i;
	printf("Enter P: ");
	scanf("%d",&p);
	printf("Enter Q: ");
	scanf("%d",&q);
	printf("Enter R: ");
	scanf("%d",&r);
	for (i=p;i<=q;i++)
	{
		if(i%10==r)
		{
			continue;
		}
		printf("\n%d",i);
	}
	return 0;
}

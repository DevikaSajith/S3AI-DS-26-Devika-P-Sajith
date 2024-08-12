//program for linear search
//Devika P Sajith
//Roll no:26
#include<stdio.h>
void main()
{
	int a[50],search=0,n,i;
	printf("enter the limit of array");
	scanf("%d",&n);
	printf("enter the elemnts of array");
  for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the search element");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==a[i])
		{
			printf("search element found at %d",a[i]);
		}
	}
	
}

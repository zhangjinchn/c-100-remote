#include<stdio.h>
main()
{
	int  i;
	int a[40];
	a[0]=1,a[1]=1; 
	printf("%-15d",a[0]);
	printf("%-15d",a[1]);
	for(i=2;i<40;i++)
	{
	a[i]=a[i-1]+a[i-2];
	printf("%-15d",a[i]);
    }
	return 0;
}

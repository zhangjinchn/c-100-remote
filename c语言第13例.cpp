#include<stdio.h>
int main()
{
	int i,x;
	printf("请输入一个整数:");
	scanf("%d",&x); 
	printf("%d=",x);
	for(i=2;i<=x;i++)
    {
		while(x%i==0)
		{
			printf("%d",i);
			x=x/i;
			if(x!=1) printf("*");
		}
    }
} 

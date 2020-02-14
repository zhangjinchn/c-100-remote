#include<stdio.h>
int main()
{
	int i,j,n;
	int s=0;
	printf("请输入这个数：");
	scanf("%d",&n); 
	for(i=2;i<n;i++)
    {
    if(n%i==0)
    	s++;
    }
	if(s==0)		
			printf("%d不是质数",n);
    else
			printf("%d是质数",n);  
    
} 

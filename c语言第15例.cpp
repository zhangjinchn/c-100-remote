#include<stdio.h>
int main()
{
    int i,j,m,n,t;
    printf("请输入两个正整数m和n:"); 
    scanf("%d%d",&m,&n); 
    if(m>n) 
	    {    
			t=n;n=m;m=t; 
		}
    for(i=m;i>=1;i--)
    {
    if(m%i==0&&n%i==0)
	   {
	   		printf("最大公约数%d",i); break;
	   }
    }
    j=m*n/i;
    printf("最小公倍数%d",j);
   return 0;
} 

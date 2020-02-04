//求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加).
#include<stdio.h>
#include<math.h>
int main()
{
   int a,x,n,i,s=0;
   int t[100];
   printf("请输入x\n");
   scanf("%d",&x);
   printf("\n");
   printf("请输入n\n"); 
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   	    t[0]=x*pow(10,i-1);
   	    t[i]=t[i-1]+t[i-2];
	    printf("%d");
	    if(i!=n) 
	   	printf("+");
   }
} 

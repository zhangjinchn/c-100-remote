//��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������).
#include<stdio.h>
#include<math.h>
int main()
{
   int a,x,n,i,s=0;
   int t[100];
   printf("������x\n");
   scanf("%d",&x);
   printf("\n");
   printf("������n\n"); 
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

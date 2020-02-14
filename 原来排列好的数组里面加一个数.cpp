#include <stdio.h>
int main()
{
	 int i,b,s=0;
	 int a[11]={1,2,3,5,6,7,8,9,10,11};
	 printf("输出原始数组：") ; 
	 for(i=0;i<10;i++)
	 {
	     printf("%-3d",a[i]);
	 }
	 printf("\n");
	 printf("请输入一个数："); 
	 scanf("%d",&b);
	 for(i=10;i>=0;i--)
	{
		 if(b<a[i])
		 {
		 	a[i+1]=a[i];
		 	s++;
		 }
    }
	 a[10-s]=b;
	for(i=0;i<11;i++)
	printf("%-3d",a[i]);
}

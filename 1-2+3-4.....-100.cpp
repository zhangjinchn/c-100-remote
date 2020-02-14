#include <stdio.h>
#include <math.h>
int main()
{
 int i,s=0;
 for(i=1;i<=100;i++)
 {
  s=s+i*pow(-1,i-1); 
 } 
 printf("%d",s);
} 

#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
printf("%d",a%10*100+(a%100-a%10)+a/100);//十位数也可以用 (a/10)%10*10 表示 
return 0;
}


#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
printf("%d",a%10*100+(a%100-a%10)+a/100);//ʮλ��Ҳ������ (a/10)%10*10 ��ʾ 
return 0;
}


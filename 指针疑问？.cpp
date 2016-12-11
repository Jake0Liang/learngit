#include<stdio.h>
int main()
{
	int a[10]={2,3,4};
	int *p;
	int i;
	p=a;
	printf("%d",p[1]);//说明指针变量p既存放了地址，又存放了变量值吗？ 
}

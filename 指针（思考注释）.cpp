#include<stdio.h>
int main()
{
	void exchange(int *q1,int *q2,int *q3);
	int a,b,c,*p1,*p2,*p3;
	printf("please enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	p1=&a,p2=&b,p3=&c;
	exchange(p1,p2,p3);
	printf("%d,%d,%d\n",a,b,c);
	return 0;
}
void exchange(int *q1,int *q2,int *q3)//调整abc的值 
{
	void swap(int *pt1,int *pt2);
	if(*q1<*q2) swap(q1,q2);
	/*为什么不加* ？加了*就表示该指针变量指向的那个变量，和函数定义参数类型不符合；
	由此可看出定义指针变量和使用指针变量时不是一码事，定义时符号*是为了确定变量类型，
	而使用时*则表示指向一个普通变量的动作*/ 
	if(*q1<*q3) swap(q1,q3);
	if(*q2<*q3) swap(q2,q3);
}
void swap(int *pt1,int *pt2)//交换指针指向变量的值 ，这里*表示调用函数时应该输入指针型的变量 
{ 
	int temp;
	temp=*pt1;
	*pt1=*pt2;
	*pt2=temp;
} 

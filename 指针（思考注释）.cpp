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
void exchange(int *q1,int *q2,int *q3)//����abc��ֵ 
{
	void swap(int *pt1,int *pt2);
	if(*q1<*q2) swap(q1,q2);
	/*Ϊʲô����* ������*�ͱ�ʾ��ָ�����ָ����Ǹ��������ͺ�������������Ͳ����ϣ�
	�ɴ˿ɿ�������ָ�������ʹ��ָ�����ʱ����һ���£�����ʱ����*��Ϊ��ȷ���������ͣ�
	��ʹ��ʱ*���ʾָ��һ����ͨ�����Ķ���*/ 
	if(*q1<*q3) swap(q1,q3);
	if(*q2<*q3) swap(q2,q3);
}
void swap(int *pt1,int *pt2)//����ָ��ָ�������ֵ ������*��ʾ���ú���ʱӦ������ָ���͵ı��� 
{ 
	int temp;
	temp=*pt1;
	*pt1=*pt2;
	*pt2=temp;
} 

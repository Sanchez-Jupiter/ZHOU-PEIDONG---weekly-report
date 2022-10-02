#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define X 0
#define Y 1000
#define N 10
struct node
{
	double data;
	struct node *next;
};//结构体用来形成链表 
int main()
{
//	freopen ("1.in","r",stdin);		
	freopen ("1.out","w",stdout);
	int i,m=1;
	double a[15],k;
	struct node *head,*p,*q,*t;
	head=NULL;
	srand(time(0));
/*	i=rand();   
	cout<<i<<endl;
	cout<<(1.0*i)<<endl;
	cout<<RAND_MAX<<endl;
	cout<<1.0*i/RAND_MAX<<endl;测试随机数 
	cout<<1.0*i/RAND_MAX*(Y-X)<<endl;*/
	for(i=1;i<=N;i++) {
		a[i]=X+1.0*rand()/RAND_MAX*(Y-X);
		if(a[i]<a[m]) m=i; 
	}
	for(i=1;i<=N;i++) printf("%lf ",a[i]);
	k=a[1];a[1]=a[m];a[m]=k;
	printf("\n");
	for(i=1;i<=N;i++) printf("%lf ",a[i]);
	printf("\n");
	//随机生成长度为 10 的浮点型一维数组 
//	for(i=1;i<=10;i++) printf("%lf ",a[i]);测试随机数 

	for(i=1;i<=N;i++) 
	{
		p=(struct node *)malloc(sizeof(node));
		if(head==NULL) {
			p->data=a[i];
			p->next=NULL;
			head=p;
			continue;
		}
		t=head;
		while(t!=NULL)
		{
			if(t->next==NULL||t->next->data>a[i])
			{
				p->data=a[i];
				p->next=t->next;
				t->next=p;
				break;
			}
			t=t->next;
		}
		t=head;
		while(t!=NULL)
		{
			printf("%lf ",t->data);
			t=t->next;
		}//输出 
		printf("\n");
	} 
	t=head;
	while(t!=NULL)
	{
		printf("%lf ",t->data);
		t=t->next;
	}//输出 
	return 0;
} 

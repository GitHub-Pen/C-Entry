#ifndef __DoubleList_h_
#define __DoubleList_h_ 

#include "WholeVari.h"//定义的全局变量

pst_Dl_List List,start; 
int i_Locate;
Elemtype i_Elem;//双链表的结点类型

//双链表的建立
pst_Dl_List DlistCreate()
{
	Node *p,*L,*r;
	Elemtype i_Elem;
	L=(Node*)malloc(sizeof(Node));//申请头结点
	L->next=NULL;
	r=L;
	r->next=NULL;//r为指向终结点的指针

	printf("请输入元素，-1结束输入:");
	scanf("%d",&i_Elem);
	while(i_Elem!=-1)
	{
		p=(Node*)malloc(sizeof(Node));
		p->data=i_Elem;
		p->next=r->next;
		r->next=p;
		r=p;
		scanf("%d",&i_Elem);
	}
	r->next=NULL;
	return L;

	printf("输出元素：\n");
	for (start=List->next;start/*!=NULL*/;start=start->next)
	{
		printf("%d  ",start->data);
	}
	printf("\n");
}

//双链表的插入
pst_Dl_List DlListInsert(pst_Dl_List L,int i_Locate,Elemtype i_Elem)
{
	pst_Dl_List p,s;//s为要插入的结点

	printf("请输入插入元素的位置(第一元素位置为0):");//插入元素
	scanf("%d",&i_Locate);
	printf("请输入插入元素的值：");
	scanf("%d",&i_Elem);

	p=L->next;//从第一个位置开始查找

	
	for (i_Tmp=1;i_Tmp<=i_Locate;i_Tmp++)
	{
		p=p->next;
	}
	s=(Node*)malloc(sizeof(Node));
	s->data=i_Elem;
	s->next=p->next;//将结点插入
	p->next->prior=s;
	s->prior=p;
	p->next=s;

	for (start=List->next;start!=NULL;start=start->next)//遍历链表，输出元素
	{
		printf("%d  ",start->data);
	}
	printf("\n");

	return L;
}

//双链表删除第i个结点
pst_Dl_List DlListDelete(pst_Dl_List L,int i_locate)
{
	i_Tmp=1;
	pst_Dl_List p;//p为查找结点


	printf("请输入要删除的元素位置：");//删除元素
	scanf("%d",&i_Locate);


	p=L->next;
	while((i_Tmp++)!=i_locate&&p!=NULL)
	{
		p=p->next;
	}
	if (p==NULL)
	{
		printf("出现错误\n");
	}
	else if (p->next==NULL)
	{
		p->prior->next=NULL;
		free(p);
	}
	else
	{
		p->prior->next=p->next;
		p->next->prior=p->prior;
		free(p);
	}

	for (start=List->next;start;start=start->next)//遍历链表，输出元素
	{
		printf("%d  ",start->data);
	}
	printf("\n");
	return L;
}

//双链表的删除
void DlListClear(pst_Dl_List L)
{
	L->next=NULL;
	printf("删除成功\n");

}

#endif
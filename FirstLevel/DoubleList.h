#ifndef __DoubleList_h_
#define __DoubleList_h_ 

#include "WholeVari.h"//�����ȫ�ֱ���

pst_Dl_List List,start; 
int i_Locate;
Elemtype i_Elem;//˫����Ľ������

//˫����Ľ���
pst_Dl_List DlistCreate()
{
	Node *p,*L,*r;
	Elemtype i_Elem;
	L=(Node*)malloc(sizeof(Node));//����ͷ���
	L->next=NULL;
	r=L;
	r->next=NULL;//rΪָ���ս���ָ��

	printf("������Ԫ�أ�-1��������:");
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

	printf("���Ԫ�أ�\n");
	for (start=List->next;start/*!=NULL*/;start=start->next)
	{
		printf("%d  ",start->data);
	}
	printf("\n");
}

//˫����Ĳ���
pst_Dl_List DlListInsert(pst_Dl_List L,int i_Locate,Elemtype i_Elem)
{
	pst_Dl_List p,s;//sΪҪ����Ľ��

	printf("���������Ԫ�ص�λ��(��һԪ��λ��Ϊ0):");//����Ԫ��
	scanf("%d",&i_Locate);
	printf("���������Ԫ�ص�ֵ��");
	scanf("%d",&i_Elem);

	p=L->next;//�ӵ�һ��λ�ÿ�ʼ����

	
	for (i_Tmp=1;i_Tmp<=i_Locate;i_Tmp++)
	{
		p=p->next;
	}
	s=(Node*)malloc(sizeof(Node));
	s->data=i_Elem;
	s->next=p->next;//��������
	p->next->prior=s;
	s->prior=p;
	p->next=s;

	for (start=List->next;start!=NULL;start=start->next)//�����������Ԫ��
	{
		printf("%d  ",start->data);
	}
	printf("\n");

	return L;
}

//˫����ɾ����i�����
pst_Dl_List DlListDelete(pst_Dl_List L,int i_locate)
{
	i_Tmp=1;
	pst_Dl_List p;//pΪ���ҽ��


	printf("������Ҫɾ����Ԫ��λ�ã�");//ɾ��Ԫ��
	scanf("%d",&i_Locate);


	p=L->next;
	while((i_Tmp++)!=i_locate&&p!=NULL)
	{
		p=p->next;
	}
	if (p==NULL)
	{
		printf("���ִ���\n");
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

	for (start=List->next;start;start=start->next)//�����������Ԫ��
	{
		printf("%d  ",start->data);
	}
	printf("\n");
	return L;
}

//˫�����ɾ��
void DlListClear(pst_Dl_List L)
{
	L->next=NULL;
	printf("ɾ���ɹ�\n");

}

#endif
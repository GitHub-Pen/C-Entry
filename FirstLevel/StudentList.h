#ifndef __StudentList_h_
#define __StudentList_h_ 

#include "WholeVari.h"//�����ȫ�ֱ���

//�༶��Ϣ�������
//�����༶��Ϣ������
void CreateClassList(pst_ClassPoi *pst_ClassHead)
{
	int i_StuIds;
	pst_ClassPoi p,q,r;//˵������
	printf("������ѧ��ѧ�ţ�");
	scanf("%d",&i_StuIds);
	p=q=*pst_ClassHead;//���ҷ��������ļ�¼
	while (p!=NULL)
	{
		if (p->i_StuId==i_StuIds)
		{
			printf("�Ѿ�����ͬѧ��\n");
			return;
		} 
		else
		{
			q=p;p=p->next;
		}
	}
	r=(pst_ClassPoi)malloc(sizeof(ClassList));
	r->next=NULL;
	if (r==NULL)
	{
		printf("����ռ�ʧ��");
		return;
	}
	if (q==NULL)//ԭ��Ϊ�ձ�
		*pst_ClassHead=r;
	else
	{
		q->next=r;
	}
	r->i_StuId=i_StuIds;
	printf("������༶��ţ�");
	scanf("%d",&r->i_ClassId);	
}

//ɾ���༶��Ϣ
void ClasslistDelete(pst_ClassPoi *pst_ClassHead)
{
	int i_StuIds;
	pst_ClassPoi p,q;
	printf("������ѧ��ѧ�ţ�");
	scanf("%d",&i_StuIds);
	p=q=*pst_ClassHead;
	while (p!=NULL&&i_flag)
	{
		if (p->i_StuId==i_StuIds)
		{
			if (p==*pst_ClassHead)//ɾ����Ϊͷ���
			{
				*pst_ClassHead=p->next;free(q);
			}
			else
			{
				q->next=p->next;free(p);//ɾ����ͨԪ��
			}
			i_flag=0;
		}
		else
		{
			q=p;
			p=p->next;
		}
	}
}

//���Ұ༶��Ϣ
void ClasslistFind(pst_ClassPoi *pst_ClassHead)
{
	int i_StuIds;
	pst_ClassPoi p;
	printf("������Ҫ��ѯ��ѧ����ѧ�ţ�");
	scanf("%d",&i_StuIds);
	p=*pst_ClassHead;
	while(p!=NULL&&i_flag)
	{
		if (p->i_StuId==i_StuIds)
		{
			printf("�༶��ţ�%d\n",p->i_ClassId);
			printf("ѧ��ѧ�ţ�%d\n",p->i_StuId);
			i_flag=0;
		}
		else
			p=p->next;//ָ���ߵ���һ���
	}
}

//��ʾ�༶��Ϣ
void ClassShow(pst_ClassPoi *pst_ClassHead) 
{
	pst_ClassPoi p;
	p=*pst_ClassHead;
	printf("�༶���  ѧ��\n");
	while(p!=NULL)
	{
		printf("%d     ",p->i_ClassId);
		printf("%d\n",p->i_StuId);
		p=p->next;
	}
}

//ѧ���������
//����ѧ����Ϣ������
void CreateStuList(pst_StuPoi *pst_StuHead)
{
	int i_CNum;
	pst_StuPoi p,q,r;//˵������
	printf("������ѧ�ţ�");
	scanf("%d",&i_CNum);
	p=q=*pst_StuHead;//���ҷ��������ļ�¼
	while (p!=NULL)
	{
		if (p->i_StuId==i_CNum)
		{
			printf("�Ѿ�����ͬ��ţ�");
			return;
		} 
		else
		{
			q=p;p=p->next;
		}
	}
	r=(pst_StuPoi)malloc(sizeof(StuList));
	r->next=NULL;
	if (r==NULL)
	{
		printf("����ռ�ʧ��");
		return;
	}
	if (q==NULL)//ԭ��Ϊ�ձ�
		*pst_StuHead=r;
	else
	{
		q->next=r;
	}
	r->i_StuId=i_CNum;
	printf("������������");
	scanf("%s",r->sz_StuName);
	printf("���������䣺");
	scanf("%d",&r->i_StuAge);
}

//ɾ��ѧ����Ϣ
void LinklistDelete(pst_StuPoi *pst_StuHead)
{
	int i_CNum;
	pst_StuPoi p,q;
	printf("������Ҫɾ����ѧ����ѧ�ţ�");
	scanf("%d",&i_CNum);
	p=q=*pst_StuHead;
	while (p!=NULL&&i_flag)
	{
		if (p->i_StuId==i_CNum)
		{
			if (p==*pst_StuHead)//ɾ����Ϊͷ���
			{
				*pst_StuHead=p->next;free(q);
			}
			else
			{
				q->next=p->next;free(p);//ɾ����ͨԪ��
			}
			i_flag=0;
		}
		else
		{
			q=p;
			p=p->next;
		}

	}

}

//����ѧ����Ϣ
void LinklistFind(pst_StuPoi *pst_StuHead)
{
	int i_CNum;
	pst_StuPoi p;
	printf("������Ҫ��ѯ��ѧ����ѧ�ţ�");
	scanf("%d",&i_CNum);
	p=*pst_StuHead;
	while(p!=NULL&&i_flag)
	{
		if (p->i_StuId==i_CNum)
		{
			printf("ѧ�ţ�%d\n",p->i_StuId);
			printf("������%s\n",p->sz_StuName);
			printf("���䣺%d\n",p->i_StuAge);
			i_flag=0;
		}
		else
			p=p->next;//ָ���ߵ���һ���
	}
}

//�޸�ѧ����Ϣ
void LinklistModifier(pst_StuPoi *pst_StuHead)
{
	int i_CNum;
	pst_StuPoi p;
	printf("������Ҫ�޸ĵ�ѧ�ţ�");
	scanf("%d",&i_CNum);
	p=*pst_StuHead;
	while(p!=NULL&&i_flag)
	{
		if (p->i_StuId==i_CNum)
		{
			printf("�������޸�֮���������");
			scanf("%s",p->sz_StuName);
			printf("�������޸�֮������䣺");
			scanf("%d",&p->i_StuAge);
			i_flag=0;
		}
		else
			p=p->next;
	}
}                                                                            

//��ʾѧ����Ϣ
void Show(pst_StuPoi *pst_StuHead) 
{
	pst_StuPoi p;
	p=*pst_StuHead;
	printf("ѧ��  ����  ����\n");
	while(p!=NULL)
	{
		printf("%d     ",p->i_StuAge);
		printf("%s     ",p->sz_StuName);
		printf("%d\n",p->i_StuAge);
		p=p->next;
	}
}

//�γ���Ϣ�������
//�����γ���Ϣ������
void CreateCourseList(pst_CoursePoi *pst_CourseHead)
{
	int i_CourseIds;
	pst_CoursePoi p,q,r;//˵������
	printf("������γ̱�ţ�");
	scanf("%d",&i_CourseIds);
	p=q=*pst_CourseHead;//���ҷ��������ļ�¼
	r=(pst_CoursePoi)malloc(sizeof(CourseList));
	r->next=NULL;
	if (r==NULL)
	{
		printf("����ռ�ʧ��");
		return;
	}
	if (q==NULL)//ԭ��Ϊ�ձ�
		*pst_CourseHead=r;
	else
	{
		q->next=r;
	}
	r->i_CourseId=i_CourseIds;
	printf("������γ�����");
	scanf("%s",r->sz_CourseName);	
	printf("������༶��ţ�");
	scanf("%d",&r->i_ClassId);	
}

//ɾ���γ���Ϣ
void CourselistDelete(pst_CoursePoi *pst_CourseHead)
{
	int i_ClassIds,i_CourseIds;
	pst_CoursePoi p,q;
	printf("������༶�Ϳγ̺ţ�");
	scanf("%d%d",&i_ClassIds,&i_CourseIds);
	p=q=*pst_CourseHead;
	while (p!=NULL&&i_flag)
	{
		if (p->i_ClassId==i_ClassIds&&p->i_CourseId==i_CourseIds)
		{
			if (p==*pst_CourseHead)//ɾ����Ϊͷ���
			{
				*pst_CourseHead=p->next;free(q);
			}
			else
			{
				q->next=p->next;free(p);//ɾ����ͨԪ��
			}
			i_flag=0;
		}
		else
		{
			q=p;
			p=p->next;
		}
	}
}

//���ҿγ���Ϣ
void CourselistFind(pst_CoursePoi *pst_CourseHead)
{
	int i_ClassIds;
	pst_CoursePoi p;
	printf("������Ҫ��ѯ��ѧ����ѧ�ţ�");
	scanf("%d",&i_ClassIds);
	p=*pst_CourseHead;
	while(p!=NULL&&i_flag)
	{
		if (p->i_ClassId==i_ClassIds)
		{
			printf("�༶��ţ�%d\n",p->i_ClassId);
			printf("�γ̺ţ�%d\n",&p->sz_CourseName);
			printf("�γ�����%d\n",p->i_CourseId);
			i_flag=0;
		}
		else
			p=p->next;//ָ���ߵ���һ���
	}
}

//��ʾ�γ���Ϣ
void CourseShow(pst_CoursePoi *pst_CourseHead) 
{
	pst_CoursePoi p;
	p=*pst_CourseHead;
	printf("�༶��� �γ̺�  �γ���  \n");
	while(p!=NULL)
	{
		printf("%d    ",p->i_ClassId);
		printf("%d     ",p->i_CourseId);
		printf("%s\n",p->sz_CourseName);
		p=p->next;
	}
}

//�ɼ���Ϣ�������
//�����ɼ���Ϣ������
void CreateScoreList(pst_StuScorePoi *pst_ScoreHead)
{
	int i_StuIds;
	pst_StuScorePoi p,r;//˵������
	p=*pst_ScoreHead;
	r=(pst_StuScorePoi)malloc(sizeof(StuScoreList));
	r->next=NULL;
	if (r==NULL)
	{
		printf("����ռ�ʧ��");
		return;
	}
	if (p==NULL)//ԭ��Ϊ�ձ�
		*pst_ScoreHead=r;
	else
	{
		while(p->next!=NULL)
		p=p->next;//��������
		p->next=r;//�ڱ�β����Ԫ��
	}
	printf("������ѧ�ţ�");
    scanf("%d",&r->i_StuId); 
	printf("������γ̺ţ�");
	scanf("%d",&r->i_CourseId);
	printf("������γ̷�����");
	scanf("%d",&r->i_CourseScore);	
}

//ɾ���ɼ���Ϣ
void StuScorelistDelete(pst_StuScorePoi *pst_ScoreHead)
{
	int i_StuIds;
	pst_StuScorePoi p,q;
	printf("������ѧ��ѧ�ţ�");
	scanf("%d",&i_StuIds);
	p=q=*pst_ScoreHead;
	while (p!=NULL&&i_flag)
	{
		if (p->i_StuId==i_StuIds)
		{
			if (p==*pst_ScoreHead)//ɾ����Ϊͷ���
			{
				*pst_ScoreHead=p->next;free(q);
			}
			else
			{
				q->next=p->next;free(p);//ɾ����ͨԪ��
			}
			i_flag=0;
		}
		else
		{
			q=p;
			p=p->next;
		}
	}
}

//���ҳɼ���Ϣ
void StuScorelistFind(pst_StuScorePoi *pst_ScoreHead)
{
	int i_StuIds;
	pst_StuScorePoi p;
	printf("������Ҫ��ѯ��ѧ����ѧ�ţ�");
	scanf("%d",&i_StuIds);
	p=*pst_ScoreHead;
	while(p!=NULL&&i_flag)
	{
		if (p->i_StuId==i_StuIds)
		{
			printf("�γ̺ţ�%d\n",p->i_CourseId);
			printf("ѧ�ţ�%d\n",&p->i_StuId);
			printf("�ɼ���%d\n",p->i_CourseScore);
			i_flag=0;
		}
		else
			p=p->next;//ָ���ߵ���һ���
	}
}

//��ʾ�ɼ���Ϣ
void StuScoreShow(pst_StuScorePoi *pst_ScoreHead) 
{
	int *i_Poi;//����һ��ָ�����͵�����
	pst_StuScorePoi p;
	int i_Count=0;//������
	int i,j;
	int i_CourseIds;//����γ̺�
	p=*pst_ScoreHead;
	printf("�γ̺�  ѧ��  �ɼ�\n");

	while(p!=NULL)
	{
		printf("%d     ",p->i_CourseId);
		printf("%d     ",p->i_StuId);
		printf("%d\n",p->i_CourseScore);
		p=p->next;
		i_Count++;
	}

	i_Poi=(int*)malloc(i_Count*sizeof(int));
	if (i_Poi==NULL)
	{
		printf("����ռ�ʧ��\n");
		exit(1);
	}

	for (i=0;i<i_Count-1;i++)
	{
		i_Poi[i]=p->i_CourseScore;
		p=p->next;
	}

	printf("���Ƴɼ���������γ̺ţ�");
	scanf("%d",&i_CourseIds);//����γ̺�
	//while(p!=NULL&&p->i_CourseId==i_CourseIds)
	if (p->i_CourseId==i_CourseIds)
	{
		for (i=0;i<i_Count-1;i++)
		{
			for (j=0;j<i_Count-i;j++)
			{
				if (i_Poi[j]>i_Poi[j+1])
				{
					i_Tmp=i_Poi[j];
					i_Poi[j]=i_Poi[j+1];
					i_Poi[j+1]=i_Tmp;
				}
			}
		}
	}
	for (i=0;i<i_Count;i++)
	{
		printf("�ɼ���%d\n",i_Poi[i]);
	}
}
#endif
#ifndef __StudentList_h_
#define __StudentList_h_ 

#include "WholeVari.h"//定义的全局变量

//班级信息链表操作
//建立班级信息单链表
void CreateClassList(pst_ClassPoi *pst_ClassHead)
{
	int i_StuIds;
	pst_ClassPoi p,q,r;//说明变量
	printf("请输入学生学号：");
	scanf("%d",&i_StuIds);
	p=q=*pst_ClassHead;//查找符合条件的记录
	while (p!=NULL)
	{
		if (p->i_StuId==i_StuIds)
		{
			printf("已经有相同学号\n");
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
		printf("分配空间失败");
		return;
	}
	if (q==NULL)//原表为空表
		*pst_ClassHead=r;
	else
	{
		q->next=r;
	}
	r->i_StuId=i_StuIds;
	printf("请输入班级编号：");
	scanf("%d",&r->i_ClassId);	
}

//删除班级信息
void ClasslistDelete(pst_ClassPoi *pst_ClassHead)
{
	int i_StuIds;
	pst_ClassPoi p,q;
	printf("请输入学生学号：");
	scanf("%d",&i_StuIds);
	p=q=*pst_ClassHead;
	while (p!=NULL&&i_flag)
	{
		if (p->i_StuId==i_StuIds)
		{
			if (p==*pst_ClassHead)//删除的为头结点
			{
				*pst_ClassHead=p->next;free(q);
			}
			else
			{
				q->next=p->next;free(p);//删除普通元素
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

//查找班级信息
void ClasslistFind(pst_ClassPoi *pst_ClassHead)
{
	int i_StuIds;
	pst_ClassPoi p;
	printf("请输入要查询的学生的学号：");
	scanf("%d",&i_StuIds);
	p=*pst_ClassHead;
	while(p!=NULL&&i_flag)
	{
		if (p->i_StuId==i_StuIds)
		{
			printf("班级编号：%d\n",p->i_ClassId);
			printf("学生学号：%d\n",p->i_StuId);
			i_flag=0;
		}
		else
			p=p->next;//指针走到下一结点
	}
}

//显示班级信息
void ClassShow(pst_ClassPoi *pst_ClassHead) 
{
	pst_ClassPoi p;
	p=*pst_ClassHead;
	printf("班级编号  学号\n");
	while(p!=NULL)
	{
		printf("%d     ",p->i_ClassId);
		printf("%d\n",p->i_StuId);
		p=p->next;
	}
}

//学生链表操作
//建立学生信息单链表
void CreateStuList(pst_StuPoi *pst_StuHead)
{
	int i_CNum;
	pst_StuPoi p,q,r;//说明变量
	printf("请输入学号：");
	scanf("%d",&i_CNum);
	p=q=*pst_StuHead;//查找符合条件的记录
	while (p!=NULL)
	{
		if (p->i_StuId==i_CNum)
		{
			printf("已经有相同编号：");
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
		printf("分配空间失败");
		return;
	}
	if (q==NULL)//原表为空表
		*pst_StuHead=r;
	else
	{
		q->next=r;
	}
	r->i_StuId=i_CNum;
	printf("请输入姓名：");
	scanf("%s",r->sz_StuName);
	printf("请输入年龄：");
	scanf("%d",&r->i_StuAge);
}

//删除学生信息
void LinklistDelete(pst_StuPoi *pst_StuHead)
{
	int i_CNum;
	pst_StuPoi p,q;
	printf("请输入要删除的学生的学号：");
	scanf("%d",&i_CNum);
	p=q=*pst_StuHead;
	while (p!=NULL&&i_flag)
	{
		if (p->i_StuId==i_CNum)
		{
			if (p==*pst_StuHead)//删除的为头结点
			{
				*pst_StuHead=p->next;free(q);
			}
			else
			{
				q->next=p->next;free(p);//删除普通元素
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

//查找学生信息
void LinklistFind(pst_StuPoi *pst_StuHead)
{
	int i_CNum;
	pst_StuPoi p;
	printf("请输入要查询的学生的学号：");
	scanf("%d",&i_CNum);
	p=*pst_StuHead;
	while(p!=NULL&&i_flag)
	{
		if (p->i_StuId==i_CNum)
		{
			printf("学号：%d\n",p->i_StuId);
			printf("姓名：%s\n",p->sz_StuName);
			printf("年龄：%d\n",p->i_StuAge);
			i_flag=0;
		}
		else
			p=p->next;//指针走到下一结点
	}
}

//修改学生信息
void LinklistModifier(pst_StuPoi *pst_StuHead)
{
	int i_CNum;
	pst_StuPoi p;
	printf("请输入要修改的学号：");
	scanf("%d",&i_CNum);
	p=*pst_StuHead;
	while(p!=NULL&&i_flag)
	{
		if (p->i_StuId==i_CNum)
		{
			printf("请输入修改之后的姓名：");
			scanf("%s",p->sz_StuName);
			printf("请输入修改之后的年龄：");
			scanf("%d",&p->i_StuAge);
			i_flag=0;
		}
		else
			p=p->next;
	}
}                                                                            

//显示学生信息
void Show(pst_StuPoi *pst_StuHead) 
{
	pst_StuPoi p;
	p=*pst_StuHead;
	printf("学号  姓名  年龄\n");
	while(p!=NULL)
	{
		printf("%d     ",p->i_StuAge);
		printf("%s     ",p->sz_StuName);
		printf("%d\n",p->i_StuAge);
		p=p->next;
	}
}

//课程信息链表操作
//建立课程信息单链表
void CreateCourseList(pst_CoursePoi *pst_CourseHead)
{
	int i_CourseIds;
	pst_CoursePoi p,q,r;//说明变量
	printf("请输入课程编号：");
	scanf("%d",&i_CourseIds);
	p=q=*pst_CourseHead;//查找符合条件的记录
	r=(pst_CoursePoi)malloc(sizeof(CourseList));
	r->next=NULL;
	if (r==NULL)
	{
		printf("分配空间失败");
		return;
	}
	if (q==NULL)//原表为空表
		*pst_CourseHead=r;
	else
	{
		q->next=r;
	}
	r->i_CourseId=i_CourseIds;
	printf("请输入课程名：");
	scanf("%s",r->sz_CourseName);	
	printf("请输入班级编号：");
	scanf("%d",&r->i_ClassId);	
}

//删除课程信息
void CourselistDelete(pst_CoursePoi *pst_CourseHead)
{
	int i_ClassIds,i_CourseIds;
	pst_CoursePoi p,q;
	printf("请输入班级和课程号：");
	scanf("%d%d",&i_ClassIds,&i_CourseIds);
	p=q=*pst_CourseHead;
	while (p!=NULL&&i_flag)
	{
		if (p->i_ClassId==i_ClassIds&&p->i_CourseId==i_CourseIds)
		{
			if (p==*pst_CourseHead)//删除的为头结点
			{
				*pst_CourseHead=p->next;free(q);
			}
			else
			{
				q->next=p->next;free(p);//删除普通元素
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

//查找课程信息
void CourselistFind(pst_CoursePoi *pst_CourseHead)
{
	int i_ClassIds;
	pst_CoursePoi p;
	printf("请输入要查询的学生的学号：");
	scanf("%d",&i_ClassIds);
	p=*pst_CourseHead;
	while(p!=NULL&&i_flag)
	{
		if (p->i_ClassId==i_ClassIds)
		{
			printf("班级编号：%d\n",p->i_ClassId);
			printf("课程号：%d\n",&p->sz_CourseName);
			printf("课程名：%d\n",p->i_CourseId);
			i_flag=0;
		}
		else
			p=p->next;//指针走到下一结点
	}
}

//显示课程信息
void CourseShow(pst_CoursePoi *pst_CourseHead) 
{
	pst_CoursePoi p;
	p=*pst_CourseHead;
	printf("班级编号 课程号  课程名  \n");
	while(p!=NULL)
	{
		printf("%d    ",p->i_ClassId);
		printf("%d     ",p->i_CourseId);
		printf("%s\n",p->sz_CourseName);
		p=p->next;
	}
}

//成绩信息链表操作
//建立成绩信息单链表
void CreateScoreList(pst_StuScorePoi *pst_ScoreHead)
{
	int i_StuIds;
	pst_StuScorePoi p,r;//说明变量
	p=*pst_ScoreHead;
	r=(pst_StuScorePoi)malloc(sizeof(StuScoreList));
	r->next=NULL;
	if (r==NULL)
	{
		printf("分配空间失败");
		return;
	}
	if (p==NULL)//原表为空表
		*pst_ScoreHead=r;
	else
	{
		while(p->next!=NULL)
		p=p->next;//遍历链表
		p->next=r;//在表尾插入元素
	}
	printf("请输入学号：");
    scanf("%d",&r->i_StuId); 
	printf("请输入课程号：");
	scanf("%d",&r->i_CourseId);
	printf("请输入课程分数：");
	scanf("%d",&r->i_CourseScore);	
}

//删除成绩信息
void StuScorelistDelete(pst_StuScorePoi *pst_ScoreHead)
{
	int i_StuIds;
	pst_StuScorePoi p,q;
	printf("请输入学生学号：");
	scanf("%d",&i_StuIds);
	p=q=*pst_ScoreHead;
	while (p!=NULL&&i_flag)
	{
		if (p->i_StuId==i_StuIds)
		{
			if (p==*pst_ScoreHead)//删除的为头结点
			{
				*pst_ScoreHead=p->next;free(q);
			}
			else
			{
				q->next=p->next;free(p);//删除普通元素
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

//查找成绩信息
void StuScorelistFind(pst_StuScorePoi *pst_ScoreHead)
{
	int i_StuIds;
	pst_StuScorePoi p;
	printf("请输入要查询的学生的学号：");
	scanf("%d",&i_StuIds);
	p=*pst_ScoreHead;
	while(p!=NULL&&i_flag)
	{
		if (p->i_StuId==i_StuIds)
		{
			printf("课程号：%d\n",p->i_CourseId);
			printf("学号：%d\n",&p->i_StuId);
			printf("成绩：%d\n",p->i_CourseScore);
			i_flag=0;
		}
		else
			p=p->next;//指针走到下一结点
	}
}

//显示成绩信息
void StuScoreShow(pst_StuScorePoi *pst_ScoreHead) 
{
	int *i_Poi;//定义一个指针类型的数组
	pst_StuScorePoi p;
	int i_Count=0;//计数器
	int i,j;
	int i_CourseIds;//输入课程号
	p=*pst_ScoreHead;
	printf("课程号  学号  成绩\n");

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
		printf("分配空间失败\n");
		exit(1);
	}

	for (i=0;i<i_Count-1;i++)
	{
		i_Poi[i]=p->i_CourseScore;
		p=p->next;
	}

	printf("单科成绩排序，输入课程号：");
	scanf("%d",&i_CourseIds);//输入课程号
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
		printf("成绩：%d\n",i_Poi[i]);
	}
}
#endif
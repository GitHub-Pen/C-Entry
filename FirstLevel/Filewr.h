#ifndef __Filewr_h_
#define __Filewr_h_ 

#include "WholeVari.h"//�����ȫ�ֱ���

	int i;//ѭ������
//�ļ�д����
void Filesave()
{
	FILE *fp;
	printf("\n������д���ļ�\n");
	printf("ѧ��   ����  ����\n");
	for (int i=0;i<3;i++)
	{
		scanf("%d%s%d",&stud[i].i_StuId,stud[i].sz_StuName,&stud[i].i_StuAge);
	}
	if ((fp=fopen("stu.dat","wb"))==NULL)
	{
		printf("���ļ�����\n");
		return;
	}
	for (i=0;i<3;i++)
	{
		if (fwrite(&stud[i],sizeof(struct Stu_Type),1,fp)!=1)
			printf("�ļ�д�����\n");
	}
	fclose(fp);
}

//�ļ�������
void FileLoad()
{
	FILE *fp;
	printf("���ļ��ж���������\n");
	printf("ѧ��   ����  ����\n");
	if ((fp=fopen("stu.dat","wb"))==NULL)
	{
		printf("���ļ�����\n");
		exit(0);
	}
	for (i=0;i<3;i++)
	{
		fread(&stud[i],sizeof(struct Stu_Type),1,fp);
		printf("%d %s %d\n",stud[i].i_StuId,stud[i].sz_StuName,stud[i].i_StuAge);
	}
	fclose(fp);
}
#endif
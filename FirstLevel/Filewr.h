#ifndef __Filewr_h_
#define __Filewr_h_ 

#include "WholeVari.h"//定义的全局变量

	int i;//循环变量
//文件写操作
void Filesave()
{
	FILE *fp;
	printf("\n将数据写入文件\n");
	printf("学号   姓名  年龄\n");
	for (int i=0;i<3;i++)
	{
		scanf("%d%s%d",&stud[i].i_StuId,stud[i].sz_StuName,&stud[i].i_StuAge);
	}
	if ((fp=fopen("stu.dat","wb"))==NULL)
	{
		printf("打开文件错误\n");
		return;
	}
	for (i=0;i<3;i++)
	{
		if (fwrite(&stud[i],sizeof(struct Stu_Type),1,fp)!=1)
			printf("文件写入错误\n");
	}
	fclose(fp);
}

//文件读操作
void FileLoad()
{
	FILE *fp;
	printf("从文件中读入入数据\n");
	printf("学号   姓名  年龄\n");
	if ((fp=fopen("stu.dat","wb"))==NULL)
	{
		printf("打开文件错误\n");
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
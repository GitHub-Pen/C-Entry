#ifndef __Ch_Array_h_
#define __Ch_Array_h_ 

#include "WholeVari.h"//定义的全局变量


//字符数组的定义、赋值与使用
void Ch_Array()
{

	char sz_Cha[80];
	char sz_Chb[80];
	char sz_Chc[80];
	printf("\n请输入字符串：");
	scanf("%s",sz_Cha);

	//求取字符串长度
	i_Tmp=strlen(sz_Cha);
	printf("字符串长度为：%d\n",i_Tmp);

	//字符串复制
	strcpy(sz_Chc,sz_Cha);
	printf("复制输入的字符串给另一个字符数组：%s\n",sz_Chc);

	//字符串连接函数
	printf("请再次输入一个字符串:");
	scanf("%s",sz_Chb);
	strcat(sz_Cha,sz_Chb);
	printf("两个字符串连接之后：%s\n",sz_Cha);

	//字符串比较函数
	if (strcmp(sz_Chc,sz_Chb)==0)//从左到右逐个字符比较，（按ASCII码值大小）直到遇到不相同的字符或“\0”为止；
	{
		printf("比较两次输入的字符串：相等\n");
	}
	else
		printf("比较两次输入的字符串：不相等\n");
	i_Tmp=strcmp(sz_Chc,sz_Chb);
	printf("strcmp输出函数返回值：%d\n",i_Tmp);//sz_Chc<sz_Chb,则函数返回一个负整数值；sz_Chc=sz_Chb，函数返回0；sz_Chc>sz_Chb,函数返回一个正整数值；


	//sprintf和sscanf的用法
	printf("\n关于sscanf和sprintf的用法\n");

	sprintf(sz_Cha,"%s%d%c","abc",6,'A');//将输出结果写入数组sz_Cha中
	i_Tmp=sprintf(sz_Cha,"%s%d%c","abc",6,'A');
	printf("sprintf结果输出：%s\n",sz_Cha);
	printf("sprintf函数返回值输出：%d\n",i_Tmp);//其函数返回值为字符串长度

	sscanf(sz_Cha,"%4s",sz_Chc);//从一个字符串中读进与指定格式相同的数据,其返回值为读入有效数据的个数
	i_Tmp=sscanf(sz_Cha,"%4s",sz_Chc);
	printf("sscanf结果输出:%s\n",sz_Chc);
	printf("sscanf函数返回值输出：%d\n\n",i_Tmp);//其函数返回值为读入有效数据的个数

}
#endif
#ifndef __MenuClassInfo_h_
#define __MenuClassInfo_h_ 

#include "WholeVari.h"

int MenuClassInfo()
{
	printf("\n\t***班级管理系统***\n");
	printf("\t11—录入班级信息\n");
	printf("\t12—删除班级信息\n");
	printf("\t13—查找班级信息\n");
	printf("\t14—显示班级信息\n");
	printf("\t15—保存班级信息\n");
	printf("\t16—读取班级信息\n");
	printf("\tDefault:退出，返回学籍主菜单\n");
	printf("        ***************************\n\n");
	printf("输入班级管理系统菜单选项：");
	scanf("%d",&i_Menu);
	return i_Menu;
}

#endif
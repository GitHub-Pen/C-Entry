#ifndef __MenuSchool_h_
#define __MenuSchool_h_ 
#include "WholeVari.h"
int MenuSchool()
{
	int i_Menu;
	printf("\n***学籍管理系统*****\n");
	printf("1—学生班级管理\n");
	printf("2—学生信息管理系统\n");
	printf("3—课程信息管理系统\n");
	printf("4—成绩信息管理系统\n");
	printf("5—Default:返回主菜单\n");
	printf("**********************\n\n");
	printf("输入学籍管理系统菜单选项：");
	scanf("%d",&i_Menu);
	return i_Menu;

}
#endif
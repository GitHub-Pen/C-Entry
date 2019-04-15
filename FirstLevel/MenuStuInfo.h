#ifndef __MenuStuInfo_h_
#define __MenuStuInfo_h_ 
#include "WholeVari.h"

int MenuStuInfo()
{
	printf("\n\t***学生管理系统***\n");
	printf("\t21—录入学生信息\n");
	printf("\t22—删除学生信息\n");
	printf("\t23—查找学生信息\n");
	printf("\t24—修改学生信息\n");
	printf("\t25—显示学生信息\n");
	printf("\t26—保存学生信息\n");
	printf("\t27—读取学生信息\n");
	printf("\tDefault:退出，返回学籍主菜单\n");
	printf("       ***************************\n\n");
	printf("输入学生管理系统菜单选项：");
	scanf("%d",&i_Menu);
	return i_Menu;
}
#endif
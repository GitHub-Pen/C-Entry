#ifndef __MenuCourseInfo_h_
#define __MenuCourseInfo_h_ 
#include "WholeVari.h"

int MenuCourseInfo()
{
	printf("\n\t***课程管理系统***\n");
	printf("\t31—录入课程信息\n");
	printf("\t32—删除课程信息\n");
	printf("\t33—查找课程信息\n");
	printf("\t34—显示课程信息\n");
	printf("\t35—保存课程信息\n");
	printf("\t36—读取课程信息\n");
	printf("\tDefault:退出，返回学籍主菜单\n");
	printf("       ***************************\n\n");
	printf("输入课程管理系统菜单选项：");
	scanf("%d",&i_Menu);
		return i_Menu;
}

#endif
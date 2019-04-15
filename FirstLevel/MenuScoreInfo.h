#ifndef __MenuScoreInfo_h_
#define __MenuScoreInfo_h_ 
#include "WholeVari.h"

int MenuScoreInfo()
{
	printf("\n\t***成绩管理系统***\n");
	printf("\t41—录入成绩信息\n");
	printf("\t42—删除成绩信息\n");
	printf("\t43—查找成绩信息\n");
	printf("\t44—显示成绩信息\n");
	printf("\t45—保存成绩信息\n");
	printf("\t46—读取成绩信息\n");
	printf("\tDefault:退出，返回学籍主菜单\n");
	printf("       ***************************\n\n");
	printf("输入成绩系统菜单选项：");
	scanf("%d",&i_Menu);
	return i_Menu;
}

#endif
#ifndef __MenuMain_h_
#define __MenuMain_h_ 

#include "WholeVari.h"//定义的全局变量

//主菜单
char MenuMain()
{
	char sz_Menu[6];
	char c_Menu;
	printf("***************第一层任务******************\n");
	printf("\t1----变量定义\n");
	printf("\t2----算术运算符\n");
	printf("\t3----位运算符\n");
	printf("\t4----逻辑运算符\n");
	printf("\t5----地址及指针操作符\n");
	printf("\t6----数组定义以及使用\n");
	printf("\t7----字符数组\n");
	printf("\t8----指针与动态数组\n");
	printf("\t9----全局变量与局部变量\n");
	printf("\tA----循环结构\n");
	printf("\tB----函数使用\n");
	printf("\tC----文件操作\n");
	printf("\tD----链表结构\n");
	printf("\tE----冒泡排序与折半排序\n");
	printf("\tF----Struct、union和宏定义\n");
	printf("\tG----学籍管理系统\n");
	printf("\t0----退出\n");
	printf("******************************************\n");
	printf("请输入主菜单选项：");
	scanf("%s",sz_Menu);
	if (strlen(sz_Menu)>1)
	{
		fflush(stdin);
		printf("选择错误，请重新选择\n");
	}
	else
	{
		c_Menu=sz_Menu[0];
	}
	return c_Menu;
}
#endif
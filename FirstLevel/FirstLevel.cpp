// FirstLevel.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include <malloc.h>
//#include "FirstLevel.h"


//自定义的.h文件
#include "Ap_Variable.h"//全局变量与局部变量
#include "Array.h"//数组
#include "Ch_Array.h"//字符数组
#include "Cycle.h"//循环结构
#include "DataType.h"//struct、union、宏定义
#include "DoubleList.h"//双链表
#include "Filewr.h"//文件读写
#include "FuncValue.h"//函数值传递
#include "Indicator.h"// 指针的概念与使用,一维、二维动态数组
#include "LocateOper.h"//地址及指针操作符
#include "LogicalOper.h"//逻辑操作符
#include "MathOper.h"//算术运算符
#include "NumSort.h"//冒泡排序、折半排序
#include "Postoper.h"//位运算符
#include "StudentList.h"//学生链表
#include "variable.h"//变量声明与定义部分定义
#include "WholeVari.h"//定义的全局变量

#include "MenuMain.h"//主菜单
#include "MenuSchool.h"//学籍管理系统菜单
#include "MenuClassInfo.h"//班级信息系统菜单
#include "MenuStuInfo.h"//学生信息系统菜单
#include "MenuCourseInfo.h"//课程信息系统菜单
#include "MenuScoreInfo.h"//成绩管理系统菜单



pst_StuPoi pst_StuHead=NULL;              // pst_StuHead   ;
pst_ClassPoi pst_ClassHead=NULL;          // pst_ClassHead ;
pst_CoursePoi pst_CourseHead=NULL;
pst_StuScorePoi pst_ScoreHead=NULL;

int i_Quit=1;//标记变量，跳出循环
char sz_Menu[6];//字符型的数组住菜单
char c_Menu;//菜单选项

//主程序部分
int main()
{
	do
	{
			switch (MenuMain())
			{
				case '1': Vari();
					break;
				case '2': Mathoper();
					break;
				case '3': Postoper();
					break;
				case '4': Logicoper();
					break;
				case '5': Locate();
					break;
				case '6': Array();
					break;
				case '7': Ch_Array();
					break;
				case '8': Indicator();
					break;
				case '9': Ap_Vari();
					break;
				case 'A': Cycle();
					break;
				case 'B':
					FuncValue(i_a,i_b);
					FuncQuote(i_a,i_b);
					FuncSite(&i_a,&i_b);
					break;
				case 'C':
					Filesave();
					FileLoad();
					break;
				case 'D':
					List=DlistCreate();//创建双链表
					DlListInsert(List,i_Locate,i_Elem);//插入元素
					DlListDelete(List,i_Locate);//删除元素
					DlListClear(List);//清空链表
					break;
				case 'E':
					BubbleSort();
					HalfSort();
					break;
				case 'F': Type();
					break;
				case 'G': 
					{
						int i_Choose;//菜单选择项
						int i_flag=1;//标记变量
						while (i_flag==1)
						{
							switch(MenuSchool())
							{
							case 1:
								{
									int i_Cflag=1;//标记量
									while (i_Cflag==1)
									{
										switch (MenuClassInfo())
										{
										case 11:
											printf("\t11-录入班级信息\n");
											CreateClassList(&pst_ClassHead);
											break;
										case 12:
											printf("\t12-删除班级信息\n");
											ClasslistDelete(&pst_ClassHead);
											break;
										case 13:
											printf("\t13-查找班级信息\n");
											ClasslistFind(&pst_ClassHead);
											break;
										case 14:
											printf("\t15-显示班级信息\n");
											ClassShow(&pst_ClassHead);
											 break;
										case 15:break;
										case 16:break;
										default:
											printf("退出班级管理系统，返回学籍系统主菜单\n");
											i_Cflag=0;
											break;	
										 }
									  }
								   }
									   break;
							case 2:
								{
									int i_Sflag=1;//标记量
									while (i_Sflag==1)
									{
										switch (MenuStuInfo())
										{
										case 21:
											printf("\t21-录入学生信息\n");
											CreateStuList(&pst_StuHead);break;
										case 22:
											printf("\t22-删除学生信息\n");
											LinklistDelete(&pst_StuHead);break;
										case 23:
											printf("\t23-查找学生信息\n");
											LinklistFind(&pst_StuHead);break;
										case 24:
											printf("\t24-修改学生信息\n");
											LinklistModifier(&pst_StuHead);break;
										case 25:
											printf("\t25-显示学生信息\n");
											Show(&pst_StuHead); break;
										case 26:break;
										case 27:break;
										default:
											printf("退出学生管理系统，返回学籍主菜单\n");
											i_Sflag=0;
											break;
										}
									 }
								  }
								 break;

							case 3:
								{
									int i_Kflag=1;//标记量
									while (i_Kflag==1)
									{
										switch (MenuCourseInfo())
										{
										case 31:
											printf("\t31-录入课程信息\n");
											CreateCourseList(&pst_CourseHead);break;
										case 32:
											printf("\t32-删除课程信息\n");
											CourselistDelete(&pst_CourseHead);break;
										case 33:
											printf("\t33-查找课程信息\n");
											CourselistFind(&pst_CourseHead);break;
										case 34:
											printf("\t35-显示课程信息\n");
											CourseShow(&pst_CourseHead); break;
										case 35:break;
										case 36:break;
										default:
											printf("退出课程管理系统，返回学籍主菜单\n");
											i_Kflag=0;
											break;
										 }
									 }
								  }
								break;
							case 4:
								{
									int i_Fflag=1;//标记量
									while (i_Fflag==1)
									{
										switch (MenuScoreInfo())
										{
										case 41:
											printf("\t31-录入成绩信息\n");
											CreateScoreList(&pst_ScoreHead);break;
										case 42:
											printf("\t32-删除成绩信息\n");
											StuScorelistDelete(&pst_ScoreHead);break;
										case 43:
											printf("\t33-查找成绩信息\n");
											StuScorelistFind(&pst_ScoreHead);break;
										case 44:
											printf("\t35-显示成绩信息\n");
											StuScoreShow(&pst_ScoreHead); break;
										case 45:break;
										case 46:break;
										default:
											printf("退出成绩管理系统，返回学籍主菜单\n");
											i_Fflag=0;
											break;
									     }
									  }
								   }
								    break;
							case 5:
								break;
							default:
									printf("退出学籍管理系统，返回主菜单\n");
									i_flag=0;
									break;
							}
						} 
					}
					break;
				case '0':exit(0);
				default:break;
			}
	}while(i_Quit!=0);
	return 0;
}


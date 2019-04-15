#ifndef __WholeVari_h_
#define __WholeVari_h_


//全局变量声明部分
int i_a;
int i_b;
int i_c=6;//i_c为全局变量，在全局变量与局部变量的函数中用到
int i_Len=0;//代表数组长度
int i_Tmp;//中间变量
int i_flag=1;//标记变量
char c_Ch;
float f_Vari;
double d_Vari;
int i_Menu;//菜单选项

typedef struct Class//班级信息结构体
{
	int i_ClassId;
	int i_StuId;
	struct Class *next;
}ClassList,*pst_ClassPoi;

typedef struct Stu_Type//学生信息结构体
{
	int i_StuId;
	char sz_StuName[10];
	int i_StuAge;
	struct Stu_Type *next;
}StuList,*pst_StuPoi;
struct Stu_Type stud[3];//定义数组,应用于文件的读写

typedef struct Course//课程信息结构体
{
	int i_CourseId;
	char sz_CourseName[9];
	int i_ClassId;
	struct Course *next;
}CourseList,*pst_CoursePoi;

typedef struct StuScore//学生成绩结构体
{
	int i_StuId;
	int i_CourseId;
	int i_CourseScore;
	struct StuScore *next;
}StuScoreList,*pst_StuScorePoi;

typedef int Elemtype;//双链表结点类型
typedef struct Node
{
	Elemtype data;
	struct Node *prior;
	struct Node *next;
}Node,*pst_Dl_List;
#endif
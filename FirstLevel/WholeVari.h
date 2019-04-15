#ifndef __WholeVari_h_
#define __WholeVari_h_


//ȫ�ֱ�����������
int i_a;
int i_b;
int i_c=6;//i_cΪȫ�ֱ�������ȫ�ֱ�����ֲ������ĺ������õ�
int i_Len=0;//�������鳤��
int i_Tmp;//�м����
int i_flag=1;//��Ǳ���
char c_Ch;
float f_Vari;
double d_Vari;
int i_Menu;//�˵�ѡ��

typedef struct Class//�༶��Ϣ�ṹ��
{
	int i_ClassId;
	int i_StuId;
	struct Class *next;
}ClassList,*pst_ClassPoi;

typedef struct Stu_Type//ѧ����Ϣ�ṹ��
{
	int i_StuId;
	char sz_StuName[10];
	int i_StuAge;
	struct Stu_Type *next;
}StuList,*pst_StuPoi;
struct Stu_Type stud[3];//��������,Ӧ�����ļ��Ķ�д

typedef struct Course//�γ���Ϣ�ṹ��
{
	int i_CourseId;
	char sz_CourseName[9];
	int i_ClassId;
	struct Course *next;
}CourseList,*pst_CoursePoi;

typedef struct StuScore//ѧ���ɼ��ṹ��
{
	int i_StuId;
	int i_CourseId;
	int i_CourseScore;
	struct StuScore *next;
}StuScoreList,*pst_StuScorePoi;

typedef int Elemtype;//˫����������
typedef struct Node
{
	Elemtype data;
	struct Node *prior;
	struct Node *next;
}Node,*pst_Dl_List;
#endif
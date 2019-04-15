// FirstLevel.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include <malloc.h>
//#include "FirstLevel.h"


//�Զ����.h�ļ�
#include "Ap_Variable.h"//ȫ�ֱ�����ֲ�����
#include "Array.h"//����
#include "Ch_Array.h"//�ַ�����
#include "Cycle.h"//ѭ���ṹ
#include "DataType.h"//struct��union���궨��
#include "DoubleList.h"//˫����
#include "Filewr.h"//�ļ���д
#include "FuncValue.h"//����ֵ����
#include "Indicator.h"// ָ��ĸ�����ʹ��,һά����ά��̬����
#include "LocateOper.h"//��ַ��ָ�������
#include "LogicalOper.h"//�߼�������
#include "MathOper.h"//���������
#include "NumSort.h"//ð�������۰�����
#include "Postoper.h"//λ�����
#include "StudentList.h"//ѧ������
#include "variable.h"//���������붨�岿�ֶ���
#include "WholeVari.h"//�����ȫ�ֱ���

#include "MenuMain.h"//���˵�
#include "MenuSchool.h"//ѧ������ϵͳ�˵�
#include "MenuClassInfo.h"//�༶��Ϣϵͳ�˵�
#include "MenuStuInfo.h"//ѧ����Ϣϵͳ�˵�
#include "MenuCourseInfo.h"//�γ���Ϣϵͳ�˵�
#include "MenuScoreInfo.h"//�ɼ�����ϵͳ�˵�



pst_StuPoi pst_StuHead=NULL;              // pst_StuHead   ;
pst_ClassPoi pst_ClassHead=NULL;          // pst_ClassHead ;
pst_CoursePoi pst_CourseHead=NULL;
pst_StuScorePoi pst_ScoreHead=NULL;

int i_Quit=1;//��Ǳ���������ѭ��
char sz_Menu[6];//�ַ��͵�����ס�˵�
char c_Menu;//�˵�ѡ��

//�����򲿷�
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
					List=DlistCreate();//����˫����
					DlListInsert(List,i_Locate,i_Elem);//����Ԫ��
					DlListDelete(List,i_Locate);//ɾ��Ԫ��
					DlListClear(List);//�������
					break;
				case 'E':
					BubbleSort();
					HalfSort();
					break;
				case 'F': Type();
					break;
				case 'G': 
					{
						int i_Choose;//�˵�ѡ����
						int i_flag=1;//��Ǳ���
						while (i_flag==1)
						{
							switch(MenuSchool())
							{
							case 1:
								{
									int i_Cflag=1;//�����
									while (i_Cflag==1)
									{
										switch (MenuClassInfo())
										{
										case 11:
											printf("\t11-¼��༶��Ϣ\n");
											CreateClassList(&pst_ClassHead);
											break;
										case 12:
											printf("\t12-ɾ���༶��Ϣ\n");
											ClasslistDelete(&pst_ClassHead);
											break;
										case 13:
											printf("\t13-���Ұ༶��Ϣ\n");
											ClasslistFind(&pst_ClassHead);
											break;
										case 14:
											printf("\t15-��ʾ�༶��Ϣ\n");
											ClassShow(&pst_ClassHead);
											 break;
										case 15:break;
										case 16:break;
										default:
											printf("�˳��༶����ϵͳ������ѧ��ϵͳ���˵�\n");
											i_Cflag=0;
											break;	
										 }
									  }
								   }
									   break;
							case 2:
								{
									int i_Sflag=1;//�����
									while (i_Sflag==1)
									{
										switch (MenuStuInfo())
										{
										case 21:
											printf("\t21-¼��ѧ����Ϣ\n");
											CreateStuList(&pst_StuHead);break;
										case 22:
											printf("\t22-ɾ��ѧ����Ϣ\n");
											LinklistDelete(&pst_StuHead);break;
										case 23:
											printf("\t23-����ѧ����Ϣ\n");
											LinklistFind(&pst_StuHead);break;
										case 24:
											printf("\t24-�޸�ѧ����Ϣ\n");
											LinklistModifier(&pst_StuHead);break;
										case 25:
											printf("\t25-��ʾѧ����Ϣ\n");
											Show(&pst_StuHead); break;
										case 26:break;
										case 27:break;
										default:
											printf("�˳�ѧ������ϵͳ������ѧ�����˵�\n");
											i_Sflag=0;
											break;
										}
									 }
								  }
								 break;

							case 3:
								{
									int i_Kflag=1;//�����
									while (i_Kflag==1)
									{
										switch (MenuCourseInfo())
										{
										case 31:
											printf("\t31-¼��γ���Ϣ\n");
											CreateCourseList(&pst_CourseHead);break;
										case 32:
											printf("\t32-ɾ���γ���Ϣ\n");
											CourselistDelete(&pst_CourseHead);break;
										case 33:
											printf("\t33-���ҿγ���Ϣ\n");
											CourselistFind(&pst_CourseHead);break;
										case 34:
											printf("\t35-��ʾ�γ���Ϣ\n");
											CourseShow(&pst_CourseHead); break;
										case 35:break;
										case 36:break;
										default:
											printf("�˳��γ̹���ϵͳ������ѧ�����˵�\n");
											i_Kflag=0;
											break;
										 }
									 }
								  }
								break;
							case 4:
								{
									int i_Fflag=1;//�����
									while (i_Fflag==1)
									{
										switch (MenuScoreInfo())
										{
										case 41:
											printf("\t31-¼��ɼ���Ϣ\n");
											CreateScoreList(&pst_ScoreHead);break;
										case 42:
											printf("\t32-ɾ���ɼ���Ϣ\n");
											StuScorelistDelete(&pst_ScoreHead);break;
										case 43:
											printf("\t33-���ҳɼ���Ϣ\n");
											StuScorelistFind(&pst_ScoreHead);break;
										case 44:
											printf("\t35-��ʾ�ɼ���Ϣ\n");
											StuScoreShow(&pst_ScoreHead); break;
										case 45:break;
										case 46:break;
										default:
											printf("�˳��ɼ�����ϵͳ������ѧ�����˵�\n");
											i_Fflag=0;
											break;
									     }
									  }
								   }
								    break;
							case 5:
								break;
							default:
									printf("�˳�ѧ������ϵͳ���������˵�\n");
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


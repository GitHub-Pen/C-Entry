#ifndef __MenuMain_h_
#define __MenuMain_h_ 

#include "WholeVari.h"//�����ȫ�ֱ���

//���˵�
char MenuMain()
{
	char sz_Menu[6];
	char c_Menu;
	printf("***************��һ������******************\n");
	printf("\t1----��������\n");
	printf("\t2----���������\n");
	printf("\t3----λ�����\n");
	printf("\t4----�߼������\n");
	printf("\t5----��ַ��ָ�������\n");
	printf("\t6----���鶨���Լ�ʹ��\n");
	printf("\t7----�ַ�����\n");
	printf("\t8----ָ���붯̬����\n");
	printf("\t9----ȫ�ֱ�����ֲ�����\n");
	printf("\tA----ѭ���ṹ\n");
	printf("\tB----����ʹ��\n");
	printf("\tC----�ļ�����\n");
	printf("\tD----����ṹ\n");
	printf("\tE----ð���������۰�����\n");
	printf("\tF----Struct��union�ͺ궨��\n");
	printf("\tG----ѧ������ϵͳ\n");
	printf("\t0----�˳�\n");
	printf("******************************************\n");
	printf("���������˵�ѡ�");
	scanf("%s",sz_Menu);
	if (strlen(sz_Menu)>1)
	{
		fflush(stdin);
		printf("ѡ�����������ѡ��\n");
	}
	else
	{
		c_Menu=sz_Menu[0];
	}
	return c_Menu;
}
#endif
#ifndef __MenuStuInfo_h_
#define __MenuStuInfo_h_ 
#include "WholeVari.h"

int MenuStuInfo()
{
	printf("\n\t***ѧ������ϵͳ***\n");
	printf("\t21��¼��ѧ����Ϣ\n");
	printf("\t22��ɾ��ѧ����Ϣ\n");
	printf("\t23������ѧ����Ϣ\n");
	printf("\t24���޸�ѧ����Ϣ\n");
	printf("\t25����ʾѧ����Ϣ\n");
	printf("\t26������ѧ����Ϣ\n");
	printf("\t27����ȡѧ����Ϣ\n");
	printf("\tDefault:�˳�������ѧ�����˵�\n");
	printf("       ***************************\n\n");
	printf("����ѧ������ϵͳ�˵�ѡ�");
	scanf("%d",&i_Menu);
	return i_Menu;
}
#endif
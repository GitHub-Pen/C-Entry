#ifndef __MenuScoreInfo_h_
#define __MenuScoreInfo_h_ 
#include "WholeVari.h"

int MenuScoreInfo()
{
	printf("\n\t***�ɼ�����ϵͳ***\n");
	printf("\t41��¼��ɼ���Ϣ\n");
	printf("\t42��ɾ���ɼ���Ϣ\n");
	printf("\t43�����ҳɼ���Ϣ\n");
	printf("\t44����ʾ�ɼ���Ϣ\n");
	printf("\t45������ɼ���Ϣ\n");
	printf("\t46����ȡ�ɼ���Ϣ\n");
	printf("\tDefault:�˳�������ѧ�����˵�\n");
	printf("       ***************************\n\n");
	printf("����ɼ�ϵͳ�˵�ѡ�");
	scanf("%d",&i_Menu);
	return i_Menu;
}

#endif
#ifndef __Ch_Array_h_
#define __Ch_Array_h_ 

#include "WholeVari.h"//�����ȫ�ֱ���


//�ַ�����Ķ��塢��ֵ��ʹ��
void Ch_Array()
{

	char sz_Cha[80];
	char sz_Chb[80];
	char sz_Chc[80];
	printf("\n�������ַ�����");
	scanf("%s",sz_Cha);

	//��ȡ�ַ�������
	i_Tmp=strlen(sz_Cha);
	printf("�ַ�������Ϊ��%d\n",i_Tmp);

	//�ַ�������
	strcpy(sz_Chc,sz_Cha);
	printf("����������ַ�������һ���ַ����飺%s\n",sz_Chc);

	//�ַ������Ӻ���
	printf("���ٴ�����һ���ַ���:");
	scanf("%s",sz_Chb);
	strcat(sz_Cha,sz_Chb);
	printf("�����ַ�������֮��%s\n",sz_Cha);

	//�ַ����ȽϺ���
	if (strcmp(sz_Chc,sz_Chb)==0)//����������ַ��Ƚϣ�����ASCII��ֵ��С��ֱ����������ͬ���ַ���\0��Ϊֹ��
	{
		printf("�Ƚ�����������ַ��������\n");
	}
	else
		printf("�Ƚ�����������ַ����������\n");
	i_Tmp=strcmp(sz_Chc,sz_Chb);
	printf("strcmp�����������ֵ��%d\n",i_Tmp);//sz_Chc<sz_Chb,��������һ��������ֵ��sz_Chc=sz_Chb����������0��sz_Chc>sz_Chb,��������һ��������ֵ��


	//sprintf��sscanf���÷�
	printf("\n����sscanf��sprintf���÷�\n");

	sprintf(sz_Cha,"%s%d%c","abc",6,'A');//��������д������sz_Cha��
	i_Tmp=sprintf(sz_Cha,"%s%d%c","abc",6,'A');
	printf("sprintf��������%s\n",sz_Cha);
	printf("sprintf��������ֵ�����%d\n",i_Tmp);//�亯������ֵΪ�ַ�������

	sscanf(sz_Cha,"%4s",sz_Chc);//��һ���ַ����ж�����ָ����ʽ��ͬ������,�䷵��ֵΪ������Ч���ݵĸ���
	i_Tmp=sscanf(sz_Cha,"%4s",sz_Chc);
	printf("sscanf������:%s\n",sz_Chc);
	printf("sscanf��������ֵ�����%d\n\n",i_Tmp);//�亯������ֵΪ������Ч���ݵĸ���

}
#endif
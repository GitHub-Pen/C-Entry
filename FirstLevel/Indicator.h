#ifndef __Indicator_h_
#define __Indicator_h_ 

#include "WholeVari.h"//�����ȫ�ֱ���

//ָ��ĸ�����ʹ�á�һά����ά��̬����
void Indicator()
{
	//һά��̬����Ŀ���
	printf("\nһά��̬����Ŀ���\n");
	int i_Count;
	int i_n;
	int *i_Poi;
	printf("���������鳤��:");
	scanf("%d",&i_n);
	i_Poi=(int*)malloc(i_n*sizeof(int));
	if (i_Poi==NULL)
	{
		printf("����ռ�ʧ��\n");
		exit(1);
	}
	printf("�����������Ԫ��:\n");
	for (i_Count=0;i_Count<i_n;i_Count++)
	{
		i_Poi[i_Count]=i_Count*2;
		printf("%d  ",i_Poi[i_Count]);

	}
	printf("\n");
	free(i_Poi);

	//��ά��̬����Ŀ���
	printf("\n��ά��̬����Ŀ���\n");
	int i_r,i_c;//ѭ������
	int **i_Ppoi;//����ָ��
	int i_Row,i_Col;//�������������������
	printf("�������ά���������������:");
	scanf("%d,%d",&i_Row,&i_Col);

	i_Ppoi=(int**)malloc(i_Row*sizeof(int));//���ٿռ�
	for (i_r=0;i_r<=i_Row-1;i_r++)
	{
		i_Ppoi[i_r]=(int*)malloc(i_Col*sizeof(int));
	}

	for (i_r=0;i_r<=i_Row-1;i_r++)//���Ԫ��
	{
		for (i_c=0;i_c<=i_Col-1;i_c++)
		{
			i_Ppoi[i_r][i_c]=i_r+i_c;
			printf("%d\t",i_Ppoi[i_r][i_c]);
		}
		printf("\n");
	}
	for (i_r=0;i_r<=i_Row-1;i_r++)//�ͷſռ�
	{
		free(i_Ppoi[i_r]);	
	}
	free(i_Ppoi);
}
#endif
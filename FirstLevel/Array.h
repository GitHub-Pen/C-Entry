#ifndef __Array_h_
#define __Array_h_ 

#include "WholeVari.h"//�����ȫ�ֱ���

//���鶨���Լ�ʹ��,���壺������[�±�]
void Array()
{
	int sz_Array[10];//һά����
	int i_dla;
	int i_dlb;
	int sz_DlArray[5][5];//��ά����
	for (i_a=0;i_a<10;i_a++)
	{
		sz_Array[i_a]=i_a*2+2;
	}
	printf("\n����������Ԫ��\n");
	for (i_a=0;i_a<10;i_a++)
	{
		printf("%d\t",sz_Array[i_a]);
	}
	printf("\n");

	//for (i_dla=0;i_dla<5;i_dla++)
	//{
	//	for (i_dlb;i_dlb<5;i_dlb++)
	//	{
	//		if (i_dla%2==0)
	//		{
	//			sz_DlArray[i_dla][i_dlb]=i_dla*5+i_dlb+1;
	//		} 
	//		else
	//		{
	//			sz_DlArray[i_dla][4-i_dlb]=i_dla*5+i_dlb+1;
	//		}
	//	 }
	// }
	//for (i_dla=0;i_dla<5;i_dla++)
	//{
	//	for (i_dlb;i_dlb<5;i_dlb++)
	//	{
	//		printf("%d  ",sz_DlArray[i_dla][i_dlb]);
	//	}
	//}
	//printf("\n");	

}
#endif
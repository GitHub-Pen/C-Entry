#ifndef __Array_h_
#define __Array_h_ 

#include "WholeVari.h"//定义的全局变量

//数组定义以及使用,定义：数组名[下标]
void Array()
{
	int sz_Array[10];//一维数组
	int i_dla;
	int i_dlb;
	int sz_DlArray[5][5];//二维数组
	for (i_a=0;i_a<10;i_a++)
	{
		sz_Array[i_a]=i_a*2+2;
	}
	printf("\n逐个输出数组元素\n");
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
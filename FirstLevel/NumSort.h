#ifndef __NumSort_h_
#define __NumSort_h_ 

#include "WholeVari.h"//定义的全局变量

//冒泡排序
void BubbleSort()

{
	//冒泡排序
	int i,j;//应用于循环
	int *i_Poi;
	printf("\n一、冒泡排序\n");
	printf("请输入数组长度i_Len:");
	scanf("%d",&i_Len);
	i_Poi=(int*)malloc(i_Len*sizeof(int));
	printf("请输入i_Len个数：");
	for (i=0;i<i_Len;i++)
	{
		scanf("%d",i_Poi+i);
	}
	for (i=0;i<i_Len-1;i++)
	{
		for (j=0;j<i_Len-1-i;j++)
		{
			if (i_Poi[j]>i_Poi[j+1])
			{
				i_Tmp=i_Poi[j];
				i_Poi[j]=i_Poi[j+1];
				i_Poi[j+1]=i_Tmp;
			}
		}
	}
	printf("排序之后为：");
	for (i=0;i<i_Len;i++)
	{
		printf("%d  ",i_Poi[i]);
	}
	printf("\n");
}

//折半排序
void HalfSort()
{

	int i,j;//循环变量
	int k; //插入下标
	printf("二、折半排序\n");
	int *i_Poi;
	int i_Left;
	int i_Right;
	int i_Half;

	printf("请输入数组长度:");
	scanf("%d",&i_Len);
	i_Poi=(int*)malloc(i_Len*sizeof(int));
	printf("请输入数：");
	for (i=0;i<i_Len;i++)
	{
		scanf("%d",&i_Poi[i]);
	}
	if (i_Poi[0]>i_Poi[1])
	{
		i_Tmp=i_Poi[0];
		i_Poi[0]=i_Poi[1];
		i_Poi[1]=i_Tmp;
	}
	for (int i=2;i<i_Len;i++)
	{
		i_Left=0;
		i_Right=i-1;
		i_Half=(i_Left+i_Right)/2;
		if (i_Poi[i]>i_Poi[i_Left]&&i_Poi[i]<i_Poi[i_Right])
		{
			while((i_Right-i_Left)>1)
			{
				if (i_Poi[i]<i_Poi[i_Half])
				{
					i_Right=i_Half;
				}
				else
					i_Left=i_Half;
				i_Half=(i_Left+i_Right)/2;
			}

			if (i_Poi[i]>i_Poi[i_Left])
			{
				i_Left=i_Left+1;
			} 
			k=i_Left;
		} 


		if (i_Poi[i]<=i_Poi[i-1])
		{
			k=0;
		}
		if(i_Poi[i]>=i_Poi[i-1])
		{
			k=i;
		}

		for (j=k;j<i;j++)
		{
			i_Tmp=i_Poi[j];
			i_Poi[j]=i_Poi[i];
			i_Poi[i]=i_Tmp;
		}
	}
	for (i=0;i<i_Len;i++)
	{
		printf("%d\t",i_Poi[i]);
	}
	printf("\n");
}
#endif
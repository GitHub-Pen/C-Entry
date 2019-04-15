#ifndef __Indicator_h_
#define __Indicator_h_ 

#include "WholeVari.h"//定义的全局变量

//指针的概念与使用、一维、二维动态数组
void Indicator()
{
	//一维动态数组的开辟
	printf("\n一维动态数组的开辟\n");
	int i_Count;
	int i_n;
	int *i_Poi;
	printf("请输入数组长度:");
	scanf("%d",&i_n);
	i_Poi=(int*)malloc(i_n*sizeof(int));
	if (i_Poi==NULL)
	{
		printf("分配空间失败\n");
		exit(1);
	}
	printf("现在输出数组元素:\n");
	for (i_Count=0;i_Count<i_n;i_Count++)
	{
		i_Poi[i_Count]=i_Count*2;
		printf("%d  ",i_Poi[i_Count]);

	}
	printf("\n");
	free(i_Poi);

	//二维动态数组的开辟
	printf("\n二维动态数组的开辟\n");
	int i_r,i_c;//循环变量
	int **i_Ppoi;//二级指针
	int i_Row,i_Col;//代表输入的行数与列数
	printf("请输入二维数组的行数和列数:");
	scanf("%d,%d",&i_Row,&i_Col);

	i_Ppoi=(int**)malloc(i_Row*sizeof(int));//开辟空间
	for (i_r=0;i_r<=i_Row-1;i_r++)
	{
		i_Ppoi[i_r]=(int*)malloc(i_Col*sizeof(int));
	}

	for (i_r=0;i_r<=i_Row-1;i_r++)//输出元素
	{
		for (i_c=0;i_c<=i_Col-1;i_c++)
		{
			i_Ppoi[i_r][i_c]=i_r+i_c;
			printf("%d\t",i_Ppoi[i_r][i_c]);
		}
		printf("\n");
	}
	for (i_r=0;i_r<=i_Row-1;i_r++)//释放空间
	{
		free(i_Ppoi[i_r]);	
	}
	free(i_Ppoi);
}
#endif
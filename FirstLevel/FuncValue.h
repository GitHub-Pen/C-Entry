#ifndef __FuncValue_h_
#define __FuncValue_h_ 

#include "WholeVari.h"//定义的全局变量

int i_Copya,i_Copyb;
int i_Citea,i_Citeb;
int i_Sitea,i_Siteb;
//函数值形式传递
void FuncValue(int i_u,int i_v)
{
	printf("\n一、函数值形式传递\n");
	printf("请输入i_a和i_b的值(以空格隔开)：");
	scanf("%d%d",&i_Copya,&i_Copyb);
	i_Tmp=i_u;
	i_u=i_v;
	i_v=i_Tmp;
	printf("   i_a=%d\n   i_b=%d\n",i_Copya,i_Copyb);
}


//函数引用形式传递
void FuncQuote(int &i_u,int &i_v)
{
	printf("二、函数引用形式传递\n");
	printf("请输入i_a和i_b的值(以空格隔开)：");
	scanf("%d%d",&i_Citea,&i_Citeb);
	i_Tmp=i_u;
	i_u=i_v;
	i_v=i_Tmp;
	printf("   i_a=%d\n   i_b=%d\n",i_Citea,i_Citeb);
}


//函数地址形式参数传递
void FuncSite(int *i_u,int *i_v)
{
	printf("三、函数地址形式传递\n");
	printf("请输入i_a和i_b的值(以空格隔开)：");
	scanf("%d%d",&i_Sitea,&i_Siteb);
	i_Tmp=*i_u;
	*i_u=*i_v;
	*i_v=i_Tmp;
	printf("   i_a=%d\n   i_b=%d\n\n",i_Sitea,i_Siteb);
}
#endif
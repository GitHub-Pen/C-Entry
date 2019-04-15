#ifndef __Postoper_h_
#define __Postoper_h_ 

#include "WholeVari.h"//定义的全局变量

//位运算符
void Postoper()
{
	printf("\n输入i_a与i_b两个一正一负数：");
	scanf("%d%d",&i_a,&i_b);

	//左移<<和右移运算符<<
	printf("\n左移运算：");
	i_Tmp=i_a<<2;
	printf("i_a=%d\n",i_Tmp);
	printf("右移运算：");
	i_Tmp=(i_b>>2);
	printf("i_b=%d\n",i_Tmp);

	//取反运算~
	i_Tmp=~i_a;
	printf("\n取反之后:%d\n",~i_Tmp);
	i_Tmp=~i_b;
	printf("取反之后:%d\n",~i_Tmp);

	//按位或运算
	i_Tmp=i_a|3;
	printf("\n两正数按位或运算：%d\n",i_Tmp);
	i_Tmp=i_b|-3;
	printf("两负数按位或运算：%d\n",i_Tmp);
	i_Tmp=i_a|i_b;
	printf("一正一负数按位或运算：%d\n",i_Tmp);

	//按位与运算
	i_Tmp=i_a&3;
	printf("\n两正数按位与运算：%d\n",i_Tmp);
	i_Tmp=i_b&-3;
	printf("两负数按位与运算：%d\n",i_Tmp);
	i_Tmp=i_a|i_b;
	printf("一正一负数按位与运算：%d\n",i_Tmp);

	//异或运算
	i_Tmp=i_a^3;
	printf("\n两正数异或运算：%d\n",i_Tmp);
	i_Tmp=i_b^-3;
	printf("两负数异或运算：%d\n",i_Tmp);
	i_Tmp=i_a^i_b;
	printf("一正一负数异或运算：%d\n\n",i_Tmp);
}
#endif

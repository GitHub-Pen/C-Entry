#ifndef __variable_h_
#define __variable_h_ 

#include "WholeVari.h"//定义的全局变量

void Vari()//变量声明与定义
{
	printf("\n请输入int类型的数:");
	scanf("%d",&i_a);
	fflush(stdin);
	printf("请输入char类型的数:");
	scanf("%c",&c_Ch);
	fflush(stdin);
	printf("请输入float类型的数:");
	scanf("%f",&f_Vari);
	fflush(stdin);
	printf("请输入double类型的数:");
	scanf("%lf",&d_Vari);
	fflush(stdin);

	printf("\n输出各个数据类型的字节数\n");
	printf("int型字节数：%d\n",sizeof(int));
	printf("char型字节数：%d\n",sizeof(char));
	printf("float型字节数：%d\n",sizeof(float));
	printf("double型字节数：%d\n",sizeof(double));

	printf("\n将字符变量以十进制整数形式输出:");
	printf("%d\n\n",c_Ch);
}

#endif
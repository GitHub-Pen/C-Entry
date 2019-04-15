//#ifndef __FirstLevel_h_
//#define __FirstLevel_h_ 
//#include "variable.h"

//子程序部分
//void Vari()//变量声明与定义
//{
//	printf("\n请输入int类型的数:");
//	scanf("%d",&i_a);
//	fflush(stdin);
//	printf("请输入char类型的数:");
//	scanf("%c",&c_Ch);
//	fflush(stdin);
//	printf("请输入float类型的数:");
//	scanf("%f",&f_Vari);
//	fflush(stdin);
//	printf("请输入double类型的数:");
//	scanf("%lf",&d_Vari);
//	fflush(stdin);
//
//	printf("\n输出各个数据类型的字节数\n");
//	printf("int型字节数：%d\n",sizeof(int));
//	printf("char型字节数：%d\n",sizeof(char));
//	printf("float型字节数：%d\n",sizeof(float));
//	printf("double型字节数：%d\n",sizeof(double));
//
//	printf("\n将字符变量以十进制整数形式输出:");
//	printf("%d\n\n",c_Ch);
//}

////算术运算符
//void Mathoper()
//{
//	printf("\n请输入两个数i_a和i_b:");
//	scanf("%d%d",&i_a,&i_b);
//
//	printf("算术运算符+:%d\n",i_a+i_b);
//	printf("算术运算符-:%d\n",i_a-i_b);
//	printf("算术运算符*:%d\n",i_a*i_b);
//	printf("算术运算符/:%d\n",i_a/i_b);
//	i_a+=i_b;
//	printf("算术运算符+=:%d\n",	i_a);
//	i_a-=i_b;
//	printf("算术运算符-=:%d\n",i_a);
//	i_a*=i_b;
//	printf("算术运算符*=:%d\n",i_a);
//	i_a/=i_b;
//	printf("算术运算符/=:%d\n",i_a);
//
//	printf("整型操作i++和i--：");
//	printf("%d,%d\n",i_a++,i_a--);
//}

////位运算符
//void Postoper()
//{
//	printf("\n输入i_a与i_b两个一正一负数：");
//	scanf("%d%d",&i_a,&i_b);
//
//	//左移<<和右移运算符<<
//	printf("\n左移运算：");
//	i_Tmp=i_a<<2;
//	printf("i_a=%d\n",i_Tmp);
//	printf("右移运算：");
//	i_Tmp=(i_b>>2);
//	printf("i_b=%d\n",i_Tmp);
//
//	//取反运算~
//	i_Tmp=~i_a;
//	printf("\n取反之后:%d\n",~i_Tmp);
//	i_Tmp=~i_b;
//	printf("取反之后:%d\n",~i_Tmp);
//
//	//按位或运算
//	i_Tmp=i_a|3;
//	printf("\n两正数按位或运算：%d\n",i_Tmp);
//	i_Tmp=i_b|-3;
//	printf("两负数按位或运算：%d\n",i_Tmp);
//	i_Tmp=i_a|i_b;
//	printf("一正一负数按位或运算：%d\n",i_Tmp);
//
//	//按位与运算
//	i_Tmp=i_a&3;
//	printf("\n两正数按位与运算：%d\n",i_Tmp);
//	i_Tmp=i_b&-3;
//	printf("两负数按位与运算：%d\n",i_Tmp);
//	i_Tmp=i_a|i_b;
//	printf("一正一负数按位与运算：%d\n",i_Tmp);
//
//	//异或运算
//	i_Tmp=i_a^3;
//	printf("\n两正数异或运算：%d\n",i_Tmp);
//	i_Tmp=i_b^-3;
//	printf("两负数异或运算：%d\n",i_Tmp);
//	i_Tmp=i_a^i_b;
//	printf("一正一负数异或运算：%d\n\n",i_Tmp);
//}

////逻辑运算符
//void Logicoper()
//{
//	printf("\n输入i_a、i_b和字符c_Ch的值,以逗号隔开:");
//	scanf("%d,%d,%c",&i_a,&i_b,&c_Ch);
//	if (i_a!=0&&i_b!=0)
//	{
//		if (i_a>i_b)
//		{
//			printf("比较i_a和i_b结果为：i_a大于i_b\n");
//		}
//		if (i_a<i_b)
//		{
//			printf("比较i_a和i_b结果为：i_a小于i_b\n");
//		}
//		if (i_a==i_b)
//		{
//			printf("比较i_a和i_b结果为：i_a恒等于i_b\n");
//		}
//	}
//	if (c_Ch>='a'&&c_Ch<='z'||c_Ch>='A'&&c_Ch<='Z')
//	{
//		printf("输入字符为英语字母的ASCII值为:%d\n\n",c_Ch);
//	}
//}

////地址及指针操作符
//void Locate()
//{
//	int *i_Poi;
//	printf("\n请输入i_a的值:");
//	scanf("%d",&i_a);
//	i_Poi=&i_a;
//	printf("i_a的值为：%d\n",i_a);
//	printf("i_Poi的值为：%x\n",i_Poi);
//	printf("&i_a的值为：%x\n",&i_a);
//	printf("*i_Poi的值为：%d\n",*i_Poi);
//	printf("&i_Poi的值为：%x\n",&i_Poi);
//	printf("\n");
//
//	printf("给*i_Poi赋值:\n");
//	scanf("%d",&i_b);
//	*i_Poi=i_b;
//	printf("i_a的值为：%d\n",i_a);
//	printf("i_Poi的值为：%x\n",i_Poi);
//	printf("&i_a的值为：%x\n",&i_a);
//	printf("*i_Poi的值为：%d\n",*i_Poi);
//	printf("&i_Poi的值为：%x\n",&i_Poi);
//}

////数组定义以及使用,定义：数组名[下标]
//void Array()
//{
//	int sz_Array[10];//一维数组
//	int i_dla;
//	int i_dlb;
//	int sz_DlArray[5][5];//二维数组
//	for (i_a=0;i_a<10;i_a++)
//	{
//		sz_Array[i_a]=i_a*2+2;
//	}
//	printf("\n逐个输出数组元素\n");
//	for (i_a=0;i_a<10;i_a++)
//	{
//		printf("%d\t",sz_Array[i_a]);
//	}
//	printf("\n");
//
//	//for (i_dla=0;i_dla<5;i_dla++)
//	//{
//	//	for (i_dlb;i_dlb<5;i_dlb++)
//	//	{
//	//		if (i_dla%2==0)
//	//		{
//	//			sz_DlArray[i_dla][i_dlb]=i_dla*5+i_dlb+1;
//	//		} 
//	//		else
//	//		{
//	//			sz_DlArray[i_dla][4-i_dlb]=i_dla*5+i_dlb+1;
//	//		}
//	//	 }
//	// }
//	//for (i_dla=0;i_dla<5;i_dla++)
//	//{
//	//	for (i_dlb;i_dlb<5;i_dlb++)
//	//	{
//	//		printf("%d  ",sz_DlArray[i_dla][i_dlb]);
//	//	}
//	//}
//	//printf("\n");	
//
//}

////字符数组的定义、赋值与使用
//void Ch_Array()
//{
//
//	char sz_Cha[80];
//	char sz_Chb[80];
//	char sz_Chc[80];
//	printf("\n请输入字符串：");
//	scanf("%s",sz_Cha);
//
//	//求取字符串长度
//	i_Tmp=strlen(sz_Cha);
//	printf("字符串长度为：%d\n",i_Tmp);
//
//	//字符串复制
//	strcpy(sz_Chc,sz_Cha);
//	printf("复制输入的字符串给另一个字符数组：%s\n",sz_Chc);
//
//	//字符串连接函数
//	printf("请再次输入一个字符串:");
//	scanf("%s",sz_Chb);
//	strcat(sz_Cha,sz_Chb);
//	printf("两个字符串连接之后：%s\n",sz_Cha);
//
//	//字符串比较函数
//	if (strcmp(sz_Chc,sz_Chb)==0)//从左到右逐个字符比较，（按ASCII码值大小）直到遇到不相同的字符或“\0”为止；
//	{
//		printf("比较两次输入的字符串：相等\n");
//	}
//	else
//		printf("比较两次输入的字符串：不相等\n");
//	i_Tmp=strcmp(sz_Chc,sz_Chb);
//	printf("strcmp输出函数返回值：%d\n",i_Tmp);//sz_Chc<sz_Chb,则函数返回一个负整数值；sz_Chc=sz_Chb，函数返回0；sz_Chc>sz_Chb,函数返回一个正整数值；
//
//
//	//sprintf和sscanf的用法
//	printf("\n关于sscanf和sprintf的用法\n");
//
//	sprintf(sz_Cha,"%s%d%c","abc",6,'A');//将输出结果写入数组sz_Cha中
//	i_Tmp=sprintf(sz_Cha,"%s%d%c","abc",6,'A');
//	printf("sprintf结果输出：%s\n",sz_Cha);
//	printf("sprintf函数返回值输出：%d\n",i_Tmp);//其函数返回值为字符串长度
//
//	sscanf(sz_Cha,"%4s",sz_Chc);//从一个字符串中读进与指定格式相同的数据,其返回值为读入有效数据的个数
//	i_Tmp=sscanf(sz_Cha,"%4s",sz_Chc);
//	printf("sscanf结果输出:%s\n",sz_Chc);
//	printf("sscanf函数返回值输出：%d\n\n",i_Tmp);//其函数返回值为读入有效数据的个数
//
//}

////指针的概念与使用、一维、二维动态数组
//void Indicator()
//{
//	//一维动态数组的开辟
//	printf("\n一维动态数组的开辟\n");
//	int i_Count;
//	int i_n;
//	int *i_Poi;
//	printf("请输入数组长度:");
//	scanf("%d",&i_n);
//	i_Poi=(int*)malloc(i_n*sizeof(int));
//	if (i_Poi==NULL)
//	{
//		printf("分配空间失败\n");
//		exit(1);
//	}
//	printf("现在输出数组元素:\n");
//	for (i_Count=0;i_Count<i_n;i_Count++)
//	{
//		i_Poi[i_Count]=i_Count*2;
//		printf("%d  ",i_Poi[i_Count]);
//
//	}
//	printf("\n");
//	free(i_Poi);
//
//	//二维动态数组的开辟
//	printf("\n二维动态数组的开辟\n");
//	int i_r,i_c;//循环变量
//	int **i_Ppoi;//二级指针
//	int i_Row,i_Col;//代表输入的行数与列数
//	printf("请输入二维数组的行数和列数:");
//	scanf("%d,%d",&i_Row,&i_Col);
//
//	i_Ppoi=(int**)malloc(i_Row*sizeof(int));//开辟空间
//	for (i_r=0;i_r<=i_Row-1;i_r++)
//	{
//		i_Ppoi[i_r]=(int*)malloc(i_Col*sizeof(int));
//	}
//
//	for (i_r=0;i_r<=i_Row-1;i_r++)//输出元素
//	{
//		for (i_c=0;i_c<=i_Col-1;i_c++)
//		{
//			i_Ppoi[i_r][i_c]=i_r+i_c;
//			printf("%d\t",i_Ppoi[i_r][i_c]);
//		}
//		printf("\n");
//	}
//	for (i_r=0;i_r<=i_Row-1;i_r++)//释放空间
//	{
//		free(i_Ppoi[i_r]);	
//	}
//	free(i_Ppoi);
//}

////全局变量与局部变量
//void Ap_Vari()
//{
//	int i_c=11;//i_c为局部变量
//	printf("输入一个数i_a:");
//	scanf("%d",&i_a);
//	i_a=i_a+i_c;
//	printf("输出i_a与i_c之和：%d\n",i_a);
//}

////循环结构while、do-while、和for语句
//void Cycle()
//{
//	int i_Sum=0;
//	int i_Count=0;
//	int i_N;
//	printf("输入一个整数:");
//	scanf("%d",&i_N);
//	for (i_Count=0;i_Count<i_N;i_Count++)
//	{
//		i_Sum+=i_Count;
//	}
//	printf("for循环输出相加之和：%d\n",i_Sum);
//
//	i_Sum=0;
//	i_Count=0;
//	do 
//	{
//
//		i_Sum+=i_Count;
//		i_Count++;
//
//	} while (i_Count<i_N);
//	printf("do-while循环输出相加之和：%d\n",i_Sum);
//}

////函数值形式传递
//void FuncValue(int i_u,int i_v)
//{
//	printf("\n一、函数值形式传递\n");
//	printf("请输入i_a和i_b的值：");
//	scanf("%d,%d",&i_a,&i_b);
//	i_Tmp=i_u;
//	i_u=i_v;
//	i_v=i_Tmp;
//	printf("   i_a=%d\n   i_b=%d\n",i_a,i_b);
//}
//
////函数引用形式传递
//void FuncQuote(int &i_u,int &i_v)
//{
//	printf("二、函数引用形式传递\n");
//	printf("请输入i_a和i_b的值：");
//	scanf("%d,%d",&i_a,&i_b);
//	i_Tmp=i_u;
//	i_u=i_v;
//	i_v=i_Tmp;
//	printf("   i_a=%d\n   i_b=%d\n",i_a,i_b);
//}
//
////函数地址形式参数传递
//void FuncSite(int *i_u,int *i_v)
//{
//	i_Tmp=*i_u;
//	*i_u=*i_v;
//	*i_v=i_Tmp;
//}

////文件写操作
//void Filesave()
//{
//	int i;//循环变量
//	FILE *fp;
//	if ((fp=fopen("stu.dat","wb"))==NULL)
//	{
//		printf("打开文件错误\n");
//		return;
//	}
//	for (i=0;i<3;i++)
//	{
//		if (fwrite(&stud[i],sizeof(struct Stu_Type),1,fp)!=1)
//			printf("文件写入错误\n");
//	}
//	fclose(fp);
//}
//
////文件读操作
//void FileLoad()
//{
//	int i;//循环变量
//	FILE *fp;
//	if ((fp=fopen("stu.dat","wb"))==NULL)
//	{
//		printf("打开文件错误\n");
//		exit(0);
//	}
//	for (i=0;i<3;i++)
//	{
//		fread(&stud[i],sizeof(struct Stu_Type),1,fp);
//		printf("%d %s %d\n",stud[i].i_StuId,stud[i].sz_StuName,stud[i].i_StuAge);
//	}
//	fclose(fp);
//}


////班级信息链表操作
////建立班级信息单链表
//void CreateClassList(ClassPoi *ClassHead)
//{
//	int i_StuIds;
//	ClassPoi p,q,r;//说明变量
//	printf("请输入学生学号：");
//	scanf("%d",&i_StuIds);
//	p=q=*ClassHead;//查找符合条件的记录
//	while (p!=NULL)
//	{
//		if (p->i_StuId==i_StuIds)
//		{
//			printf("已经有相同学号\n");
//			return;
//		} 
//		else
//		{
//			q=p;p=p->next;
//		}
//	}
//	r=(ClassPoi)malloc(sizeof(ClassList));
//	r->next=NULL;
//	if (r==NULL)
//	{
//		printf("分配空间失败");
//		return;
//	}
//	if (q==NULL)//原表为空表
//		*ClassHead=r;
//	else
//	{
//		q->next=r;
//	}
//	r->i_StuId=i_StuIds;
//	printf("请输入班级编号：");
//	scanf("%d",&r->i_ClassId);	
//}
//
////删除班级信息
//void ClasslistDelete(ClassPoi *ClassHead)
//{
//	int i_StuIds;
//	ClassPoi p,q;
//	printf("请输入学生学号：");
//	scanf("%d",&i_StuIds);
//	p=q=*ClassHead;
//	while (p!=NULL&&i_flag)
//	{
//		if (p->i_StuId==i_StuIds)
//		{
//			if (p==*ClassHead)//删除的为头结点
//			{
//				*ClassHead=p->next;free(q);
//			}
//			else
//			{
//				q->next=p->next;free(p);//删除普通元素
//			}
//			i_flag=0;
//		}
//		else
//		{
//			q=p;
//			p=p->next;
//		}
//	}
//}
//
////查找班级信息
//void ClasslistFind(ClassPoi *ClassHead)
//{
//	int i_StuIds;
//	ClassPoi p;
//	printf("请输入要查询的学生的学号：");
//	scanf("%d",&i_StuIds);
//	p=*ClassHead;
//	while(p!=NULL&&i_flag)
//	{
//		if (p->i_StuId==i_StuIds)
//		{
//			printf("班级编号：%d\n",p->i_ClassId);
//			printf("学生学号：%d\n",p->i_StuId);
//			i_flag=0;
//		}
//		else
//			p=p->next;//指针走到下一结点
//	}
//}
//
////显示班级信息
//void ClassShow(ClassPoi *ClassHead) 
//{
//	ClassPoi p;
//	p=*ClassHead;
//	printf("班级编号  学号\n");
//	while(p!=NULL)
//	{
//		printf("%d     ",p->i_ClassId);
//		printf("%d\n",p->i_StuId);
//		p=p->next;
//	}
//}
//
//
////学生链表操作
////建立学生信息单链表
//void CreateStuList(StuPoi *StuHead)
//{
//	int i_CNum;
//	StuPoi p,q,r;//说明变量
//	printf("请输入学号：");
//	scanf("%d",&i_CNum);
//	p=q=*StuHead;//查找符合条件的记录
//	while (p!=NULL)
//	{
//		if (p->i_StuId==i_CNum)
//		{
//			printf("已经有相同编号：");
//			return;
//		} 
//		else
//		{
//			q=p;p=p->next;
//		}
//	}
//	r=(StuPoi)malloc(sizeof(StuList));
//	r->next=NULL;
//	if (r==NULL)
//	{
//		printf("分配空间失败");
//		return;
//	}
//	if (q==NULL)//原表为空表
//		*StuHead=r;
//	else
//	{
//		q->next=r;
//	}
//	r->i_StuId=i_CNum;
//	printf("请输入姓名：");
//	scanf("%s",r->sz_StuName);
//	printf("请输入年龄：");
//	scanf("%d",&r->i_StuAge);
//}
//
////删除学生信息
//void LinklistDelete(StuPoi *StuHead)
//{
//	int i_CNum;
//	StuPoi p,q;
//	printf("请输入要删除的学生的学号：");
//	scanf("%d",&i_CNum);
//	p=q=*StuHead;
//	while (p!=NULL&&i_flag)
//	{
//		if (p->i_StuId==i_CNum)
//		{
//			if (p==*StuHead)//删除的为头结点
//			{
//				*StuHead=p->next;free(q);
//			}
//			else
//			{
//				q->next=p->next;free(p);//删除普通元素
//			}
//			i_flag=0;
//		}
//		else
//		{
//			q=p;
//			p=p->next;
//		}
//
//	}
//
//}
//
////查找学生信息
//void LinklistFind(StuPoi *StuHead)
//{
//	int i_CNum;
//	StuPoi p;
//	printf("请输入要查询的学生的学号：");
//	scanf("%d",&i_CNum);
//	p=*StuHead;
//	while(p!=NULL&&i_flag)
//	{
//		if (p->i_StuId==i_CNum)
//		{
//			printf("学号：%d\n",p->i_StuId);
//			printf("姓名：%s\n",p->sz_StuName);
//			printf("年龄：%d\n",p->i_StuAge);
//			i_flag=0;
//		}
//		else
//			p=p->next;//指针走到下一结点
//	}
//}
//
////修改学生信息
//void LinklistModifier(StuPoi *StuHead)
//{
//	int i_CNum;
//	StuPoi p;
//	printf("请输入要修改的学号：");
//	scanf("%d",&i_CNum);
//	p=*StuHead;
//	while(p!=NULL&&i_flag)
//	{
//		if (p->i_StuId==i_CNum)
//		{
//			printf("请输入修改之后的姓名：");
//			scanf("%s",p->sz_StuName);
//			printf("请输入修改之后的年龄：");
//			scanf("%d",&p->i_StuAge);
//			i_flag=0;
//		}
//		else
//			p=p->next;
//	}
//}                                                                            
//
////显示学生信息
//void Show(StuPoi *StuHead) 
//{
//	StuPoi p;
//	p=*StuHead;
//	printf("学号  姓名  年龄\n");
//	while(p!=NULL)
//	{
//		printf("%d     ",p->i_StuAge);
//		printf("%s     ",p->sz_StuName);
//		printf("%d\n",p->i_StuAge);
//		p=p->next;
//	}
//}
//
//
////课程信息链表操作
////建立课程信息单链表
//void CreateCourseList(CoursePoi *CourseHead)
//{
//	int i_CourseIds;
//	CoursePoi p,q,r;//说明变量
//	printf("请输入课程编号：");
//	scanf("%d",&i_CourseIds);
//	p=q=*CourseHead;//查找符合条件的记录
//	r=(CoursePoi)malloc(sizeof(CourseList));
//	r->next=NULL;
//	if (r==NULL)
//	{
//		printf("分配空间失败");
//		return;
//	}
//	if (q==NULL)//原表为空表
//		*CourseHead=r;
//	else
//	{
//		q->next=r;
//	}
//	r->i_CourseId=i_CourseIds;
//	printf("请输入课程名：");
//	scanf("%s",r->sz_CourseName);	
//	printf("请输入班级编号：");
//	scanf("%d",&r->i_ClassId);	
//}
//
////删除课程信息
//void CourselistDelete(CoursePoi *CourseHead)
//{
//	int i_ClassIds,i_CourseIds;
//	CoursePoi p,q;
//	printf("请输入班级和课程号：");
//	scanf("%d%d",&i_ClassIds,&i_CourseIds);
//	p=q=*CourseHead;
//	while (p!=NULL&&i_flag)
//	{
//		if (p->i_ClassId==i_ClassIds&&p->i_CourseId==i_CourseIds)
//		{
//			if (p==*CourseHead)//删除的为头结点
//			{
//				*CourseHead=p->next;free(q);
//			}
//			else
//			{
//				q->next=p->next;free(p);//删除普通元素
//			}
//			i_flag=0;
//		}
//		else
//		{
//			q=p;
//			p=p->next;
//		}
//	}
//}
//
////查找课程信息
//void CourselistFind(CoursePoi *CourseHead)
//{
//	int i_ClassIds;
//	CoursePoi p;
//	printf("请输入要查询的学生的学号：");
//	scanf("%d",&i_ClassIds);
//	p=*CourseHead;
//	while(p!=NULL&&i_flag)
//	{
//		if (p->i_ClassId==i_ClassIds)
//		{
//			printf("班级编号：%d\n",p->i_ClassId);
//			printf("课程号：%d\n",&p->sz_CourseName);
//			printf("课程名：%d\n",p->i_CourseId);
//			i_flag=0;
//		}
//		else
//			p=p->next;//指针走到下一结点
//	}
//}
//
////显示课程信息
//void CourseShow(CoursePoi *CourseHead) 
//{
//	CoursePoi p;
//	p=*CourseHead;
//	printf("班级编号 课程号  课程名  \n");
//	while(p!=NULL)
//	{
//		printf("%d    ",p->i_ClassId);
//		printf("%d     ",p->i_CourseId);
//		printf("%s\n",p->sz_CourseName);
//		p=p->next;
//	}
//}
//
//
////成绩信息链表操作
////建立成绩信息单链表
//void CreateScoreList(StuScorePoi *ScoreHead)
//{
//	int i_StuIds;
//	StuScorePoi p,q,r;//说明变量
//	printf("请输入学号：");
//	scanf("%d",&i_StuIds);
//	p=q=*ScoreHead;//查找符合条件的记录
//	r=(StuScorePoi)malloc(sizeof(StuScoreList));
//	r->next=NULL;
//	if (r==NULL)
//	{
//		printf("分配空间失败");
//		return;
//	}
//	if (q==NULL)//原表为空表
//		*ScoreHead=r;
//	else
//	{
//		q->next=r;
//	}
//	r->i_StuId=i_StuIds;
//	printf("请输入课程号：");
//	scanf("%d",&r->i_CourseId);
//	printf("请输入课程分数：");
//	scanf("%d",&r->i_CourseScore);	
//}
//
////删除成绩信息
//void StuScorelistDelete(StuScorePoi *ScoreHead)
//{
//	int i_StuIds;
//	StuScorePoi p,q;
//	printf("请输入学生学号：");
//	scanf("%d",&i_StuIds);
//	p=q=*ScoreHead;
//	while (p!=NULL&&i_flag)
//	{
//		if (p->i_StuId==i_StuIds)
//		{
//			if (p==*ScoreHead)//删除的为头结点
//			{
//				*ScoreHead=p->next;free(q);
//			}
//			else
//			{
//				q->next=p->next;free(p);//删除普通元素
//			}
//			i_flag=0;
//		}
//		else
//		{
//			q=p;
//			p=p->next;
//		}
//	}
//}
//
////查找成绩信息
//void StuScorelistFind(StuScorePoi *ScoreHead)
//{
//	int i_StuIds;
//	StuScorePoi p;
//	printf("请输入要查询的学生的学号：");
//	scanf("%d",&i_StuIds);
//	p=*ScoreHead;
//	while(p!=NULL&&i_flag)
//	{
//		if (p->i_StuId==i_StuIds)
//		{
//			printf("课程号：%d\n",p->i_CourseId);
//			printf("学号：%d\n",&p->i_StuId);
//			printf("成绩：%d\n",p->i_CourseScore);
//			i_flag=0;
//		}
//		else
//			p=p->next;//指针走到下一结点
//	}
//}
//
////显示成绩信息
//void StuScoreShow(StuScorePoi *ScoreHead) 
//{
//	StuScorePoi p;
//	p=*ScoreHead;
//	printf("课程号  学号  成绩\n");
//	while(p!=NULL)
//	{
//		printf("%d     ",p->i_CourseId);
//		printf("%d     ",p->i_StuId);
//		printf("%d\n",p->i_CourseScore);
//		p=p->next;
//	}
//	//printf("排序之后\n");
//	//if (p->i_CourseScore.)
//	//{
//
//	//}
//
//}

////双链表的建立
//DlPList DlistCreate()
//{
//	Node *p,*L,*r;
//	Elemtype i_Elem;
//	L=(Node*)malloc(sizeof(Node));//申请头结点
//	L->next=NULL;
//	r=L;
//	r->next=NULL;//r为指向终结点的指针
//
//	printf("请输入元素，-1结束输入:");
//	scanf("%d",&i_Elem);
//	while(i_Elem!=-1)
//	{
//		p=(Node*)malloc(sizeof(Node));
//		p->data=i_Elem;
//		p->next=r->next;
//		r->next=p;
//		r=p;
//		scanf("%d",&i_Elem);
//	}
//	r->next=NULL;
//	return L;	                                                                           
//}
//
////双链表的插入
//DlPList DlListInsert(DlPList L,int i_Locate,Elemtype i_Elem)
//{
//	DlPList p,s;//s为要插入的结点
//	p=L->next;//从第一个位置开始查找
//	for (i_Tmp=1;i_Tmp<i_Locate-1;i_Tmp++)
//	{
//		p=p->next;
//	}
//	s=(Node*)malloc(sizeof(Node));
//	s->data=i_Elem;
//	s->next=p->next;//将结点插入
//	p->next->prior=s;
//	s->prior=p;
//	p->next=s;
//	return L;
//}
//
////双链表删除第i个结点
//DlPList DlListDelete(DlPList L,int i_locate)
//{
//	int i_Tmp=1;
//	DlPList p;//p为查找结点
//	p=L->next;
//	while((i_Tmp++)!=i_locate&&p!=NULL)
//	{
//		p=p->next;
//	}
//	if (p==NULL)
//	{
//		printf("位置不合法\n");
//	}
//	else if (p->next==NULL)
//	{
//		p->prior->next=NULL;
//		free(p);
//	}
//	else
//	{
//		p->prior->next=p->next;
//		p->next->prior=p->prior;
//		free(p);
//	}
//	return L;
//}
//
////双链表的删除
//void DlListClear(DlPList L)
//{
//	L->next=NULL;
//	printf("删除成功\n");
//
//}

////冒泡排序
//void BubbleSort()
//{
//	//冒泡排序
//	int i,j;//应用于循环
//	int *i_Poi;
//	printf("请输入数组长度:");
//	scanf("%d",&i_Len);
//	i_Poi=(int*)malloc(i_Len*sizeof(int));
//	printf("请输入数：");
//	for (i=0;i<i_Len;i++)
//	{
//		scanf("%d",i_Poi+i);
//	}
//	for (i=0;i<i_Len-1;i++)
//	{
//		for (j=0;j<i_Len-1-i;j++)
//		{
//			if (i_Poi[j]>i_Poi[j+1])
//			{
//				i_Tmp=i_Poi[j];
//				i_Poi[j]=i_Poi[j+1];
//				i_Poi[j+1]=i_Tmp;
//			}
//		}
//	}
//	printf("排序之后为：");
//	for (i=0;i<i_Len;i++)
//	{
//		printf("%d  ",i_Poi[i]);
//	}
//	printf("\n");
//}
//
////折半排序
//void HalfSort()
//{
//
//	int i,j;//循环变量
//	int k; //插入下标
//	int *i_Poi;
//	int i_Left;
//	int i_Right;
//	int i_Half;
//
//	printf("请输入数组长度:");
//	scanf("%d",&i_Len);
//	i_Poi=(int*)malloc(i_Len*sizeof(int));
//	printf("请输入数：");
//	for (i=0;i<i_Len;i++)
//	{
//		scanf("%d",&i_Poi[i]);
//	}
//	if (i_Poi[0]>i_Poi[1])
//	{
//		i_Tmp=i_Poi[0];
//		i_Poi[0]=i_Poi[1];
//		i_Poi[1]=i_Tmp;
//	}
//	for (int i=2;i<i_Len;i++)
//	{
//		i_Left=0;
//		i_Right=i-1;
//		i_Half=(i_Left+i_Right)/2;
//		if (i_Poi[i]>i_Poi[i_Left]&&i_Poi[i]<i_Poi[i_Right])
//		{
//			while((i_Right-i_Left)>1)
//			{
//				if (i_Poi[i]<i_Poi[i_Half])
//				{
//					i_Right=i_Half;
//				}
//				else
//					i_Left=i_Half;
//				i_Half=(i_Left+i_Right)/2;
//			}
//
//			if (i_Poi[i]>i_Poi[i_Left])
//			{
//				i_Left=i_Left+1;
//			} 
//			k=i_Left;
//		} 
//
//
//		if (i_Poi[i]<=i_Poi[i-1])
//		{
//			k=0;
//		}
//		if(i_Poi[i]>=i_Poi[i-1])
//		{
//			k=i;
//		}
//
//		for (j=k;j<i;j++)
//		{
//			i_Tmp=i_Poi[j];
//			i_Poi[j]=i_Poi[i];
//			i_Poi[i]=i_Tmp;
//		}
//	}
//	for (i=0;i<i_Len;i++)
//	{
//		printf("%d\t",i_Poi[i]);
//	}
//	printf("\n");
//}

////struct、union、宏定义
//void Type()
//{
//    printf("忽略");
//}

////主菜单
//int MenuMain()
//{
//	char sz_Menu[6];
//	char c_Menu;
//	printf("***************第一层任务******************\n");
//	printf("\t1----变量定义\n");
//	printf("\t2----算术运算符\n");
//	printf("\t3----位运算符\n");
//	printf("\t4----逻辑运算符\n");
//	printf("\t5----地址及指针操作符\n");
//	printf("\t6----数组定义以及使用\n");
//	printf("\t7----字符数组\n");
//	printf("\t8----指针与动态数组\n");
//	printf("\t9----全局变量与局部变量\n");
//	printf("\tA----循环结构\n");
//	printf("\tB----函数使用\n");
//	printf("\tC----文件操作\n");
//	printf("\tD----链表结构\n");
//	printf("\tE----冒泡排序与折半排序\n");
//	printf("\tF----Struct、union和宏定义\n");
//	printf("\tG----学籍管理系统\n");
//	printf("\t0----退出\n");
//	printf("******************************************\n");
//	printf("请输入主菜单选项：");
//	scanf("%s",sz_Menu);
//	if (strlen(sz_Menu)>1)
//	{
//		fflush(stdin);
//		printf("选择错误，请重新选择\n");
//	}
//	else
//	{
//		c_Menu=sz_Menu[0];
//	}
//	return c_Menu;
//}
#endif
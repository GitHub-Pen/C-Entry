//#ifndef __FirstLevel_h_
//#define __FirstLevel_h_ 
//#include "variable.h"

//�ӳ��򲿷�
//void Vari()//���������붨��
//{
//	printf("\n������int���͵���:");
//	scanf("%d",&i_a);
//	fflush(stdin);
//	printf("������char���͵���:");
//	scanf("%c",&c_Ch);
//	fflush(stdin);
//	printf("������float���͵���:");
//	scanf("%f",&f_Vari);
//	fflush(stdin);
//	printf("������double���͵���:");
//	scanf("%lf",&d_Vari);
//	fflush(stdin);
//
//	printf("\n��������������͵��ֽ���\n");
//	printf("int���ֽ�����%d\n",sizeof(int));
//	printf("char���ֽ�����%d\n",sizeof(char));
//	printf("float���ֽ�����%d\n",sizeof(float));
//	printf("double���ֽ�����%d\n",sizeof(double));
//
//	printf("\n���ַ�������ʮ����������ʽ���:");
//	printf("%d\n\n",c_Ch);
//}

////���������
//void Mathoper()
//{
//	printf("\n������������i_a��i_b:");
//	scanf("%d%d",&i_a,&i_b);
//
//	printf("���������+:%d\n",i_a+i_b);
//	printf("���������-:%d\n",i_a-i_b);
//	printf("���������*:%d\n",i_a*i_b);
//	printf("���������/:%d\n",i_a/i_b);
//	i_a+=i_b;
//	printf("���������+=:%d\n",	i_a);
//	i_a-=i_b;
//	printf("���������-=:%d\n",i_a);
//	i_a*=i_b;
//	printf("���������*=:%d\n",i_a);
//	i_a/=i_b;
//	printf("���������/=:%d\n",i_a);
//
//	printf("���Ͳ���i++��i--��");
//	printf("%d,%d\n",i_a++,i_a--);
//}

////λ�����
//void Postoper()
//{
//	printf("\n����i_a��i_b����һ��һ������");
//	scanf("%d%d",&i_a,&i_b);
//
//	//����<<�����������<<
//	printf("\n�������㣺");
//	i_Tmp=i_a<<2;
//	printf("i_a=%d\n",i_Tmp);
//	printf("�������㣺");
//	i_Tmp=(i_b>>2);
//	printf("i_b=%d\n",i_Tmp);
//
//	//ȡ������~
//	i_Tmp=~i_a;
//	printf("\nȡ��֮��:%d\n",~i_Tmp);
//	i_Tmp=~i_b;
//	printf("ȡ��֮��:%d\n",~i_Tmp);
//
//	//��λ������
//	i_Tmp=i_a|3;
//	printf("\n��������λ�����㣺%d\n",i_Tmp);
//	i_Tmp=i_b|-3;
//	printf("��������λ�����㣺%d\n",i_Tmp);
//	i_Tmp=i_a|i_b;
//	printf("һ��һ������λ�����㣺%d\n",i_Tmp);
//
//	//��λ������
//	i_Tmp=i_a&3;
//	printf("\n��������λ�����㣺%d\n",i_Tmp);
//	i_Tmp=i_b&-3;
//	printf("��������λ�����㣺%d\n",i_Tmp);
//	i_Tmp=i_a|i_b;
//	printf("һ��һ������λ�����㣺%d\n",i_Tmp);
//
//	//�������
//	i_Tmp=i_a^3;
//	printf("\n������������㣺%d\n",i_Tmp);
//	i_Tmp=i_b^-3;
//	printf("������������㣺%d\n",i_Tmp);
//	i_Tmp=i_a^i_b;
//	printf("һ��һ����������㣺%d\n\n",i_Tmp);
//}

////�߼������
//void Logicoper()
//{
//	printf("\n����i_a��i_b���ַ�c_Ch��ֵ,�Զ��Ÿ���:");
//	scanf("%d,%d,%c",&i_a,&i_b,&c_Ch);
//	if (i_a!=0&&i_b!=0)
//	{
//		if (i_a>i_b)
//		{
//			printf("�Ƚ�i_a��i_b���Ϊ��i_a����i_b\n");
//		}
//		if (i_a<i_b)
//		{
//			printf("�Ƚ�i_a��i_b���Ϊ��i_aС��i_b\n");
//		}
//		if (i_a==i_b)
//		{
//			printf("�Ƚ�i_a��i_b���Ϊ��i_a�����i_b\n");
//		}
//	}
//	if (c_Ch>='a'&&c_Ch<='z'||c_Ch>='A'&&c_Ch<='Z')
//	{
//		printf("�����ַ�ΪӢ����ĸ��ASCIIֵΪ:%d\n\n",c_Ch);
//	}
//}

////��ַ��ָ�������
//void Locate()
//{
//	int *i_Poi;
//	printf("\n������i_a��ֵ:");
//	scanf("%d",&i_a);
//	i_Poi=&i_a;
//	printf("i_a��ֵΪ��%d\n",i_a);
//	printf("i_Poi��ֵΪ��%x\n",i_Poi);
//	printf("&i_a��ֵΪ��%x\n",&i_a);
//	printf("*i_Poi��ֵΪ��%d\n",*i_Poi);
//	printf("&i_Poi��ֵΪ��%x\n",&i_Poi);
//	printf("\n");
//
//	printf("��*i_Poi��ֵ:\n");
//	scanf("%d",&i_b);
//	*i_Poi=i_b;
//	printf("i_a��ֵΪ��%d\n",i_a);
//	printf("i_Poi��ֵΪ��%x\n",i_Poi);
//	printf("&i_a��ֵΪ��%x\n",&i_a);
//	printf("*i_Poi��ֵΪ��%d\n",*i_Poi);
//	printf("&i_Poi��ֵΪ��%x\n",&i_Poi);
//}

////���鶨���Լ�ʹ��,���壺������[�±�]
//void Array()
//{
//	int sz_Array[10];//һά����
//	int i_dla;
//	int i_dlb;
//	int sz_DlArray[5][5];//��ά����
//	for (i_a=0;i_a<10;i_a++)
//	{
//		sz_Array[i_a]=i_a*2+2;
//	}
//	printf("\n����������Ԫ��\n");
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

////�ַ�����Ķ��塢��ֵ��ʹ��
//void Ch_Array()
//{
//
//	char sz_Cha[80];
//	char sz_Chb[80];
//	char sz_Chc[80];
//	printf("\n�������ַ�����");
//	scanf("%s",sz_Cha);
//
//	//��ȡ�ַ�������
//	i_Tmp=strlen(sz_Cha);
//	printf("�ַ�������Ϊ��%d\n",i_Tmp);
//
//	//�ַ�������
//	strcpy(sz_Chc,sz_Cha);
//	printf("����������ַ�������һ���ַ����飺%s\n",sz_Chc);
//
//	//�ַ������Ӻ���
//	printf("���ٴ�����һ���ַ���:");
//	scanf("%s",sz_Chb);
//	strcat(sz_Cha,sz_Chb);
//	printf("�����ַ�������֮��%s\n",sz_Cha);
//
//	//�ַ����ȽϺ���
//	if (strcmp(sz_Chc,sz_Chb)==0)//����������ַ��Ƚϣ�����ASCII��ֵ��С��ֱ����������ͬ���ַ���\0��Ϊֹ��
//	{
//		printf("�Ƚ�����������ַ��������\n");
//	}
//	else
//		printf("�Ƚ�����������ַ����������\n");
//	i_Tmp=strcmp(sz_Chc,sz_Chb);
//	printf("strcmp�����������ֵ��%d\n",i_Tmp);//sz_Chc<sz_Chb,��������һ��������ֵ��sz_Chc=sz_Chb����������0��sz_Chc>sz_Chb,��������һ��������ֵ��
//
//
//	//sprintf��sscanf���÷�
//	printf("\n����sscanf��sprintf���÷�\n");
//
//	sprintf(sz_Cha,"%s%d%c","abc",6,'A');//��������д������sz_Cha��
//	i_Tmp=sprintf(sz_Cha,"%s%d%c","abc",6,'A');
//	printf("sprintf��������%s\n",sz_Cha);
//	printf("sprintf��������ֵ�����%d\n",i_Tmp);//�亯������ֵΪ�ַ�������
//
//	sscanf(sz_Cha,"%4s",sz_Chc);//��һ���ַ����ж�����ָ����ʽ��ͬ������,�䷵��ֵΪ������Ч���ݵĸ���
//	i_Tmp=sscanf(sz_Cha,"%4s",sz_Chc);
//	printf("sscanf������:%s\n",sz_Chc);
//	printf("sscanf��������ֵ�����%d\n\n",i_Tmp);//�亯������ֵΪ������Ч���ݵĸ���
//
//}

////ָ��ĸ�����ʹ�á�һά����ά��̬����
//void Indicator()
//{
//	//һά��̬����Ŀ���
//	printf("\nһά��̬����Ŀ���\n");
//	int i_Count;
//	int i_n;
//	int *i_Poi;
//	printf("���������鳤��:");
//	scanf("%d",&i_n);
//	i_Poi=(int*)malloc(i_n*sizeof(int));
//	if (i_Poi==NULL)
//	{
//		printf("����ռ�ʧ��\n");
//		exit(1);
//	}
//	printf("�����������Ԫ��:\n");
//	for (i_Count=0;i_Count<i_n;i_Count++)
//	{
//		i_Poi[i_Count]=i_Count*2;
//		printf("%d  ",i_Poi[i_Count]);
//
//	}
//	printf("\n");
//	free(i_Poi);
//
//	//��ά��̬����Ŀ���
//	printf("\n��ά��̬����Ŀ���\n");
//	int i_r,i_c;//ѭ������
//	int **i_Ppoi;//����ָ��
//	int i_Row,i_Col;//�������������������
//	printf("�������ά���������������:");
//	scanf("%d,%d",&i_Row,&i_Col);
//
//	i_Ppoi=(int**)malloc(i_Row*sizeof(int));//���ٿռ�
//	for (i_r=0;i_r<=i_Row-1;i_r++)
//	{
//		i_Ppoi[i_r]=(int*)malloc(i_Col*sizeof(int));
//	}
//
//	for (i_r=0;i_r<=i_Row-1;i_r++)//���Ԫ��
//	{
//		for (i_c=0;i_c<=i_Col-1;i_c++)
//		{
//			i_Ppoi[i_r][i_c]=i_r+i_c;
//			printf("%d\t",i_Ppoi[i_r][i_c]);
//		}
//		printf("\n");
//	}
//	for (i_r=0;i_r<=i_Row-1;i_r++)//�ͷſռ�
//	{
//		free(i_Ppoi[i_r]);	
//	}
//	free(i_Ppoi);
//}

////ȫ�ֱ�����ֲ�����
//void Ap_Vari()
//{
//	int i_c=11;//i_cΪ�ֲ�����
//	printf("����һ����i_a:");
//	scanf("%d",&i_a);
//	i_a=i_a+i_c;
//	printf("���i_a��i_c֮�ͣ�%d\n",i_a);
//}

////ѭ���ṹwhile��do-while����for���
//void Cycle()
//{
//	int i_Sum=0;
//	int i_Count=0;
//	int i_N;
//	printf("����һ������:");
//	scanf("%d",&i_N);
//	for (i_Count=0;i_Count<i_N;i_Count++)
//	{
//		i_Sum+=i_Count;
//	}
//	printf("forѭ��������֮�ͣ�%d\n",i_Sum);
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
//	printf("do-whileѭ��������֮�ͣ�%d\n",i_Sum);
//}

////����ֵ��ʽ����
//void FuncValue(int i_u,int i_v)
//{
//	printf("\nһ������ֵ��ʽ����\n");
//	printf("������i_a��i_b��ֵ��");
//	scanf("%d,%d",&i_a,&i_b);
//	i_Tmp=i_u;
//	i_u=i_v;
//	i_v=i_Tmp;
//	printf("   i_a=%d\n   i_b=%d\n",i_a,i_b);
//}
//
////����������ʽ����
//void FuncQuote(int &i_u,int &i_v)
//{
//	printf("��������������ʽ����\n");
//	printf("������i_a��i_b��ֵ��");
//	scanf("%d,%d",&i_a,&i_b);
//	i_Tmp=i_u;
//	i_u=i_v;
//	i_v=i_Tmp;
//	printf("   i_a=%d\n   i_b=%d\n",i_a,i_b);
//}
//
////������ַ��ʽ��������
//void FuncSite(int *i_u,int *i_v)
//{
//	i_Tmp=*i_u;
//	*i_u=*i_v;
//	*i_v=i_Tmp;
//}

////�ļ�д����
//void Filesave()
//{
//	int i;//ѭ������
//	FILE *fp;
//	if ((fp=fopen("stu.dat","wb"))==NULL)
//	{
//		printf("���ļ�����\n");
//		return;
//	}
//	for (i=0;i<3;i++)
//	{
//		if (fwrite(&stud[i],sizeof(struct Stu_Type),1,fp)!=1)
//			printf("�ļ�д�����\n");
//	}
//	fclose(fp);
//}
//
////�ļ�������
//void FileLoad()
//{
//	int i;//ѭ������
//	FILE *fp;
//	if ((fp=fopen("stu.dat","wb"))==NULL)
//	{
//		printf("���ļ�����\n");
//		exit(0);
//	}
//	for (i=0;i<3;i++)
//	{
//		fread(&stud[i],sizeof(struct Stu_Type),1,fp);
//		printf("%d %s %d\n",stud[i].i_StuId,stud[i].sz_StuName,stud[i].i_StuAge);
//	}
//	fclose(fp);
//}


////�༶��Ϣ�������
////�����༶��Ϣ������
//void CreateClassList(ClassPoi *ClassHead)
//{
//	int i_StuIds;
//	ClassPoi p,q,r;//˵������
//	printf("������ѧ��ѧ�ţ�");
//	scanf("%d",&i_StuIds);
//	p=q=*ClassHead;//���ҷ��������ļ�¼
//	while (p!=NULL)
//	{
//		if (p->i_StuId==i_StuIds)
//		{
//			printf("�Ѿ�����ͬѧ��\n");
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
//		printf("����ռ�ʧ��");
//		return;
//	}
//	if (q==NULL)//ԭ��Ϊ�ձ�
//		*ClassHead=r;
//	else
//	{
//		q->next=r;
//	}
//	r->i_StuId=i_StuIds;
//	printf("������༶��ţ�");
//	scanf("%d",&r->i_ClassId);	
//}
//
////ɾ���༶��Ϣ
//void ClasslistDelete(ClassPoi *ClassHead)
//{
//	int i_StuIds;
//	ClassPoi p,q;
//	printf("������ѧ��ѧ�ţ�");
//	scanf("%d",&i_StuIds);
//	p=q=*ClassHead;
//	while (p!=NULL&&i_flag)
//	{
//		if (p->i_StuId==i_StuIds)
//		{
//			if (p==*ClassHead)//ɾ����Ϊͷ���
//			{
//				*ClassHead=p->next;free(q);
//			}
//			else
//			{
//				q->next=p->next;free(p);//ɾ����ͨԪ��
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
////���Ұ༶��Ϣ
//void ClasslistFind(ClassPoi *ClassHead)
//{
//	int i_StuIds;
//	ClassPoi p;
//	printf("������Ҫ��ѯ��ѧ����ѧ�ţ�");
//	scanf("%d",&i_StuIds);
//	p=*ClassHead;
//	while(p!=NULL&&i_flag)
//	{
//		if (p->i_StuId==i_StuIds)
//		{
//			printf("�༶��ţ�%d\n",p->i_ClassId);
//			printf("ѧ��ѧ�ţ�%d\n",p->i_StuId);
//			i_flag=0;
//		}
//		else
//			p=p->next;//ָ���ߵ���һ���
//	}
//}
//
////��ʾ�༶��Ϣ
//void ClassShow(ClassPoi *ClassHead) 
//{
//	ClassPoi p;
//	p=*ClassHead;
//	printf("�༶���  ѧ��\n");
//	while(p!=NULL)
//	{
//		printf("%d     ",p->i_ClassId);
//		printf("%d\n",p->i_StuId);
//		p=p->next;
//	}
//}
//
//
////ѧ���������
////����ѧ����Ϣ������
//void CreateStuList(StuPoi *StuHead)
//{
//	int i_CNum;
//	StuPoi p,q,r;//˵������
//	printf("������ѧ�ţ�");
//	scanf("%d",&i_CNum);
//	p=q=*StuHead;//���ҷ��������ļ�¼
//	while (p!=NULL)
//	{
//		if (p->i_StuId==i_CNum)
//		{
//			printf("�Ѿ�����ͬ��ţ�");
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
//		printf("����ռ�ʧ��");
//		return;
//	}
//	if (q==NULL)//ԭ��Ϊ�ձ�
//		*StuHead=r;
//	else
//	{
//		q->next=r;
//	}
//	r->i_StuId=i_CNum;
//	printf("������������");
//	scanf("%s",r->sz_StuName);
//	printf("���������䣺");
//	scanf("%d",&r->i_StuAge);
//}
//
////ɾ��ѧ����Ϣ
//void LinklistDelete(StuPoi *StuHead)
//{
//	int i_CNum;
//	StuPoi p,q;
//	printf("������Ҫɾ����ѧ����ѧ�ţ�");
//	scanf("%d",&i_CNum);
//	p=q=*StuHead;
//	while (p!=NULL&&i_flag)
//	{
//		if (p->i_StuId==i_CNum)
//		{
//			if (p==*StuHead)//ɾ����Ϊͷ���
//			{
//				*StuHead=p->next;free(q);
//			}
//			else
//			{
//				q->next=p->next;free(p);//ɾ����ͨԪ��
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
////����ѧ����Ϣ
//void LinklistFind(StuPoi *StuHead)
//{
//	int i_CNum;
//	StuPoi p;
//	printf("������Ҫ��ѯ��ѧ����ѧ�ţ�");
//	scanf("%d",&i_CNum);
//	p=*StuHead;
//	while(p!=NULL&&i_flag)
//	{
//		if (p->i_StuId==i_CNum)
//		{
//			printf("ѧ�ţ�%d\n",p->i_StuId);
//			printf("������%s\n",p->sz_StuName);
//			printf("���䣺%d\n",p->i_StuAge);
//			i_flag=0;
//		}
//		else
//			p=p->next;//ָ���ߵ���һ���
//	}
//}
//
////�޸�ѧ����Ϣ
//void LinklistModifier(StuPoi *StuHead)
//{
//	int i_CNum;
//	StuPoi p;
//	printf("������Ҫ�޸ĵ�ѧ�ţ�");
//	scanf("%d",&i_CNum);
//	p=*StuHead;
//	while(p!=NULL&&i_flag)
//	{
//		if (p->i_StuId==i_CNum)
//		{
//			printf("�������޸�֮���������");
//			scanf("%s",p->sz_StuName);
//			printf("�������޸�֮������䣺");
//			scanf("%d",&p->i_StuAge);
//			i_flag=0;
//		}
//		else
//			p=p->next;
//	}
//}                                                                            
//
////��ʾѧ����Ϣ
//void Show(StuPoi *StuHead) 
//{
//	StuPoi p;
//	p=*StuHead;
//	printf("ѧ��  ����  ����\n");
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
////�γ���Ϣ�������
////�����γ���Ϣ������
//void CreateCourseList(CoursePoi *CourseHead)
//{
//	int i_CourseIds;
//	CoursePoi p,q,r;//˵������
//	printf("������γ̱�ţ�");
//	scanf("%d",&i_CourseIds);
//	p=q=*CourseHead;//���ҷ��������ļ�¼
//	r=(CoursePoi)malloc(sizeof(CourseList));
//	r->next=NULL;
//	if (r==NULL)
//	{
//		printf("����ռ�ʧ��");
//		return;
//	}
//	if (q==NULL)//ԭ��Ϊ�ձ�
//		*CourseHead=r;
//	else
//	{
//		q->next=r;
//	}
//	r->i_CourseId=i_CourseIds;
//	printf("������γ�����");
//	scanf("%s",r->sz_CourseName);	
//	printf("������༶��ţ�");
//	scanf("%d",&r->i_ClassId);	
//}
//
////ɾ���γ���Ϣ
//void CourselistDelete(CoursePoi *CourseHead)
//{
//	int i_ClassIds,i_CourseIds;
//	CoursePoi p,q;
//	printf("������༶�Ϳγ̺ţ�");
//	scanf("%d%d",&i_ClassIds,&i_CourseIds);
//	p=q=*CourseHead;
//	while (p!=NULL&&i_flag)
//	{
//		if (p->i_ClassId==i_ClassIds&&p->i_CourseId==i_CourseIds)
//		{
//			if (p==*CourseHead)//ɾ����Ϊͷ���
//			{
//				*CourseHead=p->next;free(q);
//			}
//			else
//			{
//				q->next=p->next;free(p);//ɾ����ͨԪ��
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
////���ҿγ���Ϣ
//void CourselistFind(CoursePoi *CourseHead)
//{
//	int i_ClassIds;
//	CoursePoi p;
//	printf("������Ҫ��ѯ��ѧ����ѧ�ţ�");
//	scanf("%d",&i_ClassIds);
//	p=*CourseHead;
//	while(p!=NULL&&i_flag)
//	{
//		if (p->i_ClassId==i_ClassIds)
//		{
//			printf("�༶��ţ�%d\n",p->i_ClassId);
//			printf("�γ̺ţ�%d\n",&p->sz_CourseName);
//			printf("�γ�����%d\n",p->i_CourseId);
//			i_flag=0;
//		}
//		else
//			p=p->next;//ָ���ߵ���һ���
//	}
//}
//
////��ʾ�γ���Ϣ
//void CourseShow(CoursePoi *CourseHead) 
//{
//	CoursePoi p;
//	p=*CourseHead;
//	printf("�༶��� �γ̺�  �γ���  \n");
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
////�ɼ���Ϣ�������
////�����ɼ���Ϣ������
//void CreateScoreList(StuScorePoi *ScoreHead)
//{
//	int i_StuIds;
//	StuScorePoi p,q,r;//˵������
//	printf("������ѧ�ţ�");
//	scanf("%d",&i_StuIds);
//	p=q=*ScoreHead;//���ҷ��������ļ�¼
//	r=(StuScorePoi)malloc(sizeof(StuScoreList));
//	r->next=NULL;
//	if (r==NULL)
//	{
//		printf("����ռ�ʧ��");
//		return;
//	}
//	if (q==NULL)//ԭ��Ϊ�ձ�
//		*ScoreHead=r;
//	else
//	{
//		q->next=r;
//	}
//	r->i_StuId=i_StuIds;
//	printf("������γ̺ţ�");
//	scanf("%d",&r->i_CourseId);
//	printf("������γ̷�����");
//	scanf("%d",&r->i_CourseScore);	
//}
//
////ɾ���ɼ���Ϣ
//void StuScorelistDelete(StuScorePoi *ScoreHead)
//{
//	int i_StuIds;
//	StuScorePoi p,q;
//	printf("������ѧ��ѧ�ţ�");
//	scanf("%d",&i_StuIds);
//	p=q=*ScoreHead;
//	while (p!=NULL&&i_flag)
//	{
//		if (p->i_StuId==i_StuIds)
//		{
//			if (p==*ScoreHead)//ɾ����Ϊͷ���
//			{
//				*ScoreHead=p->next;free(q);
//			}
//			else
//			{
//				q->next=p->next;free(p);//ɾ����ͨԪ��
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
////���ҳɼ���Ϣ
//void StuScorelistFind(StuScorePoi *ScoreHead)
//{
//	int i_StuIds;
//	StuScorePoi p;
//	printf("������Ҫ��ѯ��ѧ����ѧ�ţ�");
//	scanf("%d",&i_StuIds);
//	p=*ScoreHead;
//	while(p!=NULL&&i_flag)
//	{
//		if (p->i_StuId==i_StuIds)
//		{
//			printf("�γ̺ţ�%d\n",p->i_CourseId);
//			printf("ѧ�ţ�%d\n",&p->i_StuId);
//			printf("�ɼ���%d\n",p->i_CourseScore);
//			i_flag=0;
//		}
//		else
//			p=p->next;//ָ���ߵ���һ���
//	}
//}
//
////��ʾ�ɼ���Ϣ
//void StuScoreShow(StuScorePoi *ScoreHead) 
//{
//	StuScorePoi p;
//	p=*ScoreHead;
//	printf("�γ̺�  ѧ��  �ɼ�\n");
//	while(p!=NULL)
//	{
//		printf("%d     ",p->i_CourseId);
//		printf("%d     ",p->i_StuId);
//		printf("%d\n",p->i_CourseScore);
//		p=p->next;
//	}
//	//printf("����֮��\n");
//	//if (p->i_CourseScore.)
//	//{
//
//	//}
//
//}

////˫����Ľ���
//DlPList DlistCreate()
//{
//	Node *p,*L,*r;
//	Elemtype i_Elem;
//	L=(Node*)malloc(sizeof(Node));//����ͷ���
//	L->next=NULL;
//	r=L;
//	r->next=NULL;//rΪָ���ս���ָ��
//
//	printf("������Ԫ�أ�-1��������:");
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
////˫����Ĳ���
//DlPList DlListInsert(DlPList L,int i_Locate,Elemtype i_Elem)
//{
//	DlPList p,s;//sΪҪ����Ľ��
//	p=L->next;//�ӵ�һ��λ�ÿ�ʼ����
//	for (i_Tmp=1;i_Tmp<i_Locate-1;i_Tmp++)
//	{
//		p=p->next;
//	}
//	s=(Node*)malloc(sizeof(Node));
//	s->data=i_Elem;
//	s->next=p->next;//��������
//	p->next->prior=s;
//	s->prior=p;
//	p->next=s;
//	return L;
//}
//
////˫����ɾ����i�����
//DlPList DlListDelete(DlPList L,int i_locate)
//{
//	int i_Tmp=1;
//	DlPList p;//pΪ���ҽ��
//	p=L->next;
//	while((i_Tmp++)!=i_locate&&p!=NULL)
//	{
//		p=p->next;
//	}
//	if (p==NULL)
//	{
//		printf("λ�ò��Ϸ�\n");
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
////˫�����ɾ��
//void DlListClear(DlPList L)
//{
//	L->next=NULL;
//	printf("ɾ���ɹ�\n");
//
//}

////ð������
//void BubbleSort()
//{
//	//ð������
//	int i,j;//Ӧ����ѭ��
//	int *i_Poi;
//	printf("���������鳤��:");
//	scanf("%d",&i_Len);
//	i_Poi=(int*)malloc(i_Len*sizeof(int));
//	printf("����������");
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
//	printf("����֮��Ϊ��");
//	for (i=0;i<i_Len;i++)
//	{
//		printf("%d  ",i_Poi[i]);
//	}
//	printf("\n");
//}
//
////�۰�����
//void HalfSort()
//{
//
//	int i,j;//ѭ������
//	int k; //�����±�
//	int *i_Poi;
//	int i_Left;
//	int i_Right;
//	int i_Half;
//
//	printf("���������鳤��:");
//	scanf("%d",&i_Len);
//	i_Poi=(int*)malloc(i_Len*sizeof(int));
//	printf("����������");
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

////struct��union���궨��
//void Type()
//{
//    printf("����");
//}

////���˵�
//int MenuMain()
//{
//	char sz_Menu[6];
//	char c_Menu;
//	printf("***************��һ������******************\n");
//	printf("\t1----��������\n");
//	printf("\t2----���������\n");
//	printf("\t3----λ�����\n");
//	printf("\t4----�߼������\n");
//	printf("\t5----��ַ��ָ�������\n");
//	printf("\t6----���鶨���Լ�ʹ��\n");
//	printf("\t7----�ַ�����\n");
//	printf("\t8----ָ���붯̬����\n");
//	printf("\t9----ȫ�ֱ�����ֲ�����\n");
//	printf("\tA----ѭ���ṹ\n");
//	printf("\tB----����ʹ��\n");
//	printf("\tC----�ļ�����\n");
//	printf("\tD----����ṹ\n");
//	printf("\tE----ð���������۰�����\n");
//	printf("\tF----Struct��union�ͺ궨��\n");
//	printf("\tG----ѧ������ϵͳ\n");
//	printf("\t0----�˳�\n");
//	printf("******************************************\n");
//	printf("���������˵�ѡ�");
//	scanf("%s",sz_Menu);
//	if (strlen(sz_Menu)>1)
//	{
//		fflush(stdin);
//		printf("ѡ�����������ѡ��\n");
//	}
//	else
//	{
//		c_Menu=sz_Menu[0];
//	}
//	return c_Menu;
//}
#endif
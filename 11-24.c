#include<stdio.h>
#include<stdlib.h>
/*���Ͷ���*/
typedef char DataType;
#include "SeqStack.h"  /*����ջ�Ļ�������ʵ��*/
void main()
{
  SeqStack S;     /*����һ��ջ*/
  int i;
  DataType a[]={'A','B','C','D','E','F','G','H'};
  DataType e;
  InitStack(&S);/*��ʼ��ջ*/
  for(i=0;i<sizeof(a)/sizeof(a[0]);i++) /*������a�е�Ԫ��������ջ*/
  {
    if(PushStack(&S,a[i])==0)
    {
      printf("ջ������������ջ!");
      return;
    }
  }
  printf("���γ�ջ��Ԫ����");
  if(PopStack(&S,&e)==1)  /*Ԫ��H��ջ*/
    printf("%4c",e);
  if(PopStack(&S,&e)==1)  /*Ԫ��G��ջ*/
    printf("%4c",e);
  printf("\n");
  printf("��ǰ��ջ��Ԫ����");
  if(GetTop(S,&e)==0)   /*ȡջ��Ԫ��*/
  {
    printf("ջ�ѿ�!");
    return;
  }
  else
    printf("%4c\n",e);
  printf("��Ԫ��G��H������ջ��\n");
  if(PushStack(&S,'G')==0)   /*Ԫ��G��ջ*/
  {
    printf("ջ������������ջ!");
    return;
  }
  if(PushStack(&S,'H')==0)   /*Ԫ��H��ջ*/
  {
    printf("ջ������������ջ��");
    return;
  }
  printf("��ǰջ�е�Ԫ�ظ�����%d\n",StackLength(S));  /*���ջ��Ԫ�ظ���*/
  printf("��ջ��Ԫ�س�ջ����ջ��������\n");
  while(!StackEmpty(S))  /*���ջ���գ�������Ԫ�س�ջ*/
  {
    PopStack(&S,&e);
    printf("%4c",e);
  }
  printf("\n");
}

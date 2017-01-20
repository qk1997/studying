/*
 *     num:    201510050407
 * puepose:    ��������
 *  Create:    2016��12��31��
 *  Author:    Albert
 */

#include <stdio.h>
#define maxsize 7
typedef  int  elemtype;
 
typedef struct   
    { 
  elemtype  queue[maxsize];       
     int front, rear; 
  }queuetype;
 
//��ʼ���жӵ����� 
void  initmalequeue(queuetype  *qmale)
 { 
      qmale->front=qmale->rear=maxsize - 1;  
 }
 
//��ʼ��Ů�ӵ�����  
void  initfemalequeue(queuetype  *qfemale)
 { 
      qfemale->front=qfemale->rear=(maxsize-2) - 1;  
 }
 
void  menter(queuetype  *Q, elemtype x, int max)  //�ж���Ӳ���
{ 
 if ((Q->rear+1)% max == Q->front )   
  printf("overflow/n");  //�ж��Ƿ����
  else
    { 
  Q->rear++;   //��βָ�����
  Q->queue[Q->rear%max] = x;   //��Ԫ�ظ�����β��Ԫ
      }
}
 
void  fenter(queuetype  *Q, elemtype x, int max)  //Ů����Ӳ���
{ 
 if ((Q->rear+1)% max == Q->front )   
  printf("overflow/n");  //�ж��Ƿ����
  else
    { 
  Q->rear++;   //��βָ�����
  Q->queue[Q->rear%max] = x;   //��Ԫ�ظ�����β��Ԫ
      }
}
 
void mput(queuetype  *Q, int max)  //�жӳ��Ӳ���
{
 if  (Q->front == Q->rear)   
  printf("underflow/n");  //�ж��Ƿ�Կ�
 else    
 {
  printf("%2d", Q->queue[(Q->front+1)%max]);
  (Q->front++)%max; // ɾ����� 
 }
}
 
void fput(queuetype  *Q, int max)  //Ů�ӳ��Ӳ���
{
 if  (Q->front == Q->rear)   
  printf("underflow/n");  //�ж��Ƿ�Կ�
 else    
 {
  printf("%2d", Q->queue[(Q->front+1)%max]);
  (Q->front++)%max; // ɾ����� 
 }
}
 
void maleEnter(queuetype  *Q)  //ģ��1-5λ���������ж����
{
 int i;
 initmalequeue(Q);
 for (i = 1; i < maxsize; i++)
 {
  menter(Q, i, maxsize);
 }
}
 
void femaleEnter(queuetype  *Q)  //ģ��1-3λ��������Ů�����
{
 int i;
 initfemalequeue(Q);
 
 for (i = 1; i < (maxsize - 2); i++)
 {
  fenter(Q, i, (maxsize-2));
 }
}
 
void main()
{
 queuetype m;
 queuetype f;
 queuetype *male;
 queuetype *female;
 
 male = &m, female = &f;
 
    //��Ů��ӣ�����ʼ��
  maleEnter(male);
  femaleEnter(female);
  //��Ů�״γ���
  printf("�ж� Ů��/n");
  mput(male, maxsize);
  fput(female, (maxsize-2));
  putchar('/n');
  while (1) //ѭ������
  {
   //����Ů�����ֶ���1��ʼ��ʱ��ѭ������
   if (male->queue[(male->front+1)%maxsize]==1
    && female->queue[(female->front+1)%(maxsize-2)]==1) 
   {
    printf("��������Ѿ����/n");
    break;
   }
   if (male->front%maxsize == (male->rear)%maxsize)
   {
    printf(" �ж������Ѿ�ȫ���������/n");
    maleEnter(male);
    continue;
   }
   if (female->front%(maxsize-2) == (female->rear)%(maxsize-2))
   {
    printf(" Ů������������--һ����Ŀ���赸����!/n");
    femaleEnter(female);
    continue;
   }
   //��Ů�Գ��Ӳ���
   mput(male, maxsize);
   fput(female, (maxsize - 2));
   printf("/n"); 
  }
}

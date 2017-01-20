/*
 *     num:    201510050407
 * puepose:    舞厅问题
 *  Create:    2016年12月31日
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
 
//初始化男队的人数 
void  initmalequeue(queuetype  *qmale)
 { 
      qmale->front=qmale->rear=maxsize - 1;  
 }
 
//初始化女队的人数  
void  initfemalequeue(queuetype  *qfemale)
 { 
      qfemale->front=qfemale->rear=(maxsize-2) - 1;  
 }
 
void  menter(queuetype  *Q, elemtype x, int max)  //男队入队操作
{ 
 if ((Q->rear+1)% max == Q->front )   
  printf("overflow/n");  //判断是否队满
  else
    { 
  Q->rear++;   //队尾指针后移
  Q->queue[Q->rear%max] = x;   //新元素赋给队尾单元
      }
}
 
void  fenter(queuetype  *Q, elemtype x, int max)  //女队入队操作
{ 
 if ((Q->rear+1)% max == Q->front )   
  printf("overflow/n");  //判断是否队满
  else
    { 
  Q->rear++;   //队尾指针后移
  Q->queue[Q->rear%max] = x;   //新元素赋给队尾单元
      }
}
 
void mput(queuetype  *Q, int max)  //男队出队操作
{
 if  (Q->front == Q->rear)   
  printf("underflow/n");  //判断是否对空
 else    
 {
  printf("%2d", Q->queue[(Q->front+1)%max]);
  (Q->front++)%max; // 删除结点 
 }
}
 
void fput(queuetype  *Q, int max)  //女队出队操作
{
 if  (Q->front == Q->rear)   
  printf("underflow/n");  //判断是否对空
 else    
 {
  printf("%2d", Q->queue[(Q->front+1)%max]);
  (Q->front++)%max; // 删除结点 
 }
}
 
void maleEnter(queuetype  *Q)  //模拟1-5位整数测试男队入队
{
 int i;
 initmalequeue(Q);
 for (i = 1; i < maxsize; i++)
 {
  menter(Q, i, maxsize);
 }
}
 
void femaleEnter(queuetype  *Q)  //模拟1-3位整数测试女队入队
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
 
    //男女入队，并初始化
  maleEnter(male);
  femaleEnter(female);
  //男女首次出队
  printf("男队 女队/n");
  mput(male, maxsize);
  fput(female, (maxsize-2));
  putchar('/n');
  while (1) //循环测试
  {
   //当男女人数又都从1开始排时，循环结束
   if (male->queue[(male->front+1)%maxsize]==1
    && female->queue[(female->front+1)%(maxsize-2)]==1) 
   {
    printf("配对跳舞已经完成/n");
    break;
   }
   if (male->front%maxsize == (male->rear)%maxsize)
   {
    printf(" 男队人数已经全部配对跳舞/n");
    maleEnter(male);
    continue;
   }
   if (female->front%(maxsize-2) == (female->rear)%(maxsize-2))
   {
    printf(" 女队人数排完了--一个曲目的舞蹈结束!/n");
    femaleEnter(female);
    continue;
   }
   //男女对出队操作
   mput(male, maxsize);
   fput(female, (maxsize - 2));
   printf("/n"); 
  }
}

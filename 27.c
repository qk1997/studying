/*
 *     num:    201510050407
 * puepose:    �ж�������
 *  Create:    2016��12��31��
 *  Author:    Albert
 */

#include "stdio.h"
int main()
{
int year, month, day; //�û������������
int total=0; //������
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31}; //ÿ�µ���������

printf("�������� �� �� ���м��ÿո�ֿ�:\n");
if(scanf("%d%d%d", &year, &month, &day)!=3) //�ȴ��û����룬���ж������Ƿ���ȷ
{
printf("�������\n");
return -1;
}

if( (year%400==0) || ( year%4==0 && year%100!=0 ) ) //��������꣬���·�Ϊ29��
{
days[1]=29;
}

if(year<1 || year>9999 || month<1 || month>12 || day<1 || day>days[month-1]) //�ж���һ���Ƿ����
{
printf("���ڴ���\n");
return -1;
}

switch(month) //������switch��������ڵ�֮����������ִ�е��ص�
{
case 12:
total += 30; //����break���
case 11:
total += 31;
case 10:
total += 30;
case 9:
total += 31;
case 8:
total += 31;
case 7:
total += 30;
case 6:
total += 31;
case 5:
total += 30;
case 4:
total += 31;
case 3:
total += days[1];
case 2:
total += 31;

case 1:
; //�����κ���
default:
; //�����κ���
}

total += day;

printf("%d��%d��%d����%d��ĵ�%d��\n", year, month, day, year, total);

return 0;

}
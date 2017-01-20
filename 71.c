/*
 *     num:    201510050407
 * puepose:    协调世界时（UTC）转换成GPS时间系统
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include "stdio.h"
int Time(int year,int month,int day)
{
int total=0; //总天数
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31}; //每月的总天数
/*
printf("请输入年 月 日 ，中间用空格分开:\n");
if(scanf("%d%d%d", &year, &month, &day)!=3) //等待用户输入，并判断输入是否正确
{
printf("输入错误\n");
return -1;
}
*/
if( (year%400==0) || ( year%4==0 && year%100!=0 ) ) //如果是闰年，二月份为29天
{
days[1]=29;
}
if(year<1 || year>9999 || month<1 || month>12 || day<1 || day>days[month-1]) //判断这一天是否存在
{
printf("日期错误\n");
return -1;
}
switch(month) //利用了switch语句进入入口点之后依次往下执行的特点
{
case 12:
total += 30; //不用break语句
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
; //不做任何事
default:
; //不做任何事
}
total += day;
return total;
}
void GPS_time(int year,int month,int day)
{
	year=year-1980;
}
main()
{
int year, month, day,i,sum=0,total,a,b; //用户输入的年月日
printf("请输入年 月 日 ，中间用空格分开:\n");
scanf("%d%d%d", &year, &month, &day);
total=Time(year, month, day);
printf("%d年%d月%d日是%d年的第%d天\n", year, month, day, year, total);
for(i=1980;i<year;i++)
sum+=Time(i, 12, 31);
sum=sum+total-6;
a=sum%7;b=(sum-a)/7;
printf("对应gps的第%d周的%d天\n",b,a);
}

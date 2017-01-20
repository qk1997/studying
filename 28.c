/*
 *     num:    201510050407
 * puepose:    协调世界时（UTC）转换成GPS时间系统
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
int leap(int year){
return (year%4==0&&year%100!=0)||(year%400==0);
}
int doy(int year ,int mon ,int day){
	int i,doy=0;
	int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(leap(year)) months[2]+=1;
	for(i=1;i<=mon;i++)
		doy+=months[i-1];
	return (doy+day);
}
int gpsw(int year ,int mon ,int day){
	int i;
	int SumYr=0;
	for(i=1980;i<year;i++)
	SumYr+=(365+leap(i));
	SumYr+=doy(year,mon,day)-6;
	return SumYr;
	
}
int main(){
	int  year, month, day,SumYr,a,b,c;
	printf("请输入年 月 日 ，中间用空格分开:\n");
	scanf("%d%d%d",&year,&month,&day);
	SumYr=gpsw( year, month, day);
	a=SumYr%7;
	b=(SumYr-a)/7;
	c=doy( year, month, day);
	printf("%d年%d月%d日是%d年的第%d天\n", year, month, day, year, c);
	printf("对应gps的第%d周的%d天\n",b,a);
	return 0;
}

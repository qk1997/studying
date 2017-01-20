/*
 *     num:    201510050407
 * puepose:    坐标解析法求多边形面积
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
void area1(double x[6],double y[6],int n)
{
	double sum1=0; int i;
	for(i=1;i<=n;i++){
		if(i+1==n+1){
			x[i+1]=x[1];y[i+1]=y[1];}
		sum1=sum1+(y[i]+y[i+1])*(x[i+1]-x[i])/2;}		
			printf("area=%lf\n",sum1);
}
void area2(double x[6],double y[6],int n)
{
	double sum2=0; int i;
	for(i=1;i<=n;i++){
		if(i+1==n+1){
			x[i+1]=x[1];y[i+1]=y[1];}
		sum2=sum2+(y[i]-y[i+1])*(x[i+1]+x[i])/2;}		
			printf("area=%lf\n",sum2);
}
main()
{
//	int i;
double a[5]={1,2,2,4,3};
double b[5]={1,2,3,2,1};
	area1(a,b,5);
	area2(a,b,5);

}
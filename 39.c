/*
 *     num:    201510050407
 * puepose:    坐标增量公式
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define rad atan(1)/45
main()
{
	double x,y,D,T,X,Y;
	scanf("%lf%lf%lf%lf\n",&x,&y,&D,&T);
	T=T*rad;
	X=x+D*cos(T);
	Y=y+D*sin(T);
	printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",x,y,X,Y,D,T);
	
}
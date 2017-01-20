/*
 *     num:    201510050407
 * puepose:    共线方程
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	
	double a1,a2,a3,b1,b2,b3,c1,c2,c3;
	double X,X1,Y,Y1,Z,Z1,x,y;
	scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf",&a1,&a2,&a3,&b1,&b2,&b3,&c1,&c2,&c3);
	scanf("%lf%lf%lf%lf%lf%lf",&X,&Y,&Z,&X1,&Y1,&Z1);
	x=-(a1*(X-X1)+b1*(Y-Y1)+c1*(Z-Z1))/(a3*(X-X1)+b3*(Y-Y1)+c3*(Z-Z1));
	y=-(a2*(X-X1)+b2*(Y-Y1)+c2*(Z-Z1))/(a3*(X-X1)+b3*(Y-Y1)+c3*(Z-Z1));
	printf("%lf\t%lf\n",x,y);
}

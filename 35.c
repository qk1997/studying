/*
 *     num:    201510050407
 * puepose:    大地坐标计算空间大地直角坐标
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#define e 0.0066943799013
#define rad atan(1)/45
main()
{
	double N,B,L,h,W;
	double X,Y,Z;
	double a=6370137.0;
	B=30.5*rad;L=120.4*rad;h=62.0;
	W=sqrt((1-e*e)*sin(B));
	N=a/W;
	X=(N+h)*cos(B)*cos(L);
	Y=(N+h)*cos(B)*sin(L);
	Z=(N*(1-e*e)+h)*sin(B);
	printf("%7.4lf\t%7.4lf\t%lf\n",X,Y,Z);

}


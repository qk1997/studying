/*
 *     num:    201510050407
 * puepose:    平行圈弧长
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#define p 206265
#define e 0.0066943799013
#define rad atan(1)/45
main()
{
	double N,B,L1,L2,s,W;
	double a=6370137.0;
	B=35.5*rad; L1=120.2*rad; L2=116.5*rad;
	W=sqrt((1-e*e)*sin(B));
	N=a/W;
	s=N*cos(B)*(L1-L2)/p;
	printf("S=%lf\n",s);
}
/*
 *     num:    201510050407
 * puepose:    ����������ʽ
 *  Create:    2016��12��31��
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
/*
 *     num:    201510050407
 * puepose:    气象改正公式
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define rad atan(1)/45
#define p 206265
main()
{
	double D,P,e,t,d;
	scanf("%lf\t%lf\t%lf\t%lf\n",&P,&e,&t,&d);
	D=(282.2-(105.91*P-158.02*e)/(273.16+t))*pow(10,-6)*d;
	printf("%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\n",P,e,d,t,D);

}
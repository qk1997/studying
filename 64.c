/*
 *     num:    201510050407
 * puepose:    平曲线转角点偏角计算公式
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define rad atan(1)/45
main()
{	
	double a1,a2,b;
	scanf("%lf%lf\n",&a1,&a2);
	b=a1-a2;
	printf("%6.3lf\t%6.3lf\t%6.3lf\n",a1,a2,b);
}
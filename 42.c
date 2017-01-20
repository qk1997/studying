/*
 *     num:    201510050407
 * puepose:    测站归心改正公式
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
	double a,M,e,s,c,r;
	scanf("%lf%lf%lf%lf\n",&a,&M,&e,&s);
	c=e/s*p*sin(M+a);
	r=e/s*p*sin(M+a);
	printf("%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\n",a,M,e,s,c,r);

}
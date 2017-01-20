/*
 *     num:    201510050407
 * puepose:    太阳系质心力学时(TDB)和地球质心力学时(TDT)
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
	double TDT,TDB,g,T,a,M,e,s,r,c;
	scanf("%lf\t%lf\n",&TDT,&T);
	g=(357.528+35999.050*T)*(rad);
	TDB=TDT+0.001658*sin(g+0.0167*sin(g));
	printf("%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\n",a,M,e,s,c,r);

}
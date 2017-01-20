/*
 *     num:    201510050407
 * puepose:    地基承载力
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define rad atan(1)/45
main()
{	
	double N,M;
	scanf("%lf\n",&N);
	M=(N*0.785-2)/100;
	printf("%6.3lf\tlf\n",N,M);
	
}
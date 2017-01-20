/*
 *     num:    201510050407
 * puepose:    分带投影经度计算
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	
	int n,L0,L1;
	scanf("%lf",&n);
	L0=6*n-3;
	L1=3*n;
	printf("%lf%lf\n",L0,L1);
}

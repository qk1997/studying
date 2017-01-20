/*
 *     num:    201510050407
 * puepose:    照准差
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#define rad atan(1)/45
main()
{	
	double L,R;
	double c,C,z;
	L=119.6*rad; R=119.5*rad;;z=36.5*rad;
	if((L-R)<0)
	C=0.5*(L-R)+180;
	if((L-R)>0) C=0.5*(L-R)-180;
	c=-C/sin(z);
	printf("%lf\t%lf\t%lf\t%lf\t%lf\n",L,R,z,C,c);
}
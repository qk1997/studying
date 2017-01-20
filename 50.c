/*
 *     num:    201510050407
 * puepose:    角度转换
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
double rad2dms(double rad)
{
	int deg,min,sec;
	deg=(int)(rad*45/atan(1));
	min=(int)((rad*45/atan(1)-deg)*60);
	sec=((rad*45/atan(1)-deg)*60-min)*60;
	printf("%d%d%d\n",deg,min,sec);
}
main()
{	
	double rad,deg,min,sec;
	scanf("%lf\n",&rad);
	rad2dms(rad);
	printf("%6.3lf\t%6.3lf\t%6.3lf\t%6.3lf\n",deg,min,sec,rad);

}

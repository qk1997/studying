/*
 *     num:    201510050407
 * puepose:    方位角转换
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define rad atan(1)/45
main()
{
	double x1,y1,x2,y2,s,a;
	scanf("%lf%lf%lf%lf\n",&x1,&y1,&x2,&y2);
	s=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	if((y2-y1)>0&&(x2-x1)>0) a=atan(y2-y1)/(x2-x1);
	if((y2-y1)<0&&(x2-x1)>0) a=atan(y2-y1)/(x2-x1)+360;
	if((x2-x1)<0) a=atan(y2-y1)/(x2-x1)+180;
	printf("%6.3lf\t%6.3lf\n",s,a);
	
}

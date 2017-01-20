/*
 *     num:    201510050407
 * puepose:    摄影测量航向重叠度计算
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
main()
{
	
	double p1,p2,l,L,H,h;
	scanf("%lf,%lf,%lf,%lf",&l,&L,&h,&H);
	p1=l/L*100;
	p2=p1+(1-p1)*h/H;
	printf("%lf\t%lf\n",p1,p2);

}


/*
 *     num:    201510050407
 * puepose:    判断一个点与由两个点构成的线之间的关系
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
main()
{
	double x1,x2,x3,y1,y2,y3;
	double k1,k2;
	double s1,s2,s;
	scanf("%lf%lf%lf%lf%lf%lf\n",&x1,&y1,&x2,&y2,&x3,&y3);
	s=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	s1=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	s2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	if(s==s1+s2) printf("point is online");
	else printf("point is not online");
	k1=(x1-x2)/(y1-y2);k2=(x1-x3)/(y1-y3);
	if(k2>k2) printf("point is up");
	else printf("poiint is down");
}


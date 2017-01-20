/*
 *     num:    201510050407
 * puepose:    航摄因子计算
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
main()
{
	double a,s,h1,h2,h3,h4,c,p1,p2,l,f;
	double H1,XH,JH,Hp,lp,Hp1,lp1,Js,jg,n,n1,sum;
	scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf",&a,&s,&h1,&h2,&h3,&h4,&c,&p1,&p2,&l,&f);
	H1=h3+h4; XH=1/c*l/1000; JH=H1+XH; Hp=p1+(1-p1)*(H1-h2)/3048; lp=p1+(1-p1)*(H1-h1);
	Hp1=p2+(1-p2)*(H1-h2); lp1=p2+(1-p2)*(H1-h1); Js=10*f*(1-p1)*1/c/1000; jg=10*f*(1-p2)*1/c/1000;
	n=1000*a/jg; n1=(int)(s*1000/Js+1);  sum=n1*n;
	printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",H1,XH,JH,Hp,lp,Hp1,lp1,Js,jg,n,n1,sum);

}


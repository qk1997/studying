/*
 *     num:    201510050407
 * puepose:    航摄因子计算
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
#define e 0.0066943799013
main()
{
	
	FILE *fp1,*fp2;
	double a,s,h1,h2,h3,h4,c,p1,p2,l,f;
	double H1,XH,JH,Hp,lp,Hp1,lp1,Js,jg,n,n1,sum;
if((fp1=fopen("data.in","r"))==NULL)
{
	printf("cannot open this file\n");
	return (-1);
}
if((fp2=fopen("data.out","w"))==NULL)
{
	printf("cannot open this file\n");
	return (-2);
}

while(!feof(fp1)){
	fscanf(fp1,"%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf",&a,&s,&h1,&h2,&h3,&h4,&c,&p1,&p2,&l,&f);
	H1=h3+h4; XH=1/c*l/1000; JH=H1+XH; Hp=p1+(1-p1)*(H1-h2)/3048; lp=p1+(1-p1)*(H1-h1);
	Hp1=p2+(1-p2)*(H1-h2); lp1=p2+(1-p2)*(H1-h1); Js=10*f*(1-p1)*1/c/1000; jg=10*f*(1-p2)*1/c/1000;
	n=1000*a/jg; n1=(int)(s*1000/Js+1);  sum=n1*n;
	printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",H1,XH,JH,Hp,lp,Hp1,lp1,Js,jg,n,n1,sum);
	fprintf(fp2,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",H1,XH,JH,Hp,lp,Hp1,lp1,Js,jg,n,n1,sum);
}
	fclose(fp1);
	fclose(fp2);

}


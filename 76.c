/*
 *     num:    201510050407
 * puepose:    牛顿迭代法求根
 *  Create:    2016年12月31日
 *  Author:    Albert
 */

#include<stdio.h>
#include<math.h>
float f(float a,float b,float c,float d,float x)
{
	float f;
    f=x*x*x*a+b*x*x+c*x+d;
	return f;
}
float f1(float a,float b,float c,float x)
{
	float fd;
	fd=3*a*x*x+2*b*x+c;
	return fd;
}
float root(float a,float b,float c,float d)
{
	float x0,x1=1;
	do{
	x0=x1;
	x1=x0-f(a,b,c,d,x0)/f1(a,b,c,x0);
	}while(fabs(x1-x0)>=1e-10);
	return x0;
}
void root1(float a,float b,float c,float d,float x0)
{
	double bb,cc,delta,x1,x2;
	bb=b*x0; cc=3*x0*(c*x0+d); 
	delta=bb*bb-4*cc;
	if(delta>0){
		x1=(-bb+sqrt(delta))/(2*3*x0);
		x2=(-bb-sqrt(delta))/(2*3*x0);
		printf("x1=%lf\tx2=%lf\n",x1,x2);}
}
 main()
{
float a,b,c,d,x;
printf("input four float numbers:\n");
scanf("%f%f%f%f",&a,&b,&c,&d);
x=root(a,b,c,d);
printf("%.1fX^3+%.1fX^2+%.1fX+%.1f=0 its root near x=1.5 is :%.4f\n",a,b,c,d,x);
root1(a,b,c,d,x);
}